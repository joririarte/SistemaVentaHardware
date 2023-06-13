#include "pch.h"
#include "Item.h"

//cambia los botones y rellena el formulario con los datos de una tabla segun un modo
System::Void SistemaVentaHardware::Item::Modificar_Form(int mod, DataGridView^ data)
{
	switch (mod)
	{
	case 1: //Nuevo Item
		this->btn_modificar->Visible = false;
		this->txt_codigo->Text = (data->RowCount + 1).ToString();
		break;
	case 2: //Modificar Item
		this->btn_agregar->Enabled = false;
		this->btn_agregar->Visible = false;
		this->btn_modificar->Location = System::Drawing::Point(348, 300);

		this->Llenar_Inputs(data);
		break;
	case 3: //Eliminar Item
		this->btn_agregar->Visible = false;
		this->btn_modificar->Visible = false;
		this->btn_eliminar->Visible = true;
		this->txt_codigo->Enabled = true;
		this->txt_descripcion->Enabled = false;
		this->txt_precio->Enabled = false;
		this->txt_existencias->Enabled = false;
		this->txt_minima->Enabled = false;
		this->comboBox_tipo->Enabled = false;
		this->btn_eliminar->Location = System::Drawing::Point(348, 300);
		this->btn_cancelar->FlatAppearance->MouseOverBackColor = Color::FromArgb(192, 255, 192);

		this->Llenar_Inputs(data);
		break;
	}
}

//llena los inputs
System::Void SistemaVentaHardware::Item::Llenar_Inputs(DataGridView^ data)
{
	this->txt_codigo->Text = data->CurrentRow->Cells[0]->Value->ToString();
	this->txt_descripcion->Text = data->CurrentRow->Cells[1]->Value->ToString();
	this->txt_precio->Text = data->CurrentRow->Cells[2]->Value->ToString()->Replace(',', '.');
	this->comboBox_tipo->SelectedIndex = Convert::ToInt32(data->CurrentRow->Cells[3]->Value->ToString());
	this->txt_existencias->Text = data->CurrentRow->Cells[4]->Value->ToString();
	this->txt_minima->Text = data->CurrentRow->Cells[5]->Value->ToString();
}

System::Void SistemaVentaHardware::Item::btn_agregar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataDB->openConnection();
	if (this->dataDB->insertar(
		this->txt_descripcion->Text,
		this->txt_precio->Text->Replace(',', '.'),
		this->txt_existencias->Text,
		this->txt_minima->Text,
		this->comboBox_tipo->SelectedIndex.ToString()))
	{
		MessageBox::Show(L"Item ingresado exitosamente");
		this->dataDB->closeConnection();
		this->Close();
	}
	this->dataDB->closeConnection();
}

System::Void SistemaVentaHardware::Item::btn_modificar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataDB->openConnection();
	if (this->dataDB->modificar(
		this->txt_codigo->Text,
		this->txt_descripcion->Text,
		this->txt_precio->Text,
		this->txt_existencias->Text,
		this->txt_minima->Text,
		this->comboBox_tipo->SelectedIndex.ToString()))
	{
		MessageBox::Show(L"Item modificado exitosamente");
		this->dataDB->closeConnection();
		this->Close();
	}
	this->dataDB->closeConnection();
}

System::Void SistemaVentaHardware::Item::btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto result = MessageBox::Show(L"Está a punto de BORRAR un registro! \n\nEsta acción NO SE PUEDE deshacer",
		L"Atención!", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
	if (result == System::Windows::Forms::DialogResult::OK) {
		this->dataDB->openConnection();
		if (this->dataDB->eliminar(this->txt_codigo->Text)) {
			MessageBox::Show(L"Item eliminado exitosamente");
			this->dataDB->closeConnection();
			this->Close();
		}
		this->dataDB->closeConnection();
	}
}
