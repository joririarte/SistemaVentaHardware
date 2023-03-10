#pragma once
#include "MySQL_DB.h"
#include "Item.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->dataSQL = gcnew MySQL_DB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menuStock_nuevoItem;

	private: System::Windows::Forms::ToolStripMenuItem^ menuStock_modificar;
	private: System::Windows::Forms::ToolStripMenuItem^ menuStock_Eliminar;
	private: System::Windows::Forms::ToolStripMenuItem^ ventaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menuVenta_ventaItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menuVenta_ventaPresupuesto;
	private: System::Windows::Forms::ToolStripMenuItem^ menuVenta_buscar;
	private: System::Windows::Forms::DataGridView^ tabla;

	private: MySQL_DB^ dataSQL;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_descripcion;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_limpiar;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStock_nuevoItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStock_modificar = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStock_Eliminar = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuVenta_ventaItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuVenta_ventaPresupuesto = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuVenta_buscar = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabla = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_descripcion = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_limpiar = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->stockToolStripMenuItem,
					this->ventaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(670, 29);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuStock_nuevoItem,
					this->menuStock_modificar, this->menuStock_Eliminar
			});
			this->stockToolStripMenuItem->ForeColor = System::Drawing::SystemColors::Control;
			this->stockToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ControlDark;
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(59, 25);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// menuStock_nuevoItem
			// 
			this->menuStock_nuevoItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuStock_nuevoItem->ForeColor = System::Drawing::SystemColors::Control;
			this->menuStock_nuevoItem->Name = L"menuStock_nuevoItem";
			this->menuStock_nuevoItem->ShortcutKeyDisplayString = L"";
			this->menuStock_nuevoItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->menuStock_nuevoItem->Size = System::Drawing::Size(219, 26);
			this->menuStock_nuevoItem->Text = L"Nuevo Item";
			this->menuStock_nuevoItem->Click += gcnew System::EventHandler(this, &Form1::menuStock_nuevoItem_Click);
			// 
			// menuStock_modificar
			// 
			this->menuStock_modificar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuStock_modificar->ForeColor = System::Drawing::SystemColors::Control;
			this->menuStock_modificar->Name = L"menuStock_modificar";
			this->menuStock_modificar->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
			this->menuStock_modificar->Size = System::Drawing::Size(219, 26);
			this->menuStock_modificar->Text = L"Modificar";
			this->menuStock_modificar->Click += gcnew System::EventHandler(this, &Form1::menuStock_modificar_Click);
			// 
			// menuStock_Eliminar
			// 
			this->menuStock_Eliminar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuStock_Eliminar->ForeColor = System::Drawing::SystemColors::Control;
			this->menuStock_Eliminar->Name = L"menuStock_Eliminar";
			this->menuStock_Eliminar->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->menuStock_Eliminar->Size = System::Drawing::Size(219, 26);
			this->menuStock_Eliminar->Text = L"Eliminar";
			this->menuStock_Eliminar->Click += gcnew System::EventHandler(this, &Form1::menuStock_Eliminar_Click);
			// 
			// ventaToolStripMenuItem
			// 
			this->ventaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuVenta_ventaItem,
					this->menuVenta_ventaPresupuesto, this->menuVenta_buscar
			});
			this->ventaToolStripMenuItem->ForeColor = System::Drawing::SystemColors::Control;
			this->ventaToolStripMenuItem->Name = L"ventaToolStripMenuItem";
			this->ventaToolStripMenuItem->Size = System::Drawing::Size(61, 25);
			this->ventaToolStripMenuItem->Text = L"Venta";
			// 
			// menuVenta_ventaItem
			// 
			this->menuVenta_ventaItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuVenta_ventaItem->ForeColor = System::Drawing::SystemColors::Control;
			this->menuVenta_ventaItem->Name = L"menuVenta_ventaItem";
			this->menuVenta_ventaItem->Size = System::Drawing::Size(237, 26);
			this->menuVenta_ventaItem->Text = L"Venta por Item";
			// 
			// menuVenta_ventaPresupuesto
			// 
			this->menuVenta_ventaPresupuesto->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuVenta_ventaPresupuesto->ForeColor = System::Drawing::SystemColors::Control;
			this->menuVenta_ventaPresupuesto->Name = L"menuVenta_ventaPresupuesto";
			this->menuVenta_ventaPresupuesto->Size = System::Drawing::Size(237, 26);
			this->menuVenta_ventaPresupuesto->Text = L"Venta por Presupuesto";
			// 
			// menuVenta_buscar
			// 
			this->menuVenta_buscar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuVenta_buscar->ForeColor = System::Drawing::SystemColors::Control;
			this->menuVenta_buscar->Name = L"menuVenta_buscar";
			this->menuVenta_buscar->Size = System::Drawing::Size(237, 26);
			this->menuVenta_buscar->Text = L"Buscar Venta";
			// 
			// tabla
			// 
			this->tabla->AllowDrop = true;
			this->tabla->AllowUserToAddRows = false;
			this->tabla->AllowUserToDeleteRows = false;
			this->tabla->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tabla->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->tabla->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tabla->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->tabla->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->tabla->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tabla->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tabla->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->tabla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tabla->DefaultCellStyle = dataGridViewCellStyle3;
			this->tabla->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabla->Location = System::Drawing::Point(10, 81);
			this->tabla->Name = L"tabla";
			this->tabla->ReadOnly = true;
			this->tabla->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->tabla->RowHeadersVisible = false;
			this->tabla->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tabla->Size = System::Drawing::Size(651, 367);
			this->tabla->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Descripci?n";
			// 
			// txt_descripcion
			// 
			this->txt_descripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_descripcion->Location = System::Drawing::Point(129, 32);
			this->txt_descripcion->MaxLength = 20;
			this->txt_descripcion->Name = L"txt_descripcion";
			this->txt_descripcion->Size = System::Drawing::Size(166, 29);
			this->txt_descripcion->TabIndex = 4;
			this->txt_descripcion->TextChanged += gcnew System::EventHandler(this, &Form1::txt_descripcion_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Procesador", L"Motherboard", L"RAM", L"Placa de Video" });
			this->comboBox1->Location = System::Drawing::Point(386, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(171, 32);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(317, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 24);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Tipo";
			// 
			// btn_limpiar
			// 
			this->btn_limpiar->FlatAppearance->BorderSize = 0;
			this->btn_limpiar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_limpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_limpiar->Location = System::Drawing::Point(566, 24);
			this->btn_limpiar->Name = L"btn_limpiar";
			this->btn_limpiar->Size = System::Drawing::Size(95, 46);
			this->btn_limpiar->TabIndex = 8;
			this->btn_limpiar->Text = L"Limpiar";
			this->btn_limpiar->UseVisualStyleBackColor = true;
			this->btn_limpiar->Click += gcnew System::EventHandler(this, &Form1::btn_limpiar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(670, 456);
			this->Controls->Add(this->btn_limpiar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_descripcion);
			this->Controls->Add(this->tabla);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Stock y Venta Hardware";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void updateTable() {
		this->dataSQL->openConnection();
		this->tabla->DataSource = this->dataSQL->getData();
		this->dataSQL->closeConnection();
		
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->updateTable();
	}
private: System::Void menuStock_nuevoItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SistemaVentaHardware::Item^ nuevoItem = gcnew SistemaVentaHardware::Item();
	nuevoItem->btn_modificar->Visible = false;
	nuevoItem->txt_codigo->Text = (this->tabla->RowCount + 1).ToString();
	nuevoItem->ShowDialog();
	this->updateTable();
}
private: System::Void menuStock_modificar_Click(System::Object^ sender, System::EventArgs^ e) {
	SistemaVentaHardware::Item^ modificarItem = gcnew SistemaVentaHardware::Item();
	modificarItem->btn_agregar->Enabled = false;
	modificarItem->btn_agregar->Visible = false;
	modificarItem->btn_modificar->Location = System::Drawing::Point(348, 300);
	modificarItem->txt_codigo->Text = this->tabla->CurrentRow->Cells[0]->Value->ToString();
	modificarItem->txt_descripcion->Text = this->tabla->CurrentRow->Cells[1]->Value->ToString();
	modificarItem->txt_precio->Text = this->tabla->CurrentRow->Cells[2]->Value->ToString()->Replace(',', '.');
	modificarItem->comboBox_tipo->SelectedIndex = Convert::ToInt32(this->tabla->CurrentRow->Cells[3]->Value->ToString());
	modificarItem->txt_existencias->Text = this->tabla->CurrentRow->Cells[4]->Value->ToString();
	modificarItem->txt_minima->Text = this->tabla->CurrentRow->Cells[5]->Value->ToString();
	modificarItem->ShowDialog();
	this->updateTable();
}
private: System::Void menuStock_Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	SistemaVentaHardware::Item^ eliminararItem = gcnew SistemaVentaHardware::Item();
	eliminararItem->btn_agregar->Visible = false;
	eliminararItem->btn_modificar->Visible = false;
	eliminararItem->btn_eliminar->Visible = true;

	eliminararItem->txt_codigo->Enabled = true;
	eliminararItem->txt_descripcion->Enabled = false;
	eliminararItem->txt_precio->Enabled = false;
	eliminararItem->txt_existencias->Enabled = false;
	eliminararItem->txt_minima->Enabled = false;
	eliminararItem->comboBox_tipo->Enabled = false;

	eliminararItem->btn_eliminar->Location = System::Drawing::Point(348, 300);
	eliminararItem->txt_codigo->Text = this->tabla->CurrentRow->Cells[0]->Value->ToString();
	eliminararItem->txt_descripcion->Text = this->tabla->CurrentRow->Cells[1]->Value->ToString();
	eliminararItem->txt_precio->Text = this->tabla->CurrentRow->Cells[2]->Value->ToString()->Replace(',', '.');
	eliminararItem->comboBox_tipo->SelectedIndex = Convert::ToInt32(this->tabla->CurrentRow->Cells[3]->Value->ToString());
	eliminararItem->txt_existencias->Text = this->tabla->CurrentRow->Cells[4]->Value->ToString();
	eliminararItem->txt_minima->Text = this->tabla->CurrentRow->Cells[5]->Value->ToString();

	eliminararItem->btn_cancelar->FlatAppearance->MouseOverBackColor = Color::FromArgb(192, 255, 192);
	eliminararItem->ShowDialog();
	this->updateTable();
}
private: System::Void txt_descripcion_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	DataView^ dv = this->dataSQL->getData()->DefaultView;
	dv->RowFilter = "Descripcion LIKE '" + this->txt_descripcion->Text+"%'";
	this->tabla->DataSource = dv;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	DataView^ dv = this->dataSQL->getData()->DefaultView;
	dv->RowFilter = "Tipo =" + this->comboBox1->SelectedIndex;
	this->tabla->DataSource = dv;
}
private: System::Void btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txt_descripcion->Text = "";
	this->comboBox1->SelectedIndex = -1;
	this->updateTable();
}
};
}
