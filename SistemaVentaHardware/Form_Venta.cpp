#include "pch.h"
#include "Form_Venta.h"

System::Void SistemaVentaHardware::Form_Venta::updateTable(int a)
{
	this->dataSQL->openConnection();
	//DataGridView ITEMS
	if(a==1)
		this->DGV_items->DataSource = this->dataSQL->getData();
	//DataGridView CARRITO
	else
		this->DGV_items->DataSource = this->dataSQL->getCarrito(this->txt_venta_id->Text);
	this->dataSQL->closeConnection();
}

System::Void SistemaVentaHardware::Form_Venta::Form_Venta_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->txt_venta_id->Text = L"1";
	this->updateTable(this->tab_state);
}

System::Void SistemaVentaHardware::Form_Venta::btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->txt_descripcion->Text = "";
	this->comboBox_tipo->SelectedIndex = -1;
}

System::Void SistemaVentaHardware::Form_Venta::btn_tab_items_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->btn_agregar_carrito->Visible = true;
	this->btn_eliminar_del_carrito->Visible = false;
	this->btn_tab_carrito->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->btn_tab_items->BackColor = System::Drawing::SystemColors::ControlDark;
	this->tab_state = 1;
	this->updateTable(this->tab_state);
}

System::Void SistemaVentaHardware::Form_Venta::btn_tab_carrito_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->btn_agregar_carrito->Visible = false;
	this->btn_eliminar_del_carrito->Visible = true;
	this->btn_tab_carrito->BackColor = System::Drawing::SystemColors::ControlDark;
	this->btn_tab_items->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->tab_state = 0;
	this->updateTable(this->tab_state);
}

System::Void SistemaVentaHardware::Form_Venta::btn_agregar_carrito_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tab_state == 1) {
		this->dataSQL->openConnection();
		String^ item_cod = this->DGV_items->CurrentRow->Cells[0]->Value->ToString();
		String^ ventaID = this->txt_venta_id->Text;
		String^ cantidad = this->updw_cantidad->Text;
		if (this->dataSQL->agregar_al_carrito(item_cod, ventaID, cantidad)) {
			this->txt_venta_monto->Text = this->dataSQL->sumar_carrito(ventaID);
			MessageBox::Show(L"Agregado Correctamente!");
		}
		this->dataSQL->closeConnection();
	}
}

System::Void SistemaVentaHardware::Form_Venta::DGV_items_SelectionChanged(System::Object^ sender, System::EventArgs^ e)
{
	this->updw_cantidad->Text = "";
	this->updw_cantidad->Items->Clear();
	int cant_max = Int32::Parse(this->DGV_items->CurrentRow->Cells[4]->Value->ToString());
	this->updw_cantidad->Text = cant_max.ToString();
	for (int i = cant_max; i > 0; i--) {
		this->updw_cantidad->Items->Add(i.ToString());
	}
}

System::Void SistemaVentaHardware::Form_Venta::btn_eliminar_del_carrito_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tab_state == 0) {
		this->dataSQL->openConnection();
		String^ ventaID = this->txt_venta_id->Text;
		String^ item_cod = this->DGV_items->CurrentRow->Cells[0]->Value->ToString();
		if (this->dataSQL->eliminar_del_carrito(item_cod, ventaID)) {
			this->txt_venta_monto->Text = this->dataSQL->sumar_carrito(ventaID);
			MessageBox::Show(L"Eliminado Correctamente!");
		}
		this->dataSQL->closeConnection();
		this->updateTable(this->tab_state);
	}
}

