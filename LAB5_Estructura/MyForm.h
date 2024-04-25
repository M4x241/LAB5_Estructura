#pragma once

using namespace std;
using namespace Recetaslibrary;
namespace LAB5Estructura {

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textNombre;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::DomainUpDown^ domainUpDown2;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown5;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown4;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ bttnGuardar;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ListBox^ listReceta;

	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->bttnGuardar = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->domainUpDown5 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown4 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown3 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listReceta = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->bttnGuardar);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->domainUpDown5);
			this->panel1->Controls->Add(this->domainUpDown4);
			this->panel1->Controls->Add(this->domainUpDown3);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->domainUpDown2);
			this->panel1->Controls->Add(this->domainUpDown1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textNombre);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Location = System::Drawing::Point(45, 128);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(278, 398);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(127, 82);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 20);
			this->textBox4->TabIndex = 24;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(36, 20);
			this->button2->TabIndex = 23;
			this->button2->Text = L"add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"#ID";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(182, 11);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(65, 20);
			this->textBox3->TabIndex = 21;
			// 
			// bttnGuardar
			// 
			this->bttnGuardar->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->bttnGuardar->Location = System::Drawing::Point(109, 365);
			this->bttnGuardar->Name = L"bttnGuardar";
			this->bttnGuardar->Size = System::Drawing::Size(75, 23);
			this->bttnGuardar->TabIndex = 20;
			this->bttnGuardar->Text = L"GUARDAR";
			this->bttnGuardar->UseVisualStyleBackColor = false;
			this->bttnGuardar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 322);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 19;
			// 
			// domainUpDown5
			// 
			this->domainUpDown5->Items->Add(L"9");
			this->domainUpDown5->Items->Add(L"8");
			this->domainUpDown5->Items->Add(L"7");
			this->domainUpDown5->Items->Add(L"6");
			this->domainUpDown5->Items->Add(L"5");
			this->domainUpDown5->Items->Add(L"4");
			this->domainUpDown5->Items->Add(L"3");
			this->domainUpDown5->Items->Add(L"2");
			this->domainUpDown5->Items->Add(L"1");
			this->domainUpDown5->Location = System::Drawing::Point(208, 244);
			this->domainUpDown5->Name = L"domainUpDown5";
			this->domainUpDown5->Size = System::Drawing::Size(40, 20);
			this->domainUpDown5->TabIndex = 18;
			this->domainUpDown5->Text = L"1";
			// 
			// domainUpDown4
			// 
			this->domainUpDown4->Location = System::Drawing::Point(208, 210);
			this->domainUpDown4->Name = L"domainUpDown4";
			this->domainUpDown4->Size = System::Drawing::Size(39, 20);
			this->domainUpDown4->TabIndex = 17;
			this->domainUpDown4->Text = L"MIN";
			// 
			// domainUpDown3
			// 
			this->domainUpDown3->Items->Add(L"1");
			this->domainUpDown3->Items->Add(L"2");
			this->domainUpDown3->Items->Add(L"3");
			this->domainUpDown3->Items->Add(L"4");
			this->domainUpDown3->Items->Add(L"5");
			this->domainUpDown3->Items->Add(L"6");
			this->domainUpDown3->Items->Add(L"7");
			this->domainUpDown3->Items->Add(L"8");
			this->domainUpDown3->Location = System::Drawing::Point(127, 210);
			this->domainUpDown3->Name = L"domainUpDown3";
			this->domainUpDown3->Size = System::Drawing::Size(44, 20);
			this->domainUpDown3->TabIndex = 16;
			this->domainUpDown3->Text = L"HRS";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 322);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"ORIGEN";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 281);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"DIFICULTAD:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"COCCION";
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Items->Add(L"1");
			this->domainUpDown2->Items->Add(L"2");
			this->domainUpDown2->Items->Add(L"3");
			this->domainUpDown2->Items->Add(L"4");
			this->domainUpDown2->Items->Add(L"5");
			this->domainUpDown2->Items->Add(L"6");
			this->domainUpDown2->Items->Add(L"7");
			this->domainUpDown2->Items->Add(L"8");
			this->domainUpDown2->Items->Add(L"9");
			this->domainUpDown2->Items->Add(L"10");
			this->domainUpDown2->Items->Add(L"11");
			this->domainUpDown2->Items->Add(L"12");
			this->domainUpDown2->Items->Add(L"13");
			this->domainUpDown2->Items->Add(L"14");
			this->domainUpDown2->Items->Add(L"15");
			this->domainUpDown2->Items->Add(L"16");
			this->domainUpDown2->Items->Add(L"17");
			this->domainUpDown2->Items->Add(L"18");
			this->domainUpDown2->Items->Add(L"19");
			this->domainUpDown2->Items->Add(L"20");
			this->domainUpDown2->Location = System::Drawing::Point(209, 179);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(39, 20);
			this->domainUpDown2->TabIndex = 9;
			this->domainUpDown2->Text = L"MIN";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"1");
			this->domainUpDown1->Items->Add(L"2");
			this->domainUpDown1->Items->Add(L"3");
			this->domainUpDown1->Items->Add(L"4");
			this->domainUpDown1->Items->Add(L"5");
			this->domainUpDown1->Items->Add(L"6");
			this->domainUpDown1->Items->Add(L"7");
			this->domainUpDown1->Items->Add(L"8");
			this->domainUpDown1->Items->Add(L"9");
			this->domainUpDown1->Items->Add(L"10");
			this->domainUpDown1->Location = System::Drawing::Point(127, 179);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(44, 20);
			this->domainUpDown1->TabIndex = 8;
			this->domainUpDown1->Text = L"HRS";
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &MyForm::domainUpDown1_SelectedItemChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"PREPARACION";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"INGREDIENTES:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(127, 108);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 56);
			this->listBox1->TabIndex = 5;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"NOMBRE:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textNombre
			// 
			this->textNombre->Location = System::Drawing::Point(127, 37);
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(121, 20);
			this->textNombre->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"PORCIONES:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"FACIL", L"MEDIO", L"DIFICIL", L"MASTERCHEF" });
			this->comboBox1->Location = System::Drawing::Point(127, 281);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(104, 33);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(404, 72);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 0);
			this->label1->MaximumSize = System::Drawing::Size(300, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RECETAS";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->textBox8);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->checkedListBox1);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Location = System::Drawing::Point(335, 128);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(202, 398);
			this->panel3->TabIndex = 2;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(132, 339);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(42, 20);
			this->textBox8->TabIndex = 29;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(131, 319);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(42, 20);
			this->textBox7->TabIndex = 28;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(131, 299);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(42, 20);
			this->textBox6->TabIndex = 27;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(131, 279);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(42, 20);
			this->textBox5->TabIndex = 26;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(23, 346);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 13);
			this->label15->TabIndex = 25;
			this->label15->Text = L"CARBOHIDRATOS";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(23, 324);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 13);
			this->label14->TabIndex = 24;
			this->label14->Text = L"PROTEINAS";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 302);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"GRASAS";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 282);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"CALORIAS";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(46, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"VALOR NUTRICIONAL";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(26, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(147, 130);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"PICANTE", L"SALADO", L"DULCE", L"CRUGIENTE",
					L"FRITO", L"SALTEADO"
			});
			this->checkedListBox1->Location = System::Drawing::Point(26, 162);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(147, 94);
			this->checkedListBox1->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(64, 148);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"CATEGORIA";
			// 
			// listReceta
			// 
			this->listReceta->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listReceta->FormattingEnabled = true;
			this->listReceta->Location = System::Drawing::Point(560, 137);
			this->listReceta->Name = L"listReceta";
			this->listReceta->Size = System::Drawing::Size(120, 199);
			this->listReceta->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(692, 578);
			this->Controls->Add(this->listReceta);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//creando miembro de la clase receta
	Receta receta;
	//asignando valores a los atributos de la clase receta
	receta.setNombre(textNombre->Text);
	receta.setIngredientes(listBox1->Text);
	receta.setTiempodePreparacion(Convert::ToInt32(domainUpDown1->Text));
	receta.setTiempoCoccion(Convert::ToInt32(domainUpDown3->Text)); 
	receta.setPorciones(Convert::ToInt32(domainUpDown5->Text));
	receta.setDificultad(comboBox1->Text);
	receta.setOrigen(textBox2->Text);
	//agregando la receta a la lista de recetas
	listReceta->Items->Add(receta.getNombre());
	//limpiando los campos
	textNombre->Text = "";
	listBox1->Items->Clear();
	domainUpDown1->Text = "HRS";
	domainUpDown2->Text = "MIN";
	domainUpDown5->Text = "UNIT";
	comboBox1->Text = "";
	textBox2->Text = "";

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
    // Increase the size of the label
    
}
