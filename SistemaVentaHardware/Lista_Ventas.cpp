#include "pch.h"
#include "Lista_Ventas.h"

System::Void SistemaVentaHardware::Lista_Ventas::UpdateTable()
{
    this->dataSQL->openConnection();
    this->DGV_Ventas->DataSource = this->dataSQL->getVentas();
    this->dataSQL->closeConnection();
}

System::Void SistemaVentaHardware::Lista_Ventas::Lista_Ventas_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->UpdateTable();
}

System::Void SistemaVentaHardware::Lista_Ventas::btn_seleccionar_Click(System::Object^ sender, System::EventArgs^ e)
{
    ventaID = this->DGV_Ventas->CurrentRow->Cells[0]->Value->ToString();
    this->Close();
}
