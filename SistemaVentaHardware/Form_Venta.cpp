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
	this->btn_tab_carrito->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->btn_tab_items->BackColor = System::Drawing::SystemColors::ControlDark;
	this->tab_state = 1;
	this->updateTable(this->tab_state);
}

System::Void SistemaVentaHardware::Form_Venta::btn_tab_carrito_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->btn_tab_carrito->BackColor = System::Drawing::SystemColors::ControlDark;
	this->btn_tab_items->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->tab_state = 0;
	this->updateTable(this->tab_state);
}
