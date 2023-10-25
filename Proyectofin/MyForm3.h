#pragma once

namespace Proyectofin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Pedidos;
	private: System::Windows::Forms::Label^ op_1;
	private: System::Windows::Forms::Label^ op_2;
	private: System::Windows::Forms::Label^ op_3;
	private: System::Windows::Forms::Label^ op_4;
	private: System::Windows::Forms::Label^ op_5;
	private: System::Windows::Forms::Label^ precio_1;
	private: System::Windows::Forms::Label^ precio_2;
	private: System::Windows::Forms::Label^ precio_3;
	private: System::Windows::Forms::Label^ precio_4;
	private: System::Windows::Forms::Label^ precio_5;
	private: System::Windows::Forms::Label^ Realizar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Comprar;
	private: System::Windows::Forms::Label^ Cantidad;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;










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
			this->Pedidos = (gcnew System::Windows::Forms::Label());
			this->op_1 = (gcnew System::Windows::Forms::Label());
			this->op_2 = (gcnew System::Windows::Forms::Label());
			this->op_3 = (gcnew System::Windows::Forms::Label());
			this->op_4 = (gcnew System::Windows::Forms::Label());
			this->op_5 = (gcnew System::Windows::Forms::Label());
			this->precio_1 = (gcnew System::Windows::Forms::Label());
			this->precio_2 = (gcnew System::Windows::Forms::Label());
			this->precio_3 = (gcnew System::Windows::Forms::Label());
			this->precio_4 = (gcnew System::Windows::Forms::Label());
			this->precio_5 = (gcnew System::Windows::Forms::Label());
			this->Realizar = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Comprar = (gcnew System::Windows::Forms::Button());
			this->Cantidad = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Pedidos
			// 
			this->Pedidos->AutoSize = true;
			this->Pedidos->Location = System::Drawing::Point(89, 19);
			this->Pedidos->Name = L"Pedidos";
			this->Pedidos->Size = System::Drawing::Size(86, 13);
			this->Pedidos->TabIndex = 2;
			this->Pedidos->Text = L"Menu Disponible";
			// 
			// op_1
			// 
			this->op_1->AutoSize = true;
			this->op_1->Location = System::Drawing::Point(26, 54);
			this->op_1->Name = L"op_1";
			this->op_1->Size = System::Drawing::Size(117, 13);
			this->op_1->TabIndex = 3;
			this->op_1->Text = L"1) Hamburguesa simple";
			// 
			// op_2
			// 
			this->op_2->AutoSize = true;
			this->op_2->Location = System::Drawing::Point(26, 79);
			this->op_2->Name = L"op_2";
			this->op_2->Size = System::Drawing::Size(114, 13);
			this->op_2->TabIndex = 4;
			this->op_2->Text = L"2) Hamburguesa doble";
			// 
			// op_3
			// 
			this->op_3->AutoSize = true;
			this->op_3->Location = System::Drawing::Point(26, 106);
			this->op_3->Name = L"op_3";
			this->op_3->Size = System::Drawing::Size(114, 13);
			this->op_3->TabIndex = 5;
			this->op_3->Text = L"3) Quesohamburguesa";
			// 
			// op_4
			// 
			this->op_4->AutoSize = true;
			this->op_4->Location = System::Drawing::Point(26, 130);
			this->op_4->Name = L"op_4";
			this->op_4->Size = System::Drawing::Size(139, 13);
			this->op_4->TabIndex = 6;
			this->op_4->Text = L"4) Hamburguesa + Gaseosa";
			// 
			// op_5
			// 
			this->op_5->AutoSize = true;
			this->op_5->Location = System::Drawing::Point(26, 155);
			this->op_5->Name = L"op_5";
			this->op_5->Size = System::Drawing::Size(97, 13);
			this->op_5->TabIndex = 7;
			this->op_5->Text = L"5) Helado Cremosa";
			// 
			// precio_1
			// 
			this->precio_1->AutoSize = true;
			this->precio_1->Location = System::Drawing::Point(183, 53);
			this->precio_1->Name = L"precio_1";
			this->precio_1->Size = System::Drawing::Size(45, 13);
			this->precio_1->TabIndex = 8;
			this->precio_1->Text = L"Q.14.00";
			// 
			// precio_2
			// 
			this->precio_2->AutoSize = true;
			this->precio_2->Location = System::Drawing::Point(183, 79);
			this->precio_2->Name = L"precio_2";
			this->precio_2->Size = System::Drawing::Size(45, 13);
			this->precio_2->TabIndex = 9;
			this->precio_2->Text = L"Q.20.00";
			// 
			// precio_3
			// 
			this->precio_3->AutoSize = true;
			this->precio_3->Location = System::Drawing::Point(183, 106);
			this->precio_3->Name = L"precio_3";
			this->precio_3->Size = System::Drawing::Size(45, 13);
			this->precio_3->TabIndex = 10;
			this->precio_3->Text = L"Q.18.00";
			// 
			// precio_4
			// 
			this->precio_4->AutoSize = true;
			this->precio_4->Location = System::Drawing::Point(183, 130);
			this->precio_4->Name = L"precio_4";
			this->precio_4->Size = System::Drawing::Size(45, 13);
			this->precio_4->TabIndex = 11;
			this->precio_4->Text = L"Q.25.00";
			// 
			// precio_5
			// 
			this->precio_5->AutoSize = true;
			this->precio_5->Location = System::Drawing::Point(183, 155);
			this->precio_5->Name = L"precio_5";
			this->precio_5->Size = System::Drawing::Size(39, 13);
			this->precio_5->TabIndex = 12;
			this->precio_5->Text = L"Q.6.00";
			// 
			// Realizar
			// 
			this->Realizar->AutoSize = true;
			this->Realizar->Location = System::Drawing::Point(281, 53);
			this->Realizar->Name = L"Realizar";
			this->Realizar->Size = System::Drawing::Size(124, 13);
			this->Realizar->TabIndex = 13;
			this->Realizar->Text = L"Ingrese opcion deseada:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(402, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 14;
			// 
			// Comprar
			// 
			this->Comprar->Location = System::Drawing::Point(427, 117);
			this->Comprar->Name = L"Comprar";
			this->Comprar->Size = System::Drawing::Size(75, 38);
			this->Comprar->TabIndex = 15;
			this->Comprar->Text = L"Realizar Compra";
			this->Comprar->UseVisualStyleBackColor = true;
			// 
			// Cantidad
			// 
			this->Cantidad->AutoSize = true;
			this->Cantidad->Location = System::Drawing::Point(293, 88);
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Size = System::Drawing::Size(52, 13);
			this->Cantidad->TabIndex = 16;
			this->Cantidad->Text = L"Cantidad:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(342, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(284, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Agregar otra opcion";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 297);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->Cantidad);
			this->Controls->Add(this->Comprar);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Realizar);
			this->Controls->Add(this->precio_5);
			this->Controls->Add(this->precio_4);
			this->Controls->Add(this->precio_3);
			this->Controls->Add(this->precio_2);
			this->Controls->Add(this->precio_1);
			this->Controls->Add(this->op_5);
			this->Controls->Add(this->op_4);
			this->Controls->Add(this->op_3);
			this->Controls->Add(this->op_2);
			this->Controls->Add(this->op_1);
			this->Controls->Add(this->Pedidos);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
