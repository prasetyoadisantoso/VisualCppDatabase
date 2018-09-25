#pragma once

namespace VisualCppDbProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for vcppdb
	/// </summary>
	public ref class vcppdb : public System::Windows::Forms::Form
	{
	public:
		vcppdb(void)
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
		~vcppdb()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button6;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(84, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nomor ID :";
			this->label1->Click += gcnew System::EventHandler(this, &vcppdb::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nama :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(84, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"No. Kontak :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(210, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(214, 29);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(210, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(214, 29);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(210, 118);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(214, 29);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &vcppdb::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(210, 162);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(214, 29);
			this->textBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(48, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 40);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Cek";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &vcppdb::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(173, 552);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 40);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Database";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &vcppdb::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(50, 222);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 40);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Tambah";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &vcppdb::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(210, 222);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 40);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Perbarui";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &vcppdb::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(360, 222);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 40);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Hapus";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &vcppdb::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(48, 310);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(422, 209);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &vcppdb::dataGridView1_CellContentClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(47, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"List Database";
			this->label5->Click += gcnew System::EventHandler(this, &vcppdb::label5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(386, 552);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 40);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Cetak";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &vcppdb::button6_Click);
			// 
			// vcppdb
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 604);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"vcppdb";
			this->Text = L"vcppdb";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// insert button click
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				//MessageBox::Show("Insert clicked");
				 try
				 {
				 String^ constr = "Server=127.0.0.1;Uid=root;Pwd=*input your database password here* ;Database=visualcppdb";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);

				 int id = Int32::Parse(textBox1->Text);
				 String^ name = textBox2->Text;
				 String^ email = textBox3->Text;
				 String^ contact = textBox4->Text;

				 MySqlCommand^ cmd = gcnew MySqlCommand("insert into userinfotbl values("+id+",'"+name+"','"+email+"','"+contact+"')",con);
				 MySqlDataReader^ dr;
				 con->Open();
				 dr = cmd->ExecuteReader();
				 MessageBox::Show("User Info Saved");
				 }
				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }

			// update db operation
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=*input your database password here* ;Database=visualcppdb";
			MySqlConnection^ con = gcnew MySqlConnection(constr);			
			int id = Int32::Parse(textBox1->Text);
			String^ name = textBox2->Text;
			String^ email = textBox3->Text;
			String^ contact = textBox4->Text;

			MySqlCommand^ cmd = gcnew MySqlCommand("update userinfotbl set name='"+name+"',email='"+email+"',contact='"+contact+"' WHERE id="+id+"",con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			MessageBox::Show("User Info Updated");
			con->Close();

		 }

		 // go button event
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 try{
			 int id = Int32::Parse(textBox1->Text);
			 String^ constr = "Server=127.0.0.1;Uid=root;Pwd=*input your database password here* ;Database=visualcppdb";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("select * from userinfotbl WHERE id="+id+"",con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 while(dr->Read())
			 {
				 textBox2->Text = dr->GetString(1);
				 textBox3->Text = dr->GetString(2);
				 textBox4->Text = dr->GetString(3);
			 }
			 con->Close();
			 }
			 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
		 }
		 // fetch all button
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=*input your database password here* ;Database=visualcppdb";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from userinfotbl",con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource=bindingSource1;

		 }
		  // delete button click event
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=*input your database password here* ;Database=visualcppdb";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			int id = Int32::Parse(textBox1->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand("delete from userinfotbl WHERE id="+id+"",con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			MessageBox::Show("User Info Deleted");
			con->Close();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	int numCols = dataGridView1->ColumnCount;
	int numRows = dataGridView1->RowCount - 1;
	String ^strDestinationFile = "D:\\\\output.";
	TextWriter ^tw = gcnew StreamWriter(strDestinationFile);
	//writing the header
	for (int count = 0; count < numCols; count++)
	{
		tw->Write(dataGridView1->Columns[count]->HeaderText);
		if (count != numCols - 1)
		{
			tw->Write(", ");
		}
	}
	tw->WriteLine();
	for (int count = 0; count < numRows; count++)
	{
		for (int count2 = 0; count2 < numCols; count2++)
		{
			tw->Write(dataGridView1->Rows[count]->Cells[count2]->Value);
			if (count2 != numCols)
			{
				tw->Write(", ");
			}
		}
		tw->WriteLine();
	}
	tw->Close();
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

}
};
}

