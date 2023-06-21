#pragma once
#include "Form1.h"
#include "Form_Venta.h"

namespace SistemaVentaHardware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: CppCLRWinFormsProject::Form1^ stock;
	private: SistemaVentaHardware::Form_Venta^ ventas;
	private: System::Windows::Forms::Panel^ panel_lateral;
	protected:
	private: System::Windows::Forms::Button^ btn_venta;
	private: System::Windows::Forms::Button^ btn_stock;


	private: System::Windows::Forms::Panel^ panel_contenedor;

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
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->btn_venta = (gcnew System::Windows::Forms::Button());
			this->btn_stock = (gcnew System::Windows::Forms::Button());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel_lateral->Controls->Add(this->btn_venta);
			this->panel_lateral->Controls->Add(this->btn_stock);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Margin = System::Windows::Forms::Padding(2);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(1044, 34);
			this->panel_lateral->TabIndex = 0;
			// 
			// btn_venta
			// 
			this->btn_venta->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn_venta->FlatAppearance->BorderSize = 0;
			this->btn_venta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_venta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_venta->Location = System::Drawing::Point(94, 0);
			this->btn_venta->Margin = System::Windows::Forms::Padding(2);
			this->btn_venta->Name = L"btn_venta";
			this->btn_venta->Size = System::Drawing::Size(94, 34);
			this->btn_venta->TabIndex = 1;
			this->btn_venta->Text = L"Venta";
			this->btn_venta->UseVisualStyleBackColor = false;
			this->btn_venta->Click += gcnew System::EventHandler(this, &MainPage::btn_venta_Click);
			// 
			// btn_stock
			// 
			this->btn_stock->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_stock->FlatAppearance->BorderSize = 0;
			this->btn_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_stock->Location = System::Drawing::Point(0, 0);
			this->btn_stock->Margin = System::Windows::Forms::Padding(2);
			this->btn_stock->Name = L"btn_stock";
			this->btn_stock->Size = System::Drawing::Size(94, 34);
			this->btn_stock->TabIndex = 0;
			this->btn_stock->Text = L"Stock";
			this->btn_stock->UseVisualStyleBackColor = false;
			this->btn_stock->Click += gcnew System::EventHandler(this, &MainPage::btn_stock_Click);
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(0, 34);
			this->panel_contenedor->Margin = System::Windows::Forms::Padding(2);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(1044, 592);
			this->panel_contenedor->TabIndex = 1;
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1044, 626);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainPage";
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->panel_lateral->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		template <class T>
		void AbrirPanel(T formHijo) {
			if (this->panel_contenedor->Controls->Count > 0) {
				this->panel_contenedor->Controls->RemoveAt(0);
			}
			formHijo->TopLevel = false;
			formHijo->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(formHijo);
			this->panel_contenedor->Tag = formHijo;
			formHijo->Show();
		}
	private: System::Void btn_stock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btn_stock->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->btn_venta->BackColor = System::Drawing::SystemColors::ControlDark;
		
		SistemaVentaHardware::Form_Venta^ antForm = ventas;
		ventas = nullptr;
		delete antForm;
		
		stock= gcnew CppCLRWinFormsProject::Form1();
		this->AbrirPanel(stock);
	}
	private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew CppCLRWinFormsProject::Form1);
	}
	private: System::Void btn_venta_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btn_stock->BackColor = System::Drawing::SystemColors::ControlDark;
		this->btn_venta->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		
		CppCLRWinFormsProject::Form1^ antForm = stock;
		stock = nullptr;
		delete antForm;
		
		ventas = gcnew SistemaVentaHardware::Form_Venta();
		this->AbrirPanel(ventas);
	}
};
}
