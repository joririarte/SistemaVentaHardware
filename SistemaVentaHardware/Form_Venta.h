#pragma once
#include "MySQL_DB.h"

namespace SistemaVentaHardware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Venta
	/// </summary>
	public ref class Form_Venta : public System::Windows::Forms::Form
	{
	public:
		Form_Venta(void)
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
		~Form_Venta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MySQL_DB^ dataSQL;


	private: System::Windows::Forms::Button^ btn_limpiar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox_tipo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_descripcion;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_codigo;
	private: System::Windows::Forms::Button^ btn_agregar_carrito;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ accionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verCarritoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventaPresupuestoToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ DGV_items;
	protected:

	protected:

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
			this->btn_limpiar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_tipo = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_descripcion = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_codigo = (gcnew System::Windows::Forms::TextBox());
			this->btn_agregar_carrito = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verCarritoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventaPresupuestoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DGV_items = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_items))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_limpiar
			// 
			this->btn_limpiar->FlatAppearance->BorderSize = 0;
			this->btn_limpiar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_limpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_limpiar->Location = System::Drawing::Point(723, 70);
			this->btn_limpiar->Name = L"btn_limpiar";
			this->btn_limpiar->Size = System::Drawing::Size(95, 46);
			this->btn_limpiar->TabIndex = 13;
			this->btn_limpiar->Text = L"Limpiar";
			this->btn_limpiar->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(315, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 24);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Tipo";
			// 
			// comboBox_tipo
			// 
			this->comboBox_tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_tipo->FormattingEnabled = true;
			this->comboBox_tipo->Location = System::Drawing::Point(384, 33);
			this->comboBox_tipo->Name = L"comboBox_tipo";
			this->comboBox_tipo->Size = System::Drawing::Size(171, 32);
			this->comboBox_tipo->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Descripción";
			// 
			// txt_descripcion
			// 
			this->txt_descripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_descripcion->Location = System::Drawing::Point(131, 80);
			this->txt_descripcion->MaxLength = 20;
			this->txt_descripcion->Name = L"txt_descripcion";
			this->txt_descripcion->Size = System::Drawing::Size(166, 29);
			this->txt_descripcion->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(54, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 24);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Codigo";
			// 
			// txt_codigo
			// 
			this->txt_codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_codigo->Location = System::Drawing::Point(131, 36);
			this->txt_codigo->MaxLength = 20;
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(166, 29);
			this->txt_codigo->TabIndex = 14;
			// 
			// btn_agregar_carrito
			// 
			this->btn_agregar_carrito->FlatAppearance->BorderSize = 0;
			this->btn_agregar_carrito->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_agregar_carrito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_agregar_carrito->Location = System::Drawing::Point(650, 32);
			this->btn_agregar_carrito->Name = L"btn_agregar_carrito";
			this->btn_agregar_carrito->Size = System::Drawing::Size(168, 39);
			this->btn_agregar_carrito->TabIndex = 16;
			this->btn_agregar_carrito->Text = L"Agregar al Carrito";
			this->btn_agregar_carrito->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->accionesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(830, 29);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accionesToolStripMenuItem
			// 
			this->accionesToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->accionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->verCarritoToolStripMenuItem,
					this->ventaPresupuestoToolStripMenuItem
			});
			this->accionesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->accionesToolStripMenuItem->Name = L"accionesToolStripMenuItem";
			this->accionesToolStripMenuItem->Size = System::Drawing::Size(83, 25);
			this->accionesToolStripMenuItem->Text = L"Acciones";
			// 
			// verCarritoToolStripMenuItem
			// 
			this->verCarritoToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->verCarritoToolStripMenuItem->Name = L"verCarritoToolStripMenuItem";
			this->verCarritoToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->verCarritoToolStripMenuItem->Text = L"Ver Carrito";
			// 
			// ventaPresupuestoToolStripMenuItem
			// 
			this->ventaPresupuestoToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ventaPresupuestoToolStripMenuItem->Name = L"ventaPresupuestoToolStripMenuItem";
			this->ventaPresupuestoToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->ventaPresupuestoToolStripMenuItem->Text = L"Venta Presupuesto";
			// 
			// DGV_items
			// 
			this->DGV_items->AllowDrop = true;
			this->DGV_items->AllowUserToAddRows = false;
			this->DGV_items->AllowUserToDeleteRows = false;
			this->DGV_items->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_items->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_items->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_items->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_items->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->DGV_items->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DGV_items->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_items->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_items->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_items->DefaultCellStyle = dataGridViewCellStyle3;
			this->DGV_items->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DGV_items->Location = System::Drawing::Point(9, 122);
			this->DGV_items->Name = L"DGV_items";
			this->DGV_items->ReadOnly = true;
			this->DGV_items->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DGV_items->RowHeadersVisible = false;
			this->DGV_items->RowHeadersWidth = 51;
			this->DGV_items->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_items->Size = System::Drawing::Size(811, 464);
			this->DGV_items->TabIndex = 18;
			// 
			// Form_Venta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(830, 592);
			this->Controls->Add(this->DGV_items);
			this->Controls->Add(this->btn_agregar_carrito);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->btn_limpiar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox_tipo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_descripcion);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form_Venta";
			this->Text = L"Form_Venta";
			this->Load += gcnew System::EventHandler(this, &Form_Venta::Form_Venta_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_items))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void updateTable();
	private: System::Void Form_Venta_Load(System::Object^ sender, System::EventArgs^ e);
};
}
