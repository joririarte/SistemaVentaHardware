#pragma once

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
	private: System::Windows::Forms::Panel^ panel_lateral;
	protected:
	private: System::Windows::Forms::Button^ btn_venta;
	private: System::Windows::Forms::Button^ btn_stock;
	private: System::Windows::Forms::Panel^ panel_lateral_inferior;
	private: System::Windows::Forms::Panel^ panel_lateral_superior;
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
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral_superior = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral_inferior = (gcnew System::Windows::Forms::Panel());
			this->btn_stock = (gcnew System::Windows::Forms::Button());
			this->btn_venta = (gcnew System::Windows::Forms::Button());
			this->panel_lateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->Controls->Add(this->btn_venta);
			this->panel_lateral->Controls->Add(this->btn_stock);
			this->panel_lateral->Controls->Add(this->panel_lateral_inferior);
			this->panel_lateral->Controls->Add(this->panel_lateral_superior);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(285, 728);
			this->panel_lateral->TabIndex = 0;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(285, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(1107, 728);
			this->panel_contenedor->TabIndex = 1;
			// 
			// panel_lateral_superior
			// 
			this->panel_lateral_superior->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_lateral_superior->Location = System::Drawing::Point(0, 0);
			this->panel_lateral_superior->Name = L"panel_lateral_superior";
			this->panel_lateral_superior->Size = System::Drawing::Size(285, 246);
			this->panel_lateral_superior->TabIndex = 0;
			// 
			// panel_lateral_inferior
			// 
			this->panel_lateral_inferior->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_lateral_inferior->Location = System::Drawing::Point(0, 449);
			this->panel_lateral_inferior->Name = L"panel_lateral_inferior";
			this->panel_lateral_inferior->Size = System::Drawing::Size(285, 279);
			this->panel_lateral_inferior->TabIndex = 0;
			// 
			// btn_stock
			// 
			this->btn_stock->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_stock->Location = System::Drawing::Point(0, 246);
			this->btn_stock->Name = L"btn_stock";
			this->btn_stock->Size = System::Drawing::Size(285, 94);
			this->btn_stock->TabIndex = 0;
			this->btn_stock->Text = L"Stock";
			this->btn_stock->UseVisualStyleBackColor = true;
			this->btn_stock->Click += gcnew System::EventHandler(this, &MainPage::btn_stock_Click);
			// 
			// btn_venta
			// 
			this->btn_venta->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btn_venta->Location = System::Drawing::Point(0, 355);
			this->btn_venta->Name = L"btn_venta";
			this->btn_venta->Size = System::Drawing::Size(285, 94);
			this->btn_venta->TabIndex = 1;
			this->btn_venta->Text = L"Venta";
			this->btn_venta->UseVisualStyleBackColor = true;
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1392, 728);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->Name = L"MainPage";
			this->Text = L"MainPage";
			this->panel_lateral->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_stock_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
