#pragma once
#include <fstream>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

namespace Proyecto1musicfestival {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_playlist;
	private: System::Windows::Forms::ListBox^ Playlist;
	private: System::Windows::Forms::ListBox^ ColaActual;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox_artista;

	private: System::Windows::Forms::TextBox^ textBox_nombre;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_agregar;
	private: System::Windows::Forms::Button^ button_ordenar_xcancion;
	private: System::Windows::Forms::Button^ button_ordenar_xartista;




	private: System::Windows::Forms::Button^ button_eliminar;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label_reproductor;

	private: System::Windows::Forms::Button^ button_next;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button_playlist = (gcnew System::Windows::Forms::Button());
			this->Playlist = (gcnew System::Windows::Forms::ListBox());
			this->ColaActual = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_artista = (gcnew System::Windows::Forms::TextBox());
			this->textBox_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_agregar = (gcnew System::Windows::Forms::Button());
			this->button_ordenar_xcancion = (gcnew System::Windows::Forms::Button());
			this->button_ordenar_xartista = (gcnew System::Windows::Forms::Button());
			this->button_eliminar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_reproductor = (gcnew System::Windows::Forms::Label());
			this->button_next = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button_playlist
			// 
			this->button_playlist->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_playlist->Location = System::Drawing::Point(63, 511);
			this->button_playlist->Name = L"button_playlist";
			this->button_playlist->Size = System::Drawing::Size(220, 34);
			this->button_playlist->TabIndex = 0;
			this->button_playlist->Text = L"Seleccionar playlist";
			this->button_playlist->UseVisualStyleBackColor = true;
			this->button_playlist->Click += gcnew System::EventHandler(this, &MyForm1::button_playlist_Click);
			// 
			// Playlist
			// 
			this->Playlist->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Playlist->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Playlist->ForeColor = System::Drawing::Color::White;
			this->Playlist->FormattingEnabled = true;
			this->Playlist->ItemHeight = 21;
			this->Playlist->Location = System::Drawing::Point(63, 201);
			this->Playlist->Name = L"Playlist";
			this->Playlist->Size = System::Drawing::Size(220, 298);
			this->Playlist->TabIndex = 1;
			// 
			// ColaActual
			// 
			this->ColaActual->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ColaActual->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ColaActual->ForeColor = System::Drawing::Color::White;
			this->ColaActual->FormattingEnabled = true;
			this->ColaActual->ItemHeight = 21;
			this->ColaActual->Location = System::Drawing::Point(303, 201);
			this->ColaActual->Name = L"ColaActual";
			this->ColaActual->Size = System::Drawing::Size(220, 298);
			this->ColaActual->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(59, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Playlist seleccionada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(299, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Cola actual";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox_artista);
			this->panel1->Controls->Add(this->textBox_nombre);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->ForeColor = System::Drawing::SystemColors::Window;
			this->panel1->Location = System::Drawing::Point(559, 257);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(318, 114);
			this->panel1->TabIndex = 5;
			// 
			// textBox_artista
			// 
			this->textBox_artista->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_artista->Location = System::Drawing::Point(103, 63);
			this->textBox_artista->Name = L"textBox_artista";
			this->textBox_artista->Size = System::Drawing::Size(199, 28);
			this->textBox_artista->TabIndex = 3;
			// 
			// textBox_nombre
			// 
			this->textBox_nombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_nombre->Location = System::Drawing::Point(103, 20);
			this->textBox_nombre->Name = L"textBox_nombre";
			this->textBox_nombre->Size = System::Drawing::Size(199, 28);
			this->textBox_nombre->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(16, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 19);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Artista:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nombre:";
			// 
			// button_agregar
			// 
			this->button_agregar->BackColor = System::Drawing::Color::White;
			this->button_agregar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_agregar->ForeColor = System::Drawing::Color::Black;
			this->button_agregar->Location = System::Drawing::Point(559, 201);
			this->button_agregar->Name = L"button_agregar";
			this->button_agregar->Size = System::Drawing::Size(220, 34);
			this->button_agregar->TabIndex = 8;
			this->button_agregar->Text = L"Agregar canción";
			this->button_agregar->UseVisualStyleBackColor = false;
			this->button_agregar->Click += gcnew System::EventHandler(this, &MyForm1::button_agregar_Click);
			// 
			// button_ordenar_xcancion
			// 
			this->button_ordenar_xcancion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ordenar_xcancion->ForeColor = System::Drawing::Color::Black;
			this->button_ordenar_xcancion->Location = System::Drawing::Point(559, 398);
			this->button_ordenar_xcancion->Name = L"button_ordenar_xcancion";
			this->button_ordenar_xcancion->Size = System::Drawing::Size(318, 34);
			this->button_ordenar_xcancion->TabIndex = 9;
			this->button_ordenar_xcancion->Text = L"Ordenar cola por canción";
			this->button_ordenar_xcancion->UseVisualStyleBackColor = true;
			this->button_ordenar_xcancion->Click += gcnew System::EventHandler(this, &MyForm1::button_ordenar_xcancion_Click);
			// 
			// button_ordenar_xartista
			// 
			this->button_ordenar_xartista->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ordenar_xartista->ForeColor = System::Drawing::Color::Black;
			this->button_ordenar_xartista->Location = System::Drawing::Point(559, 449);
			this->button_ordenar_xartista->Name = L"button_ordenar_xartista";
			this->button_ordenar_xartista->Size = System::Drawing::Size(318, 34);
			this->button_ordenar_xartista->TabIndex = 10;
			this->button_ordenar_xartista->Text = L"Ordenar cola por artista";
			this->button_ordenar_xartista->UseVisualStyleBackColor = true;
			this->button_ordenar_xartista->Click += gcnew System::EventHandler(this, &MyForm1::button_ordenar_xartista_Click);
			// 
			// button_eliminar
			// 
			this->button_eliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_eliminar->Location = System::Drawing::Point(303, 511);
			this->button_eliminar->Name = L"button_eliminar";
			this->button_eliminar->Size = System::Drawing::Size(220, 34);
			this->button_eliminar->TabIndex = 11;
			this->button_eliminar->Text = L"Eliminar canción";
			this->button_eliminar->UseVisualStyleBackColor = true;
			this->button_eliminar->Click += gcnew System::EventHandler(this, &MyForm1::button_eliminar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(59, 595);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 21);
			this->label4->TabIndex = 12;
			this->label4->Text = L"En reproducción:";
			// 
			// label_reproductor
			// 
			this->label_reproductor->AutoSize = true;
			this->label_reproductor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_reproductor->ForeColor = System::Drawing::Color::White;
			this->label_reproductor->Location = System::Drawing::Point(60, 626);
			this->label_reproductor->Name = L"label_reproductor";
			this->label_reproductor->Size = System::Drawing::Size(444, 21);
			this->label_reproductor->TabIndex = 13;
			this->label_reproductor->Text = L"NADA | Presiona siguiente canción para reproducir.";
			// 
			// button_next
			// 
			this->button_next->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_next->Location = System::Drawing::Point(64, 665);
			this->button_next->Name = L"button_next";
			this->button_next->Size = System::Drawing::Size(220, 34);
			this->button_next->TabIndex = 14;
			this->button_next->Text = L"Siguiente canción";
			this->button_next->UseVisualStyleBackColor = true;
			this->button_next->Click += gcnew System::EventHandler(this, &MyForm1::button_next_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(63, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(378, 110);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(64, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(114, 110);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(956, 750);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button_next);
			this->Controls->Add(this->label_reproductor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button_eliminar);
			this->Controls->Add(this->button_ordenar_xartista);
			this->Controls->Add(this->button_ordenar_xcancion);
			this->Controls->Add(this->button_agregar);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ColaActual);
			this->Controls->Add(this->Playlist);
			this->Controls->Add(this->button_playlist);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button_playlist_Click(System::Object^ sender, System::EventArgs^ e) {
		Playlist->Items->Clear();
		std::string texto;
		std::ifstream fichero;
		System::String^ lista = "";
		int i = 0;

		fichero.open("Playlist.txt", std::ios::in);
		if (fichero.fail())
		{
			MessageBox::Show("El archivo no fue encontrado, verifique su existencia.");
		}
		else
		{
			while (!fichero.eof()) //devuelve falso hasta que se alcance el final del archivo.
			{
				getline(fichero, texto);
				lista = marshal_as<System::String^>(texto); //convierte datos entre entornos nativos.
				Playlist->Items->Add(lista);
				ColaActual->Items->Add(lista);
				i++;
			}
		}
	}



	private: System::Void button_agregar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre_cancion;
		String^ artista;
		String^ Add;
		nombre_cancion = textBox_nombre->Text;
		artista = textBox_artista->Text;

		if (nombre_cancion == "" && artista == "")
		{
			MessageBox::Show("Ingrese un nombre válido.");
		}
		else if (nombre_cancion == "")
		{
			MessageBox::Show("Ingrese un nombre válido.");
		}
		else if (artista == "")
		{
			Add = nombre_cancion + " - Desconocido" + artista;
			ColaActual->Items->Add(Add);
		}
		else
		{
			Add = nombre_cancion + " - " + artista;
			ColaActual->Items->Add(Add);
		}
		textBox_artista->Text = "";
		textBox_nombre->Text = "";
	}



	private: System::Void button_next_Click(System::Object^ sender, System::EventArgs^ e) {
		int count = ColaActual->Items->Count;
		if (count == 0)
		{
			MessageBox::Show("No hay mas canciones en la cola.");
		}
		else
		{
			label_reproductor->Text = ColaActual->Items[0]->ToString();
			ColaActual->Items->RemoveAt(0);
		}
	}



	private: System::Void button_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		ColaActual->Items->RemoveAt(ColaActual->SelectedIndex);
	}



	private: System::Void button_ordenar_xcancion_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ texto;
		std::string vector[80];
		std::string lista = "", t = "";
		int count = ColaActual->Items->Count;

		//Llenar vectores
		for (int i = 0; i < count; i++)
		{
			texto = ColaActual->Items[i]->ToString();
			lista = marshal_as<std::string>(texto);
			vector[i] = lista;
		}
		ColaActual->Items->Clear();

		//ordenamiento
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; j < count - 1; j++)
			{
				if (vector[j][0] > vector[j + 1][0])
				{
					t = vector[j];
					vector[j] = vector[j + 1];
					vector[j + 1] = t;
				}
			}
		}

		//mover ordenado a listbox
		for (int i = 0; i < count; i++)
		{
			lista = vector[i];
			texto = marshal_as<String^>(lista);
			ColaActual->Items->Add(texto);
		}
	}



	private: System::Void button_ordenar_xartista_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ texto;
		std::string vector[80], artista[80];
		std::string lista = "", t = "", delimitador = "-", art = "", tt = "";
		int count = ColaActual->Items->Count;
		
		//Llenar vectores
		for (int i = 0; i < count; i++)
		{
			texto = ColaActual->Items[i]->ToString();
			lista = marshal_as<std::string>(texto);
			int pos = lista.find("-");
			vector[i] = lista;
			art = lista.substr(pos + 2);
			artista[i] = art;
		}
		ColaActual->Items->Clear();
		
		//ordenar
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; j < count - 1; j++)
			{
				if (artista[j][0] > artista[j + 1][0])
				{
					t = artista[j];
					artista[j] = artista[j + 1];
					artista[j + 1] = t;
					tt = vector[j];
					vector[j] = vector[j + 1];
					vector[j + 1] = tt;
				}
			}
		}

		//mover ordenado a listbox
		for (int i = 0; i < count; i++)
		{
			lista = vector[i];
			texto = marshal_as<String^>(lista);
			ColaActual->Items->Add(texto);
		}
	}
};
}
