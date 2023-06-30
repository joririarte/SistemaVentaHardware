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

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_venta_id;


	private: System::Windows::Forms::Button^ btn_seleccionar;

	private: System::Windows::Forms::Button^ btn_eliminar_venta;
	private: System::Windows::Forms::Button^ btn_nueva_venta;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ btn_limpiar;
	private: System::Windows::Forms::ComboBox^ comboBox_estado;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_seleccionar = (gcnew System::Windows::Forms::Button());
			this->btn_eliminar_venta = (gcnew System::Windows::Forms::Button());
			this->btn_nueva_venta = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btn_limpiar = (gcnew System::Windows::Forms::Button());
			this->comboBox_estado = (gcnew System::Windows::Forms::ComboBox());
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
			this->DGV_Ventas->SelectionChanged += gcnew System::EventHandler(this, &Lista_Ventas::DGV_Ventas_SelectionChanged);
			this->DGV_Ventas->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Lista_Ventas::DGV_Ventas_MouseDoubleClick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(325, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 24);
			this->label8->TabIndex = 40;
			this->label8->Text = L"Fecha";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 24);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Estado";
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
			this->txt_venta_id->TextChanged += gcnew System::EventHandler(this, &Lista_Ventas::txt_venta_id_TextChanged);
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
			// btn_eliminar_venta
			// 
			this->btn_eliminar_venta->FlatAppearance->BorderSize = 0;
			this->btn_eliminar_venta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar_venta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar_venta->Location = System::Drawing::Point(12, 388);
			this->btn_eliminar_venta->Name = L"btn_eliminar_venta";
			this->btn_eliminar_venta->Size = System::Drawing::Size(159, 34);
			this->btn_eliminar_venta->TabIndex = 43;
			this->btn_eliminar_venta->Text = L"Eliminar Venta";
			this->btn_eliminar_venta->UseVisualStyleBackColor = true;
			this->btn_eliminar_venta->Click += gcnew System::EventHandler(this, &Lista_Ventas::btn_eliminar_venta_Click);
			// 
			// btn_nueva_venta
			// 
			this->btn_nueva_venta->FlatAppearance->BorderSize = 0;
			this->btn_nueva_venta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_nueva_venta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_nueva_venta->Location = System::Drawing::Point(230, 388);
			this->btn_nueva_venta->Name = L"btn_nueva_venta";
			this->btn_nueva_venta->Size = System::Drawing::Size(159, 34);
			this->btn_nueva_venta->TabIndex = 44;
			this->btn_nueva_venta->Text = L"Nueva Venta";
			this->btn_nueva_venta->UseVisualStyleBackColor = true;
			this->btn_nueva_venta->Click += gcnew System::EventHandler(this, &Lista_Ventas::btn_nueva_venta_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(422, 28);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(171, 29);
			this->dateTimePicker1->TabIndex = 45;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Lista_Ventas::dateTimePicker1_ValueChanged);
			// 
			// btn_limpiar
			// 
			this->btn_limpiar->FlatAppearance->BorderSize = 0;
			this->btn_limpiar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_limpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_limpiar->Location = System::Drawing::Point(464, 60);
			this->btn_limpiar->Name = L"btn_limpiar";
			this->btn_limpiar->Size = System::Drawing::Size(129, 31);
			this->btn_limpiar->TabIndex = 46;
			this->btn_limpiar->Text = L"Limpiar";
			this->btn_limpiar->UseVisualStyleBackColor = true;
			this->btn_limpiar->Click += gcnew System::EventHandler(this, &Lista_Ventas::btn_limpiar_Click);
			// 
			// comboBox_estado
			// 
			this->comboBox_estado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_estado->FormattingEnabled = true;
			this->comboBox_estado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ABIERTA", L"CERRADA" });
			this->comboBox_estado->Location = System::Drawing::Point(122, 60);
			this->comboBox_estado->Name = L"comboBox_estado";
			this->comboBox_estado->Size = System::Drawing::Size(171, 32);
			this->comboBox_estado->TabIndex = 47;
			this->comboBox_estado->SelectedIndexChanged += gcnew System::EventHandler(this, &Lista_Ventas::comboBox_estado_SelectedIndexChanged);
			// 
			// Lista_Ventas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(605, 434);
			this->Controls->Add(this->comboBox_estado);
			this->Controls->Add(this->btn_limpiar);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btn_nueva_venta);
			this->Controls->Add(this->btn_eliminar_venta);
			this->Controls->Add(this->btn_seleccionar);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_venta_id);
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
private: System::Void btn_eliminar_venta_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_nueva_venta_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DGV_Ventas_SelectionChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void DGV_Ventas_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void txt_venta_id_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox_estado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
