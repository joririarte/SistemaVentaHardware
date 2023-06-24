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

System::Void SistemaVentaHardware::Lista_Ventas::btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void SistemaVentaHardware::Lista_Ventas::Lista_Ventas_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    ventaID = ventaID != "" ? ventaID : "";
}

System::Void SistemaVentaHardware::Lista_Ventas::btn_eliminar_venta_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->dataSQL->openConnection();
    this->dataSQL->eliminar_Venta(this->DGV_Ventas->CurrentRow->Cells[0]->Value->ToString());
    this->dataSQL->closeConnection();
    this->UpdateTable();
}

System::Void SistemaVentaHardware::Lista_Ventas::btn_nueva_venta_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->dataSQL->openConnection();
    this->dataSQL->nueva_Venta();
    this->dataSQL->closeConnection();
    this->UpdateTable();
}

System::Void SistemaVentaHardware::Lista_Ventas::DGV_Ventas_SelectionChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (this->DGV_Ventas->CurrentRow->Cells[4]->Value == "ABIERTA") {
        this->btn_nueva_venta->Visible = false;
        this->btn_seleccionar->Visible = true;
    }
    else
    {
        this->btn_nueva_venta->Visible = true;
        this->btn_seleccionar->Visible = true;
        this->btn_eliminar_venta->Visible = true;
    }
    return System::Void();
}

System::Void SistemaVentaHardware::Lista_Ventas::DGV_Ventas_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    ventaID = this->DGV_Ventas->CurrentRow->Cells[0]->Value->ToString();
    this->Close();
}

System::Void SistemaVentaHardware::Lista_Ventas::txt_venta_id_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    DataView^ dv = this->dataSQL->getVentas()->DefaultView;
    dv->RowFilter = "ID =" + this->txt_venta_id->Text ;
    this->DGV_Ventas->DataSource = dv;
}

System::Void SistemaVentaHardware::Lista_Ventas::dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    String^ DD = this->dateTimePicker1->Value.Day.ToString();
    if (Int32::Parse(DD) < 10)
        DD = "0" + DD;
    String^ MM = this->dateTimePicker1->Value.Month.ToString();
    if (Int32::Parse(MM) < 10)
        MM = "0" + MM;
    String^ AAAA = this->dateTimePicker1->Value.Year.ToString();
    String^ fecha = AAAA + "-" + MM + "-" + DD;
   
   DataView^ dv = this->dataSQL->getVentas()->DefaultView;
   dv->RowFilter = "FECHA = #" + fecha + "#";
   this->DGV_Ventas->DataSource = dv;
}

System::Void SistemaVentaHardware::Lista_Ventas::btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->txt_venta_id->Text = "";
    this->comboBox_estado->SelectedIndex = -1;
    this->dateTimePicker1->Text=this->dateTimePicker1->Value.Today.ToString();
    this->UpdateTable();
}

System::Void SistemaVentaHardware::Lista_Ventas::comboBox_estado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    DataView^ dv = this->dataSQL->getVentas()->DefaultView;
    
    dv->RowFilter = "ESTADO LIKE '%" + this->comboBox_estado->Text + "%'";
    this->DGV_Ventas->DataSource = dv;
}
