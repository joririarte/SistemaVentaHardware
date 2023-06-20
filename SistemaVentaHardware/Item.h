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
	/// Summary for Item
	/// </summary>
	public ref class Item : public System::Windows::Forms::Form
	{
	public:
		Item(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->dataDB = gcnew MySQL_DB();
		}
		Item(int modo, DataGridView^ data,DataTable^ tipos) {
			InitializeComponent();
			this->Modificar_Form(modo, data, tipos);
			this->dataDB = gcnew MySQL_DB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Item()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txt_descripcion;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox_tipo;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_precio;
	private: System::Windows::Forms::TextBox^ txt_existencias;
	private: System::Windows::Forms::TextBox^ txt_minima;
	private: System::Windows::Forms::Button^ btn_agregar;
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: MySQL_DB^ dataDB;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_codigo;
	private: System::Windows::Forms::Button^ btn_modificar;
	private: System::Windows::Forms::Button^ btn_eliminar;


	public:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_descripcion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox_tipo = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_precio = (gcnew System::Windows::Forms::TextBox());
			this->txt_existencias = (gcnew System::Windows::Forms::TextBox());
			this->txt_minima = (gcnew System::Windows::Forms::TextBox());
			this->btn_agregar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_codigo = (gcnew System::Windows::Forms::TextBox());
			this->btn_modificar = (gcnew System::Windows::Forms::Button());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(61, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Descripción";
			// 
			// txt_descripcion
			// 
			this->txt_descripcion->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_descripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_descripcion->Location = System::Drawing::Point(191, 56);
			this->txt_descripcion->MaximumSize = System::Drawing::Size(214, 32);
			this->txt_descripcion->MaxLength = 20;
			this->txt_descripcion->MinimumSize = System::Drawing::Size(214, 32);
			this->txt_descripcion->Name = L"txt_descripcion";
			this->txt_descripcion->Size = System::Drawing::Size(214, 22);
			this->txt_descripcion->TabIndex = 2;
			this->txt_descripcion->WordWrap = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(61, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Precio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(61, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Existencias";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(61, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Mínima";
			// 
			// comboBox_tipo
			// 
			this->comboBox_tipo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox_tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_tipo->FormattingEnabled = true;
			this->comboBox_tipo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Procesador", L"Motherboard", L"RAM", L"Placa de Video" });
			this->comboBox_tipo->Location = System::Drawing::Point(191, 253);
			this->comboBox_tipo->Name = L"comboBox_tipo";
			this->comboBox_tipo->Size = System::Drawing::Size(214, 32);
			this->comboBox_tipo->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(61, 256);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 24);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Tipo";
			// 
			// txt_precio
			// 
			this->txt_precio->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_precio->Location = System::Drawing::Point(191, 105);
			this->txt_precio->MaximumSize = System::Drawing::Size(214, 32);
			this->txt_precio->MaxLength = 20;
			this->txt_precio->MinimumSize = System::Drawing::Size(214, 32);
			this->txt_precio->Name = L"txt_precio";
			this->txt_precio->Size = System::Drawing::Size(214, 22);
			this->txt_precio->TabIndex = 12;
			this->txt_precio->WordWrap = false;
			// 
			// txt_existencias
			// 
			this->txt_existencias->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_existencias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_existencias->Location = System::Drawing::Point(191, 153);
			this->txt_existencias->MaximumSize = System::Drawing::Size(214, 32);
			this->txt_existencias->MaxLength = 20;
			this->txt_existencias->MinimumSize = System::Drawing::Size(214, 32);
			this->txt_existencias->Name = L"txt_existencias";
			this->txt_existencias->Size = System::Drawing::Size(214, 22);
			this->txt_existencias->TabIndex = 13;
			this->txt_existencias->WordWrap = false;
			// 
			// txt_minima
			// 
			this->txt_minima->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_minima->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_minima->Location = System::Drawing::Point(191, 204);
			this->txt_minima->MaximumSize = System::Drawing::Size(214, 32);
			this->txt_minima->MaxLength = 20;
			this->txt_minima->MinimumSize = System::Drawing::Size(214, 32);
			this->txt_minima->Name = L"txt_minima";
			this->txt_minima->Size = System::Drawing::Size(214, 22);
			this->txt_minima->TabIndex = 14;
			this->txt_minima->WordWrap = false;
			// 
			// btn_agregar
			// 
			this->btn_agregar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_agregar->FlatAppearance->BorderSize = 0;
			this->btn_agregar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_agregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_agregar->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_agregar->Location = System::Drawing::Point(348, 300);
			this->btn_agregar->Name = L"btn_agregar";
			this->btn_agregar->Size = System::Drawing::Size(124, 48);
			this->btn_agregar->TabIndex = 15;
			this->btn_agregar->Text = L"Agregar";
			this->btn_agregar->UseVisualStyleBackColor = false;
			this->btn_agregar->Click += gcnew System::EventHandler(this, &Item::btn_agregar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->FlatAppearance->BorderSize = 0;
			this->btn_cancelar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_cancelar->Location = System::Drawing::Point(22, 300);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(124, 48);
			this->btn_cancelar->TabIndex = 16;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = true;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Item::btn_cancelar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(61, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 24);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Código";
			// 
			// txt_codigo
			// 
			this->txt_codigo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_codigo->Enabled = false;
			this->txt_codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_codigo->Location = System::Drawing::Point(191, 12);
			this->txt_codigo->MaximumSize = System::Drawing::Size(214, 32);
			this->txt_codigo->MaxLength = 20;
			this->txt_codigo->MinimumSize = System::Drawing::Size(214, 32);
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(214, 22);
			this->txt_codigo->TabIndex = 17;
			this->txt_codigo->WordWrap = false;
			// 
			// btn_modificar
			// 
			this->btn_modificar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_modificar->FlatAppearance->BorderSize = 0;
			this->btn_modificar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_modificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modificar->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_modificar->Location = System::Drawing::Point(180, 300);
			this->btn_modificar->Name = L"btn_modificar";
			this->btn_modificar->Size = System::Drawing::Size(124, 48);
			this->btn_modificar->TabIndex = 19;
			this->btn_modificar->Text = L"Modificar";
			this->btn_modificar->UseVisualStyleBackColor = false;
			this->btn_modificar->Click += gcnew System::EventHandler(this, &Item::btn_modificar_Click);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_eliminar->FlatAppearance->BorderSize = 0;
			this->btn_eliminar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_eliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_eliminar->Location = System::Drawing::Point(108, 300);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(124, 48);
			this->btn_eliminar->TabIndex = 20;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Visible = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Item::btn_eliminar_Click);
			// 
			// Item
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(484, 360);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->btn_modificar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_agregar);
			this->Controls->Add(this->txt_minima);
			this->Controls->Add(this->txt_existencias);
			this->Controls->Add(this->txt_precio);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox_tipo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_descripcion);
			this->Name = L"Item";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Item";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//FUNCIONES
		private: System::Void Modificar_Form(int mod, DataGridView^ data,DataTable^ tipos);
		private: System::Void Llenar_Inputs(DataGridView^ data);
			   private: System::Void Update_Combobox_Tipos(DataTable^ tipos);

	   //EVENTOS
		private: System::Void btn_agregar_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {this->Close();}
		private: System::Void btn_modificar_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
