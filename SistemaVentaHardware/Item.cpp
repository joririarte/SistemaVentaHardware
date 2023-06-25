#include "pch.h"
#include "Item.h"

//cambia los botones y rellena el formulario con los datos de una tabla segun un modo
System::Void SistemaVentaHardware::Item::Modificar_Form(int mod, DataRow^ data, DataTable^ tipos)
{
	switch (mod)
	{
	case 1: //Nuevo Item
		this->btn_modificar->Visible = false;
		this->txt_codigo->Text = (Int32::Parse(data[0]->ToString()) + 1).ToString();
		this->Update_Combobox_Tipos(tipos);
		this->comboBox_tipo->SelectedIndex = -1;
		break;
	case 2: //Modificar Item
		this->btn_agregar->Enabled = false;
		this->btn_agregar->Visible = false;
		this->btn_modificar->Location = System::Drawing::Point(348, 300);
		this->comboBox_tipo->Enabled = false;

		this->Update_Combobox_Tipos(tipos);
		this->Llenar_Inputs(data);
		break;
	case 3: //Eliminar Item
		this->btn_agregar->Visible = false;
		this->btn_modificar->Visible = false;
		this->btn_eliminar->Visible = true;
		this->txt_codigo->Enabled = false;
		this->txt_descripcion->Enabled = false;
		this->txt_precio->Enabled = false;
		this->txt_existencias->Enabled = false;
		this->txt_minima->Enabled = false;
		this->comboBox_tipo->Enabled = false;
		this->btn_eliminar->Location = System::Drawing::Point(348, 300);
		this->btn_cancelar->FlatAppearance->MouseOverBackColor = Color::FromArgb(192, 255, 192);

		this->Update_Combobox_Tipos(tipos);
		this->Llenar_Inputs(data);
		break;
	}
	
}

//llena los inputs
System::Void SistemaVentaHardware::Item::Llenar_Inputs(DataRow^ data)
{
	this->txt_codigo->Text = data[0]->ToString();
	this->txt_descripcion->Text = data[1]->ToString();
	this->txt_precio->Text = data[2]->ToString();
	this->comboBox_tipo->Text = data[3]->ToString();
	this->txt_existencias->Text = data[4]->ToString();
	this->txt_minima->Text = data[5]->ToString();
}

System::Void SistemaVentaHardware::Item::Update_Combobox_Tipos(DataTable^ tipos)
{
	this->comboBox_tipo->DataSource = tipos;
	this->comboBox_tipo->ValueMember = "tipo_id";
	this->comboBox_tipo->DisplayMember = "tipo_nombre";
}

System::Void SistemaVentaHardware::Item::btn_agregar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataDB->openConnection();
	if (this->dataDB->insertar(
		this->txt_descripcion->Text,
		this->txt_precio->Text->Replace(',', '.'),
		this->txt_existencias->Text,
		this->txt_minima->Text,
		this->comboBox_tipo->SelectedValue->ToString()))
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
		this->txt_precio->Text->Replace(',', '.'),
		this->txt_existencias->Text,
		this->txt_minima->Text,
		this->comboBox_tipo->SelectedValue->ToString()))
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
