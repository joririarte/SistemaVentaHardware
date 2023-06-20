#include "pch.h"
#include "Form_Venta.h"

System::Void SistemaVentaHardware::Form_Venta::updateTable()
{
	this->dataSQL->openConnection();
	this->DGV_items->DataSource = this->dataSQL->getData();
	this->dataSQL->closeConnection();
}

System::Void SistemaVentaHardware::Form_Venta::Form_Venta_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->updateTable();
}
