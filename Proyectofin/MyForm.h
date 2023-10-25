#pragma once

namespace Proyectofin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Ingresar;
	protected:

	private: System::Windows::Forms::Label^ Usuario;
	private: System::Windows::Forms::Label^ Contrase�a;
	private: System::Windows::Forms::TextBox^ txt_Usuario;
	private: System::Windows::Forms::TextBox^ txt_Contrase�a;
	protected:





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Ingresar = (gcnew System::Windows::Forms::Button());
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->Contrase�a = (gcnew System::Windows::Forms::Label());
			this->txt_Usuario = (gcnew System::Windows::Forms::TextBox());
			this->txt_Contrase�a = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Ingresar
			// 
			this->Ingresar->Location = System::Drawing::Point(98, 114);
			this->Ingresar->Name = L"Ingresar";
			this->Ingresar->Size = System::Drawing::Size(80, 29);
			this->Ingresar->TabIndex = 0;
			this->Ingresar->Text = L"Ingresar";
			this->Ingresar->UseVisualStyleBackColor = true;
			this->Ingresar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Location = System::Drawing::Point(40, 37);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(43, 13);
			this->Usuario->TabIndex = 1;
			this->Usuario->Text = L"Usuario";
			// 
			// Contrase�a
			// 
			this->Contrase�a->AutoSize = true;
			this->Contrase�a->Location = System::Drawing::Point(31, 67);
			this->Contrase�a->Name = L"Contrase�a";
			this->Contrase�a->Size = System::Drawing::Size(61, 13);
			this->Contrase�a->TabIndex = 2;
			this->Contrase�a->Text = L"Contrase�a";
			// 
			// txt_Usuario
			// 
			this->txt_Usuario->Location = System::Drawing::Point(98, 34);
			this->txt_Usuario->Name = L"txt_Usuario";
			this->txt_Usuario->Size = System::Drawing::Size(100, 20);
			this->txt_Usuario->TabIndex = 3;
			// 
			// txt_Contrase�a
			// 
			this->txt_Contrase�a->Location = System::Drawing::Point(98, 60);
			this->txt_Contrase�a->Name = L"txt_Contrase�a";
			this->txt_Contrase�a->Size = System::Drawing::Size(100, 20);
			this->txt_Contrase�a->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->txt_Contrase�a);
			this->Controls->Add(this->txt_Usuario);
			this->Controls->Add(this->Contrase�a);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->Ingresar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
	}
};
}
