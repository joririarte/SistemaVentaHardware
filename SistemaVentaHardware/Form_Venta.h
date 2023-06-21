#pragma once
#include "MySQL_DB.h"
#include "Lista_Ventas.h"

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
	public: String^ venta_id;
	private: int tab_state = 1;


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

	private: System::Windows::Forms::ToolStripMenuItem^ ventaPresupuestoToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ DGV_items;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_venta_id;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_venta_monto;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_venta_estado;

	private: System::Windows::Forms::ToolStripMenuItem^ nuevaVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarVentaToolStripMenuItem;
	private: System::Windows::Forms::Button^ btn_tab_items;
	private: System::Windows::Forms::Button^ btn_tab_carrito;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::DomainUpDown^ updw_cantidad;
	private: System::Windows::Forms::Button^ btn_eliminar_del_carrito;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_venta_fecha;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarVentaToolStripMenuItem;






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
			this->nuevaVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventaPresupuestoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DGV_items = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_id = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_monto = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_estado = (gcnew System::Windows::Forms::TextBox());
			this->btn_tab_items = (gcnew System::Windows::Forms::Button());
			this->btn_tab_carrito = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->updw_cantidad = (gcnew System::Windows::Forms::DomainUpDown());
			this->btn_eliminar_del_carrito = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_venta_fecha = (gcnew System::Windows::Forms::TextBox());
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
			this->btn_limpiar->Location = System::Drawing::Point(203, 143);
			this->btn_limpiar->Name = L"btn_limpiar";
			this->btn_limpiar->Size = System::Drawing::Size(95, 46);
			this->btn_limpiar->TabIndex = 13;
			this->btn_limpiar->Text = L"Limpiar";
			this->btn_limpiar->UseVisualStyleBackColor = true;
			this->btn_limpiar->Click += gcnew System::EventHandler(this, &Form_Venta::btn_limpiar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 106);
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
			this->comboBox_tipo->Location = System::Drawing::Point(127, 103);
			this->comboBox_tipo->Name = L"comboBox_tipo";
			this->comboBox_tipo->Size = System::Drawing::Size(171, 32);
			this->comboBox_tipo->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Descripción";
			// 
			// txt_descripcion
			// 
			this->txt_descripcion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_descripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_descripcion->Location = System::Drawing::Point(127, 68);
			this->txt_descripcion->MaxLength = 20;
			this->txt_descripcion->Name = L"txt_descripcion";
			this->txt_descripcion->Size = System::Drawing::Size(171, 29);
			this->txt_descripcion->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 24);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Codigo";
			// 
			// txt_codigo
			// 
			this->txt_codigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_codigo->Location = System::Drawing::Point(127, 33);
			this->txt_codigo->MaxLength = 20;
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(171, 29);
			this->txt_codigo->TabIndex = 14;
			// 
			// btn_agregar_carrito
			// 
			this->btn_agregar_carrito->FlatAppearance->BorderSize = 0;
			this->btn_agregar_carrito->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_agregar_carrito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_agregar_carrito->Location = System::Drawing::Point(861, 187);
			this->btn_agregar_carrito->Name = L"btn_agregar_carrito";
			this->btn_agregar_carrito->Size = System::Drawing::Size(168, 34);
			this->btn_agregar_carrito->TabIndex = 16;
			this->btn_agregar_carrito->Text = L"Agregar al Carrito";
			this->btn_agregar_carrito->UseVisualStyleBackColor = true;
			this->btn_agregar_carrito->Click += gcnew System::EventHandler(this, &Form_Venta::btn_agregar_carrito_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->accionesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1044, 29);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accionesToolStripMenuItem
			// 
			this->accionesToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->accionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nuevaVentaToolStripMenuItem,
					this->buscarVentaToolStripMenuItem, this->ventaPresupuestoToolStripMenuItem, this->cerrarVentaToolStripMenuItem
			});
			this->accionesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->accionesToolStripMenuItem->Name = L"accionesToolStripMenuItem";
			this->accionesToolStripMenuItem->Size = System::Drawing::Size(83, 25);
			this->accionesToolStripMenuItem->Text = L"Acciones";
			// 
			// nuevaVentaToolStripMenuItem
			// 
			this->nuevaVentaToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->nuevaVentaToolStripMenuItem->Name = L"nuevaVentaToolStripMenuItem";
			this->nuevaVentaToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->nuevaVentaToolStripMenuItem->Text = L"Nueva Venta";
			// 
			// buscarVentaToolStripMenuItem
			// 
			this->buscarVentaToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->buscarVentaToolStripMenuItem->Name = L"buscarVentaToolStripMenuItem";
			this->buscarVentaToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->buscarVentaToolStripMenuItem->Text = L"Buscar Venta";
			this->buscarVentaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Venta::buscarVentaToolStripMenuItem_Click);
			// 
			// ventaPresupuestoToolStripMenuItem
			// 
			this->ventaPresupuestoToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ventaPresupuestoToolStripMenuItem->Name = L"ventaPresupuestoToolStripMenuItem";
			this->ventaPresupuestoToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->ventaPresupuestoToolStripMenuItem->Text = L"Venta Presupuesto";
			// 
			// cerrarVentaToolStripMenuItem
			// 
			this->cerrarVentaToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->cerrarVentaToolStripMenuItem->Name = L"cerrarVentaToolStripMenuItem";
			this->cerrarVentaToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->cerrarVentaToolStripMenuItem->Text = L"Cerrar Venta";
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
			this->DGV_items->Location = System::Drawing::Point(12, 225);
			this->DGV_items->Name = L"DGV_items";
			this->DGV_items->ReadOnly = true;
			this->DGV_items->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DGV_items->RowHeadersVisible = false;
			this->DGV_items->RowHeadersWidth = 51;
			this->DGV_items->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_items->Size = System::Drawing::Size(1020, 355);
			this->DGV_items->TabIndex = 18;
			this->DGV_items->SelectionChanged += gcnew System::EventHandler(this, &Form_Venta::DGV_items_SelectionChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(751, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 24);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Venta ID";
			// 
			// txt_venta_id
			// 
			this->txt_venta_id->BackColor = System::Drawing::SystemColors::ControlDark;
			this->txt_venta_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_venta_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_venta_id->Location = System::Drawing::Point(861, 33);
			this->txt_venta_id->MaxLength = 20;
			this->txt_venta_id->Name = L"txt_venta_id";
			this->txt_venta_id->ReadOnly = true;
			this->txt_venta_id->Size = System::Drawing::Size(171, 29);
			this->txt_venta_id->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(769, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 24);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Monto";
			// 
			// txt_venta_monto
			// 
			this->txt_venta_monto->BackColor = System::Drawing::SystemColors::ControlDark;
			this->txt_venta_monto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_venta_monto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_venta_monto->Location = System::Drawing::Point(861, 68);
			this->txt_venta_monto->MaxLength = 20;
			this->txt_venta_monto->Name = L"txt_venta_monto";
			this->txt_venta_monto->ReadOnly = true;
			this->txt_venta_monto->Size = System::Drawing::Size(171, 29);
			this->txt_venta_monto->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(764, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 24);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Estado";
			// 
			// txt_venta_estado
			// 
			this->txt_venta_estado->BackColor = System::Drawing::SystemColors::ControlDark;
			this->txt_venta_estado->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_venta_estado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_venta_estado->Location = System::Drawing::Point(861, 103);
			this->txt_venta_estado->MaxLength = 20;
			this->txt_venta_estado->Name = L"txt_venta_estado";
			this->txt_venta_estado->ReadOnly = true;
			this->txt_venta_estado->Size = System::Drawing::Size(171, 29);
			this->txt_venta_estado->TabIndex = 23;
			// 
			// btn_tab_items
			// 
			this->btn_tab_items->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn_tab_items->FlatAppearance->BorderSize = 0;
			this->btn_tab_items->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_tab_items->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_tab_items->Location = System::Drawing::Point(12, 189);
			this->btn_tab_items->Name = L"btn_tab_items";
			this->btn_tab_items->Size = System::Drawing::Size(92, 36);
			this->btn_tab_items->TabIndex = 25;
			this->btn_tab_items->Text = L"ITEMS";
			this->btn_tab_items->UseVisualStyleBackColor = false;
			this->btn_tab_items->Click += gcnew System::EventHandler(this, &Form_Venta::btn_tab_items_Click);
			// 
			// btn_tab_carrito
			// 
			this->btn_tab_carrito->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_tab_carrito->FlatAppearance->BorderSize = 0;
			this->btn_tab_carrito->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_tab_carrito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_tab_carrito->Location = System::Drawing::Point(104, 189);
			this->btn_tab_carrito->Name = L"btn_tab_carrito";
			this->btn_tab_carrito->Size = System::Drawing::Size(155, 36);
			this->btn_tab_carrito->TabIndex = 26;
			this->btn_tab_carrito->Text = L"CARRITO";
			this->btn_tab_carrito->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_tab_carrito->UseVisualStyleBackColor = false;
			this->btn_tab_carrito->Click += gcnew System::EventHandler(this, &Form_Venta::btn_tab_carrito_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(541, 189);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 24);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Cantidad";
			// 
			// updw_cantidad
			// 
			this->updw_cantidad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->updw_cantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updw_cantidad->Location = System::Drawing::Point(661, 187);
			this->updw_cantidad->Name = L"updw_cantidad";
			this->updw_cantidad->Size = System::Drawing::Size(171, 29);
			this->updw_cantidad->TabIndex = 29;
			// 
			// btn_eliminar_del_carrito
			// 
			this->btn_eliminar_del_carrito->FlatAppearance->BorderSize = 0;
			this->btn_eliminar_del_carrito->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar_del_carrito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_eliminar_del_carrito->Location = System::Drawing::Point(853, 182);
			this->btn_eliminar_del_carrito->Name = L"btn_eliminar_del_carrito";
			this->btn_eliminar_del_carrito->Size = System::Drawing::Size(179, 39);
			this->btn_eliminar_del_carrito->TabIndex = 30;
			this->btn_eliminar_del_carrito->Text = L"Eliminar del Carrito";
			this->btn_eliminar_del_carrito->UseVisualStyleBackColor = true;
			this->btn_eliminar_del_carrito->Visible = false;
			this->btn_eliminar_del_carrito->Click += gcnew System::EventHandler(this, &Form_Venta::btn_eliminar_del_carrito_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(764, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 24);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Fecha";
			// 
			// txt_venta_fecha
			// 
			this->txt_venta_fecha->BackColor = System::Drawing::SystemColors::ControlDark;
			this->txt_venta_fecha->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_venta_fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_venta_fecha->Location = System::Drawing::Point(861, 138);
			this->txt_venta_fecha->MaxLength = 20;
			this->txt_venta_fecha->Name = L"txt_venta_fecha";
			this->txt_venta_fecha->ReadOnly = true;
			this->txt_venta_fecha->Size = System::Drawing::Size(171, 29);
			this->txt_venta_fecha->TabIndex = 31;
			// 
			// Form_Venta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1044, 592);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_venta_fecha);
			this->Controls->Add(this->updw_cantidad);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btn_tab_carrito);
			this->Controls->Add(this->btn_tab_items);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_venta_estado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_venta_id);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_venta_monto);
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
			this->Controls->Add(this->btn_eliminar_del_carrito);
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
		//	FUNCIONES
		private: System::Void updateTable(int);
		private: System::Void update_txt_venta(String^);
		
		//EVENTOS
		private: System::Void Form_Venta_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_tab_items_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_tab_carrito_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_agregar_carrito_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void DGV_items_SelectionChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_eliminar_del_carrito_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buscarVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
