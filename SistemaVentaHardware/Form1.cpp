#include "pch.h"
#include "Form1.h"

System::Void CppCLRWinFormsProject::Form1::updateTable()
{
	this->dataSQL->openConnection();
	items = this->dataSQL->getData();
	this->dataSQL->closeConnection();
	this->tabla->DataSource = items;
}

System::Void CppCLRWinFormsProject::Form1::updateComboBox_Tipos()
{
	this->dataSQL->openConnection();
	this->tipos = this->dataSQL->getTipos();
	this->comboBox1->DataSource = this->tipos;
	this->comboBox1->ValueMember = "tipo_id";
	this->comboBox1->DisplayMember = "tipo_nombre";
	this->dataSQL->closeConnection();
}

System::Void CppCLRWinFormsProject::Form1::Item_Window(int mod, DataRow^ row)
{
	SistemaVentaHardware::Item^ nueva_ventana_Item = gcnew SistemaVentaHardware::Item(mod, row ,this->tipos);
	nueva_ventana_Item->ShowDialog();
	this->updateTable();
	delete nueva_ventana_Item;
}

System::Void CppCLRWinFormsProject::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->updateTable();
	this->updateComboBox_Tipos();
	this->btn_limpiar_Click(sender,e);
}

System::Void CppCLRWinFormsProject::Form1::menuStock_nuevoItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabla->Sort(this->tabla->Columns->GetFirstColumn(DataGridViewElementStates::Visible), ListSortDirection::Ascending);
	DataRow^ row = items->Rows[items->Rows->Count - 1];
	this->Item_Window(1,row);
}

System::Void CppCLRWinFormsProject::Form1::menuStock_modificar_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataRow^ row = items->Rows[this->tabla->CurrentRow->Index];
	this->Item_Window(2,row);
}

System::Void CppCLRWinFormsProject::Form1::menuStock_Eliminar_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataRow^ row = items->Rows[this->tabla->CurrentRow->Index];
	this->Item_Window(3,row);
}

System::Void CppCLRWinFormsProject::Form1::txt_descripcion_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	DataView^ dv = this->dataSQL->getData()->DefaultView;
	dv->RowFilter = "Descripcion LIKE '" + this->txt_descripcion->Text + "%'";
	this->tabla->DataSource = dv;
}

System::Void CppCLRWinFormsProject::Form1::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	DataView^ dv = this->dataSQL->getData()->DefaultView;
	dv->RowFilter = "TIPO LIKE '" + this->comboBox1->Text + "%'";
	this->tabla->DataSource = dv;
}

System::Void CppCLRWinFormsProject::Form1::btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->txt_descripcion->Text = "";
	this->comboBox1->SelectedIndex = -1;
	this->updateTable();
}
