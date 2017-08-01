#pragma once

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: DevExpress::XtraTab::XtraTabControl^  xtraTabControl1;
	private: DevExpress::XtraTab::XtraTabPage^  xtraTabPage1;
	private: DevExpress::XtraTab::XtraTabPage^  xtraTabPage2;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: DevExpress::XtraTab::XtraTabPage^  xtraTabPage3;
	private: DevExpress::XtraTab::XtraTabPage^  xtraTabPage4;
	private: DevExpress::XtraTab::XtraTabPage^  xtraTabPage5;
	private: DevExpress::XtraTab::XtraTabPage^  xtraTabPage6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: DevExpress::XtraTab::XtraTabPage^  xtraTabPage7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton2;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton3;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton5;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton7;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton6;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton8;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label18;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->xtraTabControl1 = (gcnew DevExpress::XtraTab::XtraTabControl());
			this->xtraTabPage1 = (gcnew DevExpress::XtraTab::XtraTabPage());
			this->simpleButton1 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->xtraTabPage2 = (gcnew DevExpress::XtraTab::XtraTabPage());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->simpleButton7 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->simpleButton6 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->xtraTabPage3 = (gcnew DevExpress::XtraTab::XtraTabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->simpleButton2 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->xtraTabPage4 = (gcnew DevExpress::XtraTab::XtraTabPage());
			this->simpleButton8 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->xtraTabPage5 = (gcnew DevExpress::XtraTab::XtraTabPage());
			this->simpleButton3 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->xtraTabPage6 = (gcnew DevExpress::XtraTab::XtraTabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->simpleButton4 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->xtraTabPage7 = (gcnew DevExpress::XtraTab::XtraTabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->simpleButton5 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xtraTabControl1))->BeginInit();
			this->xtraTabControl1->SuspendLayout();
			this->xtraTabPage1->SuspendLayout();
			this->xtraTabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->xtraTabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->xtraTabPage4->SuspendLayout();
			this->xtraTabPage5->SuspendLayout();
			this->xtraTabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->xtraTabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// xtraTabControl1
			// 
			this->xtraTabControl1->Appearance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->xtraTabControl1->Appearance->Options->UseBackColor = true;
			this->xtraTabControl1->Location = System::Drawing::Point(172, 123);
			this->xtraTabControl1->Name = L"xtraTabControl1";
			this->xtraTabControl1->SelectedTabPage = this->xtraTabPage1;
			this->xtraTabControl1->Size = System::Drawing::Size(1005, 530);
			this->xtraTabControl1->TabIndex = 0;
			this->xtraTabControl1->TabPages->AddRange(gcnew cli::array< DevExpress::XtraTab::XtraTabPage^  >(7) {
				this->xtraTabPage1,
					this->xtraTabPage2, this->xtraTabPage3, this->xtraTabPage4, this->xtraTabPage5, this->xtraTabPage6, this->xtraTabPage7
			});
			// 
			// xtraTabPage1
			// 
			this->xtraTabPage1->Appearance->PageClient->BackColor = System::Drawing::Color::DarkRed;
			this->xtraTabPage1->Appearance->PageClient->Options->UseBackColor = true;
			this->xtraTabPage1->Controls->Add(this->simpleButton1);
			this->xtraTabPage1->Controls->Add(this->textBox4);
			this->xtraTabPage1->Controls->Add(this->textBox3);
			this->xtraTabPage1->Controls->Add(this->textBox2);
			this->xtraTabPage1->Controls->Add(this->label4);
			this->xtraTabPage1->Controls->Add(this->label3);
			this->xtraTabPage1->Controls->Add(this->label2);
			this->xtraTabPage1->Controls->Add(this->textBox1);
			this->xtraTabPage1->Controls->Add(this->label1);
			this->xtraTabPage1->Name = L"xtraTabPage1";
			this->xtraTabPage1->Size = System::Drawing::Size(998, 496);
			this->xtraTabPage1->Text = L"Yeni Sefer";
			// 
			// simpleButton1
			// 
			this->simpleButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton1.Image")));
			this->simpleButton1->Location = System::Drawing::Point(555, 284);
			this->simpleButton1->Name = L"simpleButton1";
			this->simpleButton1->Size = System::Drawing::Size(108, 43);
			this->simpleButton1->TabIndex = 8;
			this->simpleButton1->Text = L"Ekle";
			this->simpleButton1->Click += gcnew System::EventHandler(this, &MyForm::simpleButton1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(518, 213);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(176, 23);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(518, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(176, 23);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(518, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(176, 23);
			this->textBox2->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(182, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Bitiþ Þehrinin Kodu :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(182, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Baþlangýç Þehrinin Kodu :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tarih :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(518, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 23);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(179, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Uçaðýn Kuyruk Numarasý :";
			// 
			// xtraTabPage2
			// 
			this->xtraTabPage2->Controls->Add(this->textBox17);
			this->xtraTabPage2->Controls->Add(this->label18);
			this->xtraTabPage2->Controls->Add(this->textBox16);
			this->xtraTabPage2->Controls->Add(this->label17);
			this->xtraTabPage2->Controls->Add(this->dataGridView4);
			this->xtraTabPage2->Controls->Add(this->simpleButton7);
			this->xtraTabPage2->Controls->Add(this->simpleButton6);
			this->xtraTabPage2->Controls->Add(this->textBox8);
			this->xtraTabPage2->Controls->Add(this->textBox7);
			this->xtraTabPage2->Controls->Add(this->textBox6);
			this->xtraTabPage2->Controls->Add(this->textBox5);
			this->xtraTabPage2->Controls->Add(this->label8);
			this->xtraTabPage2->Controls->Add(this->label7);
			this->xtraTabPage2->Controls->Add(this->label6);
			this->xtraTabPage2->Controls->Add(this->label5);
			this->xtraTabPage2->Name = L"xtraTabPage2";
			this->xtraTabPage2->Size = System::Drawing::Size(998, 496);
			this->xtraTabPage2->Text = L"Bilet Satýþý";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(296, 319);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(110, 23);
			this->textBox17->TabIndex = 14;
			this->textBox17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(76, 325);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(131, 17);
			this->label18->TabIndex = 13;
			this->label18->Text = L"TC Kimlik Numarasý :";
			this->label18->Visible = false;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(296, 269);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(110, 23);
			this->textBox16->TabIndex = 12;
			this->textBox16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(76, 275);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(166, 17);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Uçaðýn Kuyruk Numarasý :";
			this->label17->Visible = false;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(487, 39);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(443, 400);
			this->dataGridView4->TabIndex = 10;
			// 
			// simpleButton7
			// 
			this->simpleButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton7.Image")));
			this->simpleButton7->Location = System::Drawing::Point(263, 396);
			this->simpleButton7->Name = L"simpleButton7";
			this->simpleButton7->Size = System::Drawing::Size(164, 43);
			this->simpleButton7->TabIndex = 9;
			this->simpleButton7->Text = L"Bilet Al";
			this->simpleButton7->Click += gcnew System::EventHandler(this, &MyForm::simpleButton7_Click);
			// 
			// simpleButton6
			// 
			this->simpleButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton6.Image")));
			this->simpleButton6->Location = System::Drawing::Point(58, 396);
			this->simpleButton6->Name = L"simpleButton6";
			this->simpleButton6->Size = System::Drawing::Size(164, 43);
			this->simpleButton6->TabIndex = 8;
			this->simpleButton6->Text = L"Uçuþlarý Listele\r\n";
			this->simpleButton6->Click += gcnew System::EventHandler(this, &MyForm::simpleButton6_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(296, 215);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(110, 23);
			this->textBox8->TabIndex = 7;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(296, 161);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(110, 23);
			this->textBox7->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(296, 111);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(110, 23);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(296, 61);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 23);
			this->textBox5->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(73, 221);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 17);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Bilet Sayýsý :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(73, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Tarih :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(73, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Bitiþ Þehrinin Kodu :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(73, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Baþlangýç Þehrinin Kodu :";
			// 
			// xtraTabPage3
			// 
			this->xtraTabPage3->Controls->Add(this->dataGridView2);
			this->xtraTabPage3->Controls->Add(this->simpleButton2);
			this->xtraTabPage3->Controls->Add(this->textBox9);
			this->xtraTabPage3->Controls->Add(this->label9);
			this->xtraTabPage3->Name = L"xtraTabPage3";
			this->xtraTabPage3->Size = System::Drawing::Size(998, 496);
			this->xtraTabPage3->Text = L"Yolcu Sorgulama";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(108, 153);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(757, 273);
			this->dataGridView2->TabIndex = 3;
			// 
			// simpleButton2
			// 
			this->simpleButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton2.Image")));
			this->simpleButton2->Location = System::Drawing::Point(477, 51);
			this->simpleButton2->Name = L"simpleButton2";
			this->simpleButton2->Size = System::Drawing::Size(126, 37);
			this->simpleButton2->TabIndex = 2;
			this->simpleButton2->Text = L"Sorgula";
			this->simpleButton2->Click += gcnew System::EventHandler(this, &MyForm::simpleButton2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(288, 65);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(145, 23);
			this->textBox9->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(105, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"TC Kimlik Numarasý :";
			// 
			// xtraTabPage4
			// 
			this->xtraTabPage4->Controls->Add(this->simpleButton8);
			this->xtraTabPage4->Controls->Add(this->textBox15);
			this->xtraTabPage4->Controls->Add(this->label16);
			this->xtraTabPage4->Name = L"xtraTabPage4";
			this->xtraTabPage4->Size = System::Drawing::Size(998, 496);
			this->xtraTabPage4->Text = L"Uçuþ Ýptali";
			// 
			// simpleButton8
			// 
			this->simpleButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton8.Image")));
			this->simpleButton8->Location = System::Drawing::Point(423, 154);
			this->simpleButton8->Name = L"simpleButton8";
			this->simpleButton8->Size = System::Drawing::Size(104, 37);
			this->simpleButton8->TabIndex = 2;
			this->simpleButton8->Text = L"Ýptal";
			this->simpleButton8->Click += gcnew System::EventHandler(this, &MyForm::simpleButton8_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(423, 85);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(168, 23);
			this->textBox15->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(84, 91);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(280, 17);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Uçuþu iptal Olacak Uçaðýn Kuyruk Numarasý :";
			// 
			// xtraTabPage5
			// 
			this->xtraTabPage5->Controls->Add(this->simpleButton3);
			this->xtraTabPage5->Controls->Add(this->textBox12);
			this->xtraTabPage5->Controls->Add(this->textBox11);
			this->xtraTabPage5->Controls->Add(this->textBox10);
			this->xtraTabPage5->Controls->Add(this->label12);
			this->xtraTabPage5->Controls->Add(this->label11);
			this->xtraTabPage5->Controls->Add(this->label10);
			this->xtraTabPage5->Name = L"xtraTabPage5";
			this->xtraTabPage5->Size = System::Drawing::Size(998, 496);
			this->xtraTabPage5->Text = L"Bilet Ýptali";
			// 
			// simpleButton3
			// 
			this->simpleButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton3.Image")));
			this->simpleButton3->Location = System::Drawing::Point(581, 264);
			this->simpleButton3->Name = L"simpleButton3";
			this->simpleButton3->Size = System::Drawing::Size(100, 38);
			this->simpleButton3->TabIndex = 6;
			this->simpleButton3->Text = L"Ýptal";
			this->simpleButton3->Click += gcnew System::EventHandler(this, &MyForm::simpleButton3_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(555, 189);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(153, 23);
			this->textBox12->TabIndex = 5;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(555, 135);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(153, 23);
			this->textBox11->TabIndex = 4;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(555, 83);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(153, 23);
			this->textBox10->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(270, 195);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(166, 17);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Uçaðýn Kuyruk Numarasý :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(270, 141);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 17);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Tarih :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(270, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(131, 17);
			this->label10->TabIndex = 0;
			this->label10->Text = L"TC Kimlik Numarasý :";
			// 
			// xtraTabPage6
			// 
			this->xtraTabPage6->Controls->Add(this->dataGridView1);
			this->xtraTabPage6->Controls->Add(this->textBox14);
			this->xtraTabPage6->Controls->Add(this->textBox13);
			this->xtraTabPage6->Controls->Add(this->simpleButton4);
			this->xtraTabPage6->Controls->Add(this->label14);
			this->xtraTabPage6->Controls->Add(this->label13);
			this->xtraTabPage6->Name = L"xtraTabPage6";
			this->xtraTabPage6->Size = System::Drawing::Size(998, 496);
			this->xtraTabPage6->Text = L"Sefer Sorgulama";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(95, 150);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(835, 297);
			this->dataGridView1->TabIndex = 5;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(306, 71);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(159, 23);
			this->textBox14->TabIndex = 4;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(306, 38);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(159, 23);
			this->textBox13->TabIndex = 3;
			// 
			// simpleButton4
			// 
			this->simpleButton4->Location = System::Drawing::Point(546, 44);
			this->simpleButton4->Name = L"simpleButton4";
			this->simpleButton4->Size = System::Drawing::Size(159, 37);
			this->simpleButton4->TabIndex = 2;
			this->simpleButton4->Text = L"Yolcu Bilgilerini Listele";
			this->simpleButton4->Click += gcnew System::EventHandler(this, &MyForm::simpleButton4_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(92, 77);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(166, 17);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Uçaðýn Kuyruk Numarasý :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(92, 44);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 17);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Tarih :";
			// 
			// xtraTabPage7
			// 
			this->xtraTabPage7->Controls->Add(this->dataGridView3);
			this->xtraTabPage7->Controls->Add(this->simpleButton5);
			this->xtraTabPage7->Name = L"xtraTabPage7";
			this->xtraTabPage7->Size = System::Drawing::Size(998, 496);
			this->xtraTabPage7->Text = L"Doluluk Oraný En Fazla Olan Uçuþlar";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(83, 129);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(854, 335);
			this->dataGridView3->TabIndex = 1;
			// 
			// simpleButton5
			// 
			this->simpleButton5->Location = System::Drawing::Point(438, 55);
			this->simpleButton5->Name = L"simpleButton5";
			this->simpleButton5->Size = System::Drawing::Size(105, 36);
			this->simpleButton5->TabIndex = 0;
			this->simpleButton5->Text = L"Listele";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->label15->Location = System::Drawing::Point(12, 730);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(365, 40);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Melike Aydýn 150202091";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1341, 795);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->xtraTabControl1);
			this->Name = L"MyForm";
			this->Text = L"Ulusal Hava Yolu Acentesi";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xtraTabControl1))->EndInit();
			this->xtraTabControl1->ResumeLayout(false);
			this->xtraTabPage1->ResumeLayout(false);
			this->xtraTabPage1->PerformLayout();
			this->xtraTabPage2->ResumeLayout(false);
			this->xtraTabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->xtraTabPage3->ResumeLayout(false);
			this->xtraTabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->xtraTabPage4->ResumeLayout(false);
			this->xtraTabPage4->PerformLayout();
			this->xtraTabPage5->ResumeLayout(false);
			this->xtraTabPage5->PerformLayout();
			this->xtraTabPage6->ResumeLayout(false);
			this->xtraTabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->xtraTabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void simpleButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String^ bilgi = L"datasource=localhost; port=3306; username=melike; password=melike; database=havayolu";
	MySqlConnection^ baglanti = gcnew MySqlConnection(bilgi);
	baglanti->Open();
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "")
	{
		MessageBox::Show("Lütfen Bilgileri Doldurunuz.");
	}
	else
	{
		MySqlCommand^ yeni = gcnew MySqlCommand("insert into seferler(baslangicNoktasi, bitisNoktasi, tarih, kuyrukNumarasi) values('" + textBox3->Text + "',  '" + textBox4->Text + "', '" + textBox2->Text + "', '" + textBox1->Text + "')", baglanti);
		MySqlDataReader^ myReader;
		myReader = yeni->ExecuteReader();
		MessageBox::Show("Kaydiniz Eklenmiþtir."); 
	}
}

private: System::Void simpleButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ bilgi = L"datasource = localhost; port = 3306; username = melike; password = melike; database = havayolu";
	MySqlConnection^ baglanti = gcnew MySqlConnection(bilgi);
	baglanti->Open();

	if (textBox9->Text == "")
	{
		MessageBox::Show("Lütfen TC Kimlik Numaranýzý Giriniz.");
	}
	else
	{
		MySqlCommand^ yeni = gcnew MySqlCommand("select * from yolcuBilgisi where TCKN = '" + textBox9->Text + "' ", baglanti);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = yeni;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		dataGridView2->DataSource = bSource;
		sda->Update(dbdataset);
	}
}
private: System::Void simpleButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	  String^ bilgi = L"datasource = localhost; port = 3306; username = melike; password = melike; database = havayolu";
	  MySqlConnection^ baglanti = gcnew MySqlConnection(bilgi);
	  baglanti->Open();

	  if (textBox10->Text == "" || textBox11->Text == "" || textBox12->Text == "")
	  {
		  MessageBox::Show("Lutfen Bilgileri Boþ Býrakmayýnýz !");
	  }
	  else
	  {
		  MySqlCommand^ yeni = gcnew MySqlCommand("delete from yolcuBilgisi where tarih = '" + textBox11->Text + "'and kuyrukNumarasi = '"  + textBox12->Text + "'and TCKN = '" + textBox10->Text + "' ", baglanti);
		  MySqlDataReader^ myReader;
		  myReader = yeni->ExecuteReader();
		  MessageBox::Show("Bilet iptali Gerçekleþti.");
	  }
}
private: System::Void simpleButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	  String^ bilgi = L"datasource=localhost; port=3306; username=melike; password=melike; database=havayolu";
	  MySqlConnection^ baglanti = gcnew MySqlConnection(bilgi);
	  baglanti->Open();
	 // int kuyrukNo = Int32::Parse(textBox14->Text);
	  if (textBox13->Text == "" || textBox14->Text == "")
	  {
		  MessageBox::Show("Lutfen Bilgileri Boþ Býrakmayýnýz !");
	  }
	  else
	  {

		  //MySqlCommand^ yeni = gcnew MySqlCommand("select  yo.yolcuIsmi, yo.yolcuAdresi, yo.epostaAdresi, yo.TCKN, yo.sehir   from yolcubilgisi y , yolcular yo where  y.yolcubilgisi_kuyrukNumarasi = yo.yolcular_TCKN  and y.tarih = '" + textBox13->Text + "'and y.kuyrukNumarasi = '" + textBox14->Text + "' ", baglanti);
		  MySqlCommand^ yeni = gcnew MySqlCommand("select  yo.yolcuIsmi, yo.yolcuAdresi, yo.epostaAdresi, yo.TCKN, yo.sehir   from yolcubilgisi y , yolcular yo where tarih = '" + textBox13->Text + "'and kuyrukNumarasi = '" + textBox14->Text + "' ", baglanti);
		  MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		  sda->SelectCommand = yeni;
		  DataTable^ dbdataset = gcnew DataTable();
		  sda->Fill(dbdataset);
		  BindingSource^ bSource = gcnew BindingSource();
		  bSource->DataSource = dbdataset;
		  dataGridView1->DataSource = bSource;
		  sda->Update(dbdataset);
	  }

}
private: System::Void simpleButton6_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ bilgi = L"datasource=localhost; port=3306; username=melike; password=melike; database=havayolu";
	MySqlConnection^ baglanti = gcnew MySqlConnection(bilgi);
	baglanti->Open();
	if (textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "")
	{
		MessageBox::Show("Lutfen Bilgileri Boþ Býrakmayýnýz ! ");
	}
	else
	{
		MySqlCommand^ yeni = gcnew MySqlCommand("select * from seferler where baslangicNoktasi = '" + textBox5->Text + "'and bitisNoktasi = '" + textBox6->Text + "'and tarih = '" + textBox7->Text + "' ", baglanti);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = yeni;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		dataGridView4->DataSource = bSource;
		sda->Update(dbdataset);
	}
	label17->Visible = true;
	textBox16->Visible = true;
	label18->Visible = true;
	textBox17->Visible = true;

	//
	//
	//
	//MySqlCommand^ yeni = gcnew MySqlCommand("select kuyrukNumarasi from seferler where baslangicNoktasi = '" + textBox5->Text +  "'and tarih = '" + textBox7->Text + "' group by bitisNoktasi having count(*) < '" + textBox6->Text +"'", baglanti);
	//MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
	//sda->SelectCommand = yeni;
	//DataTable^ dbdataset = gcnew DataTable();
	//sda->Fill(dbdataset);
	//BindingSource^ bSource = gcnew BindingSource();
	//bSource->DataSource = dbdataset;
	//dataGridView4->DataSource = bSource;
	//sda->Update(dbdataset);





}
private: System::Void simpleButton7_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ bilgi = L"datasource=localhost; port=3306; username=melike; password=melike; database=havayolu";
	MySqlConnection^ baglanti = gcnew MySqlConnection(bilgi);
	baglanti->Open();
	MySqlCommand^ yeni = gcnew MySqlCommand("insert into yolcubilgisi (tarih, kuyrukNumarasi, TCKN, baslangicNoktasi, bitisNoktasi) values('" + textBox7->Text + "', '" + textBox16->Text + "', '" + textBox17->Text + "' , '" + textBox5->Text + "', '" + textBox6->Text + "')", baglanti);
	MySqlDataReader^ myReader;
	myReader = yeni->ExecuteReader();
	MessageBox::Show("Bilet Alýmý Baþarýlý.");
}
private: System::Void simpleButton8_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ bilgi = L"datasource=localhost; port=3306; username=melike; password=melike; database=havayolu";
	MySqlConnection^ baglanti = gcnew MySqlConnection(bilgi);
	baglanti->Open();
	if (textBox15->Text == "")
	{
		MessageBox::Show("Lütfen Uçaðýn Kuyruk Numarasýný Giriniz !");
	}
	else
	{
		MySqlCommand^ yeni = gcnew MySqlCommand("delete from yolcubilgisi where kuyrukNumarasi = '" + textBox15->Text + "' ", baglanti);
		MySqlDataReader^ myReader;
		myReader = yeni->ExecuteReader();
		MessageBox::Show("Uçuþ Ýptali Baþarýlý.");
	}
}
};
}
