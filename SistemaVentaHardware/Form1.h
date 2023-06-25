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




	private: System::Windows::Forms::DataGridView^ tabla;
	private: DataTable^ tipos;
	private: DataTable^ items;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStock_nuevoItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStock_modificar = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStock_Eliminar = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->stockToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1044, 29);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"hola";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuStock_nuevoItem,
					this->menuStock_modificar, this->menuStock_Eliminar
			});
			this->stockToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->stockToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ControlDark;
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(83, 25);
			this->stockToolStripMenuItem->Text = L"Acciones";
			// 
			// menuStock_nuevoItem
			// 
			this->menuStock_nuevoItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuStock_nuevoItem->ForeColor = System::Drawing::SystemColors::ControlText;
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
			this->menuStock_modificar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->menuStock_modificar->Name = L"menuStock_modificar";
			this->menuStock_modificar->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
			this->menuStock_modificar->Size = System::Drawing::Size(219, 26);
			this->menuStock_modificar->Text = L"Modificar";
			this->menuStock_modificar->Click += gcnew System::EventHandler(this, &Form1::menuStock_modificar_Click);
			// 
			// menuStock_Eliminar
			// 
			this->menuStock_Eliminar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuStock_Eliminar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->menuStock_Eliminar->Name = L"menuStock_Eliminar";
			this->menuStock_Eliminar->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->menuStock_Eliminar->Size = System::Drawing::Size(219, 26);
			this->menuStock_Eliminar->Text = L"Eliminar";
			this->menuStock_Eliminar->Click += gcnew System::EventHandler(this, &Form1::menuStock_Eliminar_Click);
			// 
			// tabla
			// 
			this->tabla->AllowDrop = true;
			this->tabla->AllowUserToAddRows = false;
			this->tabla->AllowUserToDeleteRows = false;
			this->tabla->AllowUserToResizeRows = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tabla->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->tabla->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tabla->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->tabla->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->tabla->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tabla->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tabla->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->tabla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tabla->DefaultCellStyle = dataGridViewCellStyle6;
			this->tabla->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabla->Location = System::Drawing::Point(10, 81);
			this->tabla->Name = L"tabla";
			this->tabla->ReadOnly = true;
			this->tabla->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->tabla->RowHeadersVisible = false;
			this->tabla->RowHeadersWidth = 51;
			this->tabla->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tabla->Size = System::Drawing::Size(1022, 499);
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
			this->label2->Text = L"Descripción";
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
			this->btn_limpiar->Location = System::Drawing::Point(566, 32);
			this->btn_limpiar->Name = L"btn_limpiar";
			this->btn_limpiar->Size = System::Drawing::Size(95, 38);
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
			this->ClientSize = System::Drawing::Size(1044, 592);
			this->Controls->Add(this->btn_limpiar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_descripcion);
			this->Controls->Add(this->tabla);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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
		//FUNCIONES
		private: System::Void updateTable();
			   private: System::Void updateComboBox_Tipos();
		private: System::Void Item_Window(int mod,DataRow^ row);
		//EVENTOS
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void menuStock_nuevoItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void menuStock_modificar_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void menuStock_Eliminar_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void txt_descripcion_TextChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
