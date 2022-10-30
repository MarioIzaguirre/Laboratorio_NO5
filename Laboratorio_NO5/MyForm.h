#pragma once
#include "Pokemon.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <string.h>
#include <msclr/marshal_cppstd.h>
#include "orden.h"

namespace LaboratorioNO5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Pokemon pokedex[90];
	orden ordenar;
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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ORDENAR POR GENERACION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(307, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ORDENAR POR NUMERO";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Shell";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(61, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Selection";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(61, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 37);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Quick";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(322, 56);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 37);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Shell";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(322, 108);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 37);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Selection";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(322, 163);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 37);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Quick";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 225);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(478, 231);
			this->textBox1->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 468);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			leerArchivo();
			textBox1->Text = mostrar(pokedex, 0);
		}
		void leerArchivo()
		{
			std::ifstream archivo;
			std::string texto;
			System::String^ txt;
			int lineaActual = 0;
			int num;
			System::String^ nombre;
			int gen;
			archivo.open("Texto.txt", std::ios::in);
			if (archivo.fail())
			{
				MessageBox::Show("no pudo abrir correctamente el archivo");
			}
			while (!archivo.eof())
			{
				std::getline(archivo, texto);
				txt = gcnew String(texto.data());
				num = Convert::ToInt32(txt->Split(',')[0]);
				nombre = txt->Split(',')[1];
				gen = Convert::ToInt32(txt->Split(',')[2]);
				pokedex[lineaActual].numero = num;
				pokedex[lineaActual].pokemon = msclr::interop::marshal_as<std::string>(nombre);
				pokedex[lineaActual].generacion = gen;
				lineaActual++;
				textBox1->Text = lineaActual; 
			}
			archivo.close();
		}
		System::String^ mostrar(Pokemon lista[], int n)
		{
			if (n == 79 || lista[n + 1].generacion == NULL)
			{
				return Convert::ToString(lista[n].numero) + "," + gcnew String(lista[n].pokemon.data()) + ", " + Convert::ToString(lista[n].generacion);
			}
			return Convert::ToString(lista[n].numero) + "," + gcnew String(lista[n].pokemon.data()) + ", " + Convert::ToString(lista[n].generacion) + Environment::NewLine + mostrar(lista, (n + 1));
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ordenar.Gen_shellSort(pokedex, 90);
		textBox1->Text = mostrar(pokedex, 0);
	}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ordenar.Num_shellSort(pokedex, 90);
	textBox1->Text = mostrar(pokedex, 0);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ordenar.Gen_selectionSort(pokedex, 90);
	textBox1->Text = mostrar(pokedex, 0);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	ordenar.Num_selectionSort(pokedex, 90);
	textBox1->Text = mostrar(pokedex, 0);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ordenar.Gen_quickSort(pokedex, 90);
	textBox1->Text = mostrar(pokedex, 0);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	ordenar.Num_quickSort(pokedex, 90);
	textBox1->Text = mostrar(pokedex, 0);
}
};

}
