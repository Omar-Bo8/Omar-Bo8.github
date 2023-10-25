#pragma once

namespace Proyectofin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Registro_C;
	private: System::Windows::Forms::Label^ Datos;
	protected:

	private: System::Windows::Forms::TextBox^ txt_Datos;
	private: System::Windows::Forms::Label^ DPI;
	private: System::Windows::Forms::Label^ Telefono;
	private: System::Windows::Forms::TextBox^ txt_DPI;
	private: System::Windows::Forms::TextBox^ txt_Telefono;
	private: System::Windows::Forms::Button^ Registrar;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Registro_C = (gcnew System::Windows::Forms::Label());
			this->Datos = (gcnew System::Windows::Forms::Label());
			this->txt_Datos = (gcnew System::Windows::Forms::TextBox());
			this->DPI = (gcnew System::Windows::Forms::Label());
			this->Telefono = (gcnew System::Windows::Forms::Label());
			this->txt_DPI = (gcnew System::Windows::Forms::TextBox());
			this->txt_Telefono = (gcnew System::Windows::Forms::TextBox());
			this->Registrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Registro_C
			// 
			this->Registro_C->AutoSize = true;
			this->Registro_C->Location = System::Drawing::Point(13, 13);
			this->Registro_C->Name = L"Registro_C";
			this->Registro_C->Size = System::Drawing::Size(98, 13);
			this->Registro_C->TabIndex = 0;
			this->Registro_C->Text = L"Registro del Cliente";
			// 
			// Datos
			// 
			this->Datos->AutoSize = true;
			this->Datos->Location = System::Drawing::Point(16, 44);
			this->Datos->Name = L"Datos";
			this->Datos->Size = System::Drawing::Size(95, 13);
			this->Datos->TabIndex = 1;
			this->Datos->Text = L"Nombre y Apellido:";
			// 
			// txt_Datos
			// 
			this->txt_Datos->Location = System::Drawing::Point(117, 37);
			this->txt_Datos->Name = L"txt_Datos";
			this->txt_Datos->Size = System::Drawing::Size(100, 20);
			this->txt_Datos->TabIndex = 2;
			// 
			// DPI
			// 
			this->DPI->AutoSize = true;
			this->DPI->Location = System::Drawing::Point(19, 78);
			this->DPI->Name = L"DPI";
			this->DPI->Size = System::Drawing::Size(28, 13);
			this->DPI->TabIndex = 3;
			this->DPI->Text = L"DPI:";
			// 
			// Telefono
			// 
			this->Telefono->AutoSize = true;
			this->Telefono->Location = System::Drawing::Point(19, 110);
			this->Telefono->Name = L"Telefono";
			this->Telefono->Size = System::Drawing::Size(52, 13);
			this->Telefono->TabIndex = 4;
			this->Telefono->Text = L"Telefono:";
			// 
			// txt_DPI
			// 
			this->txt_DPI->Location = System::Drawing::Point(117, 70);
			this->txt_DPI->Name = L"txt_DPI";
			this->txt_DPI->Size = System::Drawing::Size(100, 20);
			this->txt_DPI->TabIndex = 5;
			// 
			// txt_Telefono
			// 
			this->txt_Telefono->Location = System::Drawing::Point(117, 102);
			this->txt_Telefono->Name = L"txt_Telefono";
			this->txt_Telefono->Size = System::Drawing::Size(100, 20);
			this->txt_Telefono->TabIndex = 6;
			// 
			// Registrar
			// 
			this->Registrar->Location = System::Drawing::Point(78, 149);
			this->Registrar->Name = L"Registrar";
			this->Registrar->Size = System::Drawing::Size(75, 23);
			this->Registrar->TabIndex = 7;
			this->Registrar->Text = L"Registrar";
			this->Registrar->UseVisualStyleBackColor = true;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Registrar);
			this->Controls->Add(this->txt_Telefono);
			this->Controls->Add(this->txt_DPI);
			this->Controls->Add(this->Telefono);
			this->Controls->Add(this->DPI);
			this->Controls->Add(this->txt_Datos);
			this->Controls->Add(this->Datos);
			this->Controls->Add(this->Registro_C);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
