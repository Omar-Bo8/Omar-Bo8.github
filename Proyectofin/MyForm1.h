#pragma once

namespace Proyectofin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Clientes;

	private: System::Windows::Forms::Label^ Registrar;
	private: System::Windows::Forms::Label^ Eliminar;
	private: System::Windows::Forms::Label^ Opciones;
	private: System::Windows::Forms::TextBox^ txt_Opciones;
	private: System::Windows::Forms::Label^ label1;
	protected:

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
			this->Clientes = (gcnew System::Windows::Forms::Label());
			this->Registrar = (gcnew System::Windows::Forms::Label());
			this->Eliminar = (gcnew System::Windows::Forms::Label());
			this->Opciones = (gcnew System::Windows::Forms::Label());
			this->txt_Opciones = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Clientes
			// 
			this->Clientes->AutoSize = true;
			this->Clientes->Location = System::Drawing::Point(27, 13);
			this->Clientes->Name = L"Clientes";
			this->Clientes->Size = System::Drawing::Size(44, 13);
			this->Clientes->TabIndex = 0;
			this->Clientes->Text = L"Clientes";
			// 
			// Registrar
			// 
			this->Registrar->AutoSize = true;
			this->Registrar->Location = System::Drawing::Point(13, 48);
			this->Registrar->Name = L"Registrar";
			this->Registrar->Size = System::Drawing::Size(61, 13);
			this->Registrar->TabIndex = 2;
			this->Registrar->Text = L"1. Registrar";
			// 
			// Eliminar
			// 
			this->Eliminar->AutoSize = true;
			this->Eliminar->Location = System::Drawing::Point(14, 93);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(55, 13);
			this->Eliminar->TabIndex = 3;
			this->Eliminar->Text = L"3. Eliminar";
			// 
			// Opciones
			// 
			this->Opciones->AutoSize = true;
			this->Opciones->Location = System::Drawing::Point(16, 124);
			this->Opciones->Name = L"Opciones";
			this->Opciones->Size = System::Drawing::Size(80, 13);
			this->Opciones->TabIndex = 4;
			this->Opciones->Text = L"Ingrese opcion:";
			// 
			// txt_Opciones
			// 
			this->txt_Opciones->Location = System::Drawing::Point(93, 116);
			this->txt_Opciones->Name = L"txt_Opciones";
			this->txt_Opciones->Size = System::Drawing::Size(100, 20);
			this->txt_Opciones->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"2. Pedidos";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 242);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_Opciones);
			this->Controls->Add(this->Opciones);
			this->Controls->Add(this->Eliminar);
			this->Controls->Add(this->Registrar);
			this->Controls->Add(this->Clientes);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
