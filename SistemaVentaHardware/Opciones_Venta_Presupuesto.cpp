#include "pch.h"
#include "Opciones_Venta_Presupuesto.h"

System::Void SistemaVentaHardware::Opciones_Venta_Presupuesto::btn_buscar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataSQL->openConnection();
	String^ presupuesto = this->txt_presupuesto->Text;
	String^ tolerancia = this->txt_tolerancia->Text;
	this->DGV_Opciones->DataSource = this->dataSQL->getOpciones(presupuesto, tolerancia);
	this->dataSQL->closeConnection();
}

System::Void SistemaVentaHardware::Opciones_Venta_Presupuesto::btn_agregegar_carrito_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->proc_id = this->DGV_Opciones->CurrentRow->Cells[0]->Value->ToString();
	this->mother_id = this->DGV_Opciones->CurrentRow->Cells[2]->Value->ToString();
	this->ram_id = this->DGV_Opciones->CurrentRow->Cells[4]->Value->ToString();
	this->pdv_id = this->DGV_Opciones->CurrentRow->Cells[6]->Value->ToString();
	this->Close();
}
