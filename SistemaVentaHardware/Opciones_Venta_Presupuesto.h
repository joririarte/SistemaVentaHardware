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
	/// Summary for Opciones_Venta_Presupuesto
	/// </summary>
	public ref class Opciones_Venta_Presupuesto : public System::Windows::Forms::Form
	{
	public:
		Opciones_Venta_Presupuesto(void)
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
		~Opciones_Venta_Presupuesto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MySQL_DB^ dataSQL;
	private: System::Windows::Forms::DataGridView^ DGV_Opciones;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_presupuesto;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_tolerancia;

	private: System::Windows::Forms::Button^ btn_buscar;
	private: System::Windows::Forms::Button^ button1;
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
			this->DGV_Opciones = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_presupuesto = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_tolerancia = (gcnew System::Windows::Forms::TextBox());
			this->btn_buscar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Opciones))->BeginInit();
			this->SuspendLayout();
			// 
			// DGV_Opciones
			// 
			this->DGV_Opciones->AllowDrop = true;
			this->DGV_Opciones->AllowUserToAddRows = false;
			this->DGV_Opciones->AllowUserToDeleteRows = false;
			this->DGV_Opciones->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Opciones->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Opciones->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Opciones->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Opciones->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->DGV_Opciones->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DGV_Opciones->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Opciones->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Opciones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Opciones->DefaultCellStyle = dataGridViewCellStyle3;
			this->DGV_Opciones->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DGV_Opciones->Location = System::Drawing::Point(12, 75);
			this->DGV_Opciones->Name = L"DGV_Opciones";
			this->DGV_Opciones->ReadOnly = true;
			this->DGV_Opciones->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DGV_Opciones->RowHeadersVisible = false;
			this->DGV_Opciones->RowHeadersWidth = 51;
			this->DGV_Opciones->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Opciones->Size = System::Drawing::Size(1120, 274);
			this->DGV_Opciones->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 24);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Presupuesto";
			// 
			// txt_presupuesto
			// 
			this->txt_presupuesto->BackColor = System::Drawing::SystemColors::Control;
			this->txt_presupuesto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_presupuesto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_presupuesto->Location = System::Drawing::Point(155, 25);
			this->txt_presupuesto->MaxLength = 20;
			this->txt_presupuesto->Name = L"txt_presupuesto";
			this->txt_presupuesto->Size = System::Drawing::Size(171, 29);
			this->txt_presupuesto->TabIndex = 37;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(441, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 24);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Tolerancia";
			// 
			// txt_tolerancia
			// 
			this->txt_tolerancia->BackColor = System::Drawing::SystemColors::Control;
			this->txt_tolerancia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_tolerancia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_tolerancia->Location = System::Drawing::Point(560, 25);
			this->txt_tolerancia->MaxLength = 20;
			this->txt_tolerancia->Name = L"txt_tolerancia";
			this->txt_tolerancia->Size = System::Drawing::Size(171, 29);
			this->txt_tolerancia->TabIndex = 39;
			// 
			// btn_buscar
			// 
			this->btn_buscar->FlatAppearance->BorderSize = 0;
			this->btn_buscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_buscar->Location = System::Drawing::Point(814, 27);
			this->btn_buscar->Name = L"btn_buscar";
			this->btn_buscar->Size = System::Drawing::Size(129, 31);
			this->btn_buscar->TabIndex = 47;
			this->btn_buscar->Text = L"Buscar";
			this->btn_buscar->UseMnemonic = false;
			this->btn_buscar->UseVisualStyleBackColor = true;
			this->btn_buscar->Click += gcnew System::EventHandler(this, &Opciones_Venta_Presupuesto::btn_buscar_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1003, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 31);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Limpiar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Opciones_Venta_Presupuesto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1144, 363);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_buscar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_tolerancia);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_presupuesto);
			this->Controls->Add(this->DGV_Opciones);
			this->Name = L"Opciones_Venta_Presupuesto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Opciones_Venta_Presupuesto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Opciones))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_buscar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
