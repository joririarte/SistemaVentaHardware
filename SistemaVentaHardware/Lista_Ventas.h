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
	/// Summary for Lista_Ventas
	/// </summary>
	public ref class Lista_Ventas : public System::Windows::Forms::Form
	{
	public:
		Lista_Ventas(void)
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
		~Lista_Ventas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MySQL_DB^ dataSQL;
	public: String^ ventaID="";
	private: System::Windows::Forms::DataGridView^ DGV_Ventas;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_venta_fecha;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_venta_estado;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_venta_id;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_venta_monto;
	private: System::Windows::Forms::Button^ btn_seleccionar;
	private: System::Windows::Forms::Button^ btn_cancelar;
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
			this->DGV_Ventas = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_fecha = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_estado = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_id = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_monto = (gcnew System::Windows::Forms::TextBox());
			this->btn_seleccionar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Ventas))->BeginInit();
			this->SuspendLayout();
			// 
			// DGV_Ventas
			// 
			this->DGV_Ventas->AllowDrop = true;
			this->DGV_Ventas->AllowUserToAddRows = false;
			this->DGV_Ventas->AllowUserToDeleteRows = false;
			this->DGV_Ventas->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Ventas->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Ventas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Ventas->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Ventas->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->DGV_Ventas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DGV_Ventas->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Ventas->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Ventas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Ventas->DefaultCellStyle = dataGridViewCellStyle3;
			this->DGV_Ventas->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DGV_Ventas->Location = System::Drawing::Point(12, 98);
			this->DGV_Ventas->Name = L"DGV_Ventas";
			this->DGV_Ventas->ReadOnly = true;
			this->DGV_Ventas->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DGV_Ventas->RowHeadersVisible = false;
			this->DGV_Ventas->RowHeadersWidth = 51;
			this->DGV_Ventas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Ventas->Size = System::Drawing::Size(581, 284);
			this->DGV_Ventas->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(325, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 24);
			this->label8->TabIndex = 40;
			this->label8->Text = L"Fecha";
			// 
			// txt_venta_fecha
			// 
			this->txt_venta_fecha->BackColor = System::Drawing::SystemColors::Control;
			this->txt_venta_fecha->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_venta_fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_venta_fecha->Location = System::Drawing::Point(422, 61);
			this->txt_venta_fecha->MaxLength = 20;
			this->txt_venta_fecha->Name = L"txt_venta_fecha";
			this->txt_venta_fecha->Size = System::Drawing::Size(171, 29);
			this->txt_venta_fecha->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(325, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 24);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Estado";
			// 
			// txt_venta_estado
			// 
			this->txt_venta_estado->BackColor = System::Drawing::SystemColors::Control;
			this->txt_venta_estado->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_venta_estado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_venta_estado->Location = System::Drawing::Point(422, 26);
			this->txt_venta_estado->MaxLength = 20;
			this->txt_venta_estado->Name = L"txt_venta_estado";
			this->txt_venta_estado->Size = System::Drawing::Size(171, 29);
			this->txt_venta_estado->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 24);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Venta ID";
			// 
			// txt_venta_id
			// 
			this->txt_venta_id->BackColor = System::Drawing::SystemColors::Control;
			this->txt_venta_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_venta_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_venta_id->Location = System::Drawing::Point(122, 26);
			this->txt_venta_id->MaxLength = 20;
			this->txt_venta_id->Name = L"txt_venta_id";
			this->txt_venta_id->Size = System::Drawing::Size(171, 29);
			this->txt_venta_id->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 24);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Monto";
			// 
			// txt_venta_monto
			// 
			this->txt_venta_monto->BackColor = System::Drawing::SystemColors::Control;
			this->txt_venta_monto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_venta_monto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_venta_monto->Location = System::Drawing::Point(122, 61);
			this->txt_venta_monto->MaxLength = 20;
			this->txt_venta_monto->Name = L"txt_venta_monto";
			this->txt_venta_monto->Size = System::Drawing::Size(171, 29);
			this->txt_venta_monto->TabIndex = 33;
			// 
			// btn_seleccionar
			// 
			this->btn_seleccionar->FlatAppearance->BorderSize = 0;
			this->btn_seleccionar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_seleccionar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seleccionar->Location = System::Drawing::Point(464, 388);
			this->btn_seleccionar->Name = L"btn_seleccionar";
			this->btn_seleccionar->Size = System::Drawing::Size(129, 34);
			this->btn_seleccionar->TabIndex = 41;
			this->btn_seleccionar->Text = L"Seleccionar";
			this->btn_seleccionar->UseVisualStyleBackColor = true;
			this->btn_seleccionar->Click += gcnew System::EventHandler(this, &Lista_Ventas::btn_seleccionar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->FlatAppearance->BorderSize = 0;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->Location = System::Drawing::Point(12, 388);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(129, 34);
			this->btn_cancelar->TabIndex = 42;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = true;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Lista_Ventas::btn_cancelar_Click);
			// 
			// Lista_Ventas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(605, 434);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_seleccionar);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_venta_fecha);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_venta_estado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_venta_id);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_venta_monto);
			this->Controls->Add(this->DGV_Ventas);
			this->Name = L"Lista_Ventas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Lista_Ventas";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Lista_Ventas::Lista_Ventas_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Lista_Ventas::Lista_Ventas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Ventas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void UpdateTable();
		private: System::Void Lista_Ventas_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_seleccionar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Lista_Ventas_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
};
}
