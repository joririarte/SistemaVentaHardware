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
