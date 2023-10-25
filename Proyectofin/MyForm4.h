#pragma once

namespace Proyectofin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ DPI;
	private: System::Windows::Forms::ColumnHeader^ Nombre;
	private: System::Windows::Forms::ColumnHeader^ Total;
	private: System::Windows::Forms::ColumnHeader^ Cambio;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->DPI = (gcnew System::Windows::Forms::ColumnHeader());
			this->Nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Total = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cambio = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->DPI, this->Nombre,
					this->Total, this->Cambio
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(25, 40);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(513, 169);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// DPI
			// 
			this->DPI->Text = L"DPI";
			// 
			// Nombre
			// 
			this->Nombre->Text = L"Cliente";
			// 
			// Total
			// 
			this->Total->Text = L"Monto a Pagar";
			// 
			// Cambio
			// 
			this->Cambio->Text = L"Cambio";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 261);
			this->Controls->Add(this->listView1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
