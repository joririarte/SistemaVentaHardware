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

System::Void SistemaVentaHardware::Form_Venta::update_txt_venta(String^ ventaID)
{
	this->dataSQL->openConnection();
	DataTable^ venta = this->dataSQL->getVenta(ventaID);
	array <DataRow^>^ rows = venta->Select();
	this->txt_venta_id->Text = rows[0]["ID"]->ToString();
	this->txt_venta_monto->Text = rows[0]["MONTO"]->ToString();
	this->txt_venta_estado->Text = rows[0]["ESTADO"]->ToString() == "True" ? "ABIERTA" : "CERRADA";
	this->txt_venta_fecha->Text = rows[0]["FECHA"]->ToString();
	this->btn_tab_carrito->Text = "CARRITO (" + this->dataSQL->contar_carrito(ventaID) + ")";
	this->dataSQL->closeConnection();
}

System::Void SistemaVentaHardware::Form_Venta::Form_Venta_Load(System::Object^ sender, System::EventArgs^ e)
{
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
	if (this->txt_venta_id->Text != "") {
		this->btn_agregar_carrito->Visible = false;
		this->btn_eliminar_del_carrito->Visible = true;
		this->btn_tab_carrito->BackColor = System::Drawing::SystemColors::ControlDark;
		this->btn_tab_items->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->tab_state = 0;
		this->updateTable(this->tab_state);
	}
}

System::Void SistemaVentaHardware::Form_Venta::btn_agregar_carrito_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tab_state == 1 && this->txt_venta_id->Text != "" && this->txt_venta_estado->Text == "ABIERTA") {
		this->dataSQL->openConnection();
		String^ item_cod = this->DGV_items->CurrentRow->Cells[0]->Value->ToString();
		String^ ventaID = this->txt_venta_id->Text;
		String^ cantidad = this->updw_cantidad->Text;
		if (!this->dataSQL->agregar_al_carrito(item_cod, ventaID, cantidad)) {
			MessageBox::Show(L"Error al agregar!");
		}
		this->dataSQL->closeConnection();
		this->update_txt_venta(ventaID);
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
	if (tab_state == 0 && this->txt_venta_id->Text != "" && this->txt_venta_estado->Text == "ABIERTA") {
		this->dataSQL->openConnection();
		String^ ventaID = this->txt_venta_id->Text;
		String^ item_cod = this->DGV_items->CurrentRow->Cells[0]->Value->ToString();
		if (!this->dataSQL->eliminar_del_carrito(item_cod, ventaID)) {
			MessageBox::Show(L"Error en eliminacion!");
		}
		this->dataSQL->closeConnection();
		this->updateTable(this->tab_state);
		this->update_txt_venta(ventaID);
	}
}

System::Void SistemaVentaHardware::Form_Venta::buscarVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	SistemaVentaHardware::Lista_Ventas^ gestor_ventas = gcnew SistemaVentaHardware::Lista_Ventas();
	gestor_ventas->ShowDialog();
	if(gestor_ventas->ventaID!="")
		this->update_txt_venta(gestor_ventas->ventaID);
	delete gestor_ventas;
}

System::Void SistemaVentaHardware::Form_Venta::cerrarVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->txt_venta_id->Text != "") {
		this->dataSQL->openConnection();
		this->dataSQL->cerrar_Venta(this->txt_venta_id->Text);
		this->dataSQL->closeConnection();
		this->update_txt_venta(this->txt_venta_id->Text);
	}
}

System::Void SistemaVentaHardware::Form_Venta::nuevaVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataSQL->openConnection();
	this->dataSQL->nueva_Venta();
	this->dataSQL->closeConnection();
}

