#pragma once


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ L1_1;
	private: System::Windows::Forms::Label^ L2_1;

	private: System::Windows::Forms::Label^ L1_2;
	private: System::Windows::Forms::Label^ L2_2;
	private: System::Windows::Forms::TextBox^ textbox;



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->L1_1 = (gcnew System::Windows::Forms::Label());
			this->L2_1 = (gcnew System::Windows::Forms::Label());
			this->L1_2 = (gcnew System::Windows::Forms::Label());
			this->L2_2 = (gcnew System::Windows::Forms::Label());
			this->textbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(408, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Result";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// L1_1
			// 
			this->L1_1->AutoSize = true;
			this->L1_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L1_1->Location = System::Drawing::Point(22, 242);
			this->L1_1->Name = L"L1_1";
			this->L1_1->Size = System::Drawing::Size(80, 25);
			this->L1_1->TabIndex = 1;
			this->L1_1->Text = L"Sr(N) =";
			this->L1_1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// L2_1
			// 
			this->L2_1->AutoSize = true;
			this->L2_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L2_1->Location = System::Drawing::Point(22, 288);
			this->L2_1->Name = L"L2_1";
			this->L2_1->Size = System::Drawing::Size(110, 25);
			this->L2_1->TabIndex = 2;
			this->L2_1->Text = L"N count = ";
			// 
			// L1_2
			// 
			this->L1_2->AutoSize = true;
			this->L1_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L1_2->Location = System::Drawing::Point(108, 242);
			this->L1_2->Name = L"L1_2";
			this->L1_2->Size = System::Drawing::Size(48, 25);
			this->L1_2->TabIndex = 3;
			this->L1_2->Text = L"___";
			// 
			// L2_2
			// 
			this->L2_2->AutoSize = true;
			this->L2_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->L2_2->Location = System::Drawing::Point(138, 288);
			this->L2_2->Name = L"L2_2";
			this->L2_2->Size = System::Drawing::Size(48, 25);
			this->L2_2->TabIndex = 4;
			this->L2_2->Text = L"___";
			this->L2_2->Click += gcnew System::EventHandler(this, &Form1::L2_2_Click);
			// 
			// textbox
			// 
			this->textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textbox->Location = System::Drawing::Point(3, 392);
			this->textbox->Name = L"textbox";
			this->textbox->Size = System::Drawing::Size(399, 29);
			this->textbox->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(650, 461);
			this->Controls->Add(this->textbox);
			this->Controls->Add(this->L2_2);
			this->Controls->Add(this->L1_2);
			this->Controls->Add(this->L2_1);
			this->Controls->Add(this->L1_1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"Form1";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void L2_2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ g;
		g = textbox->Text;
		double sum = 0;
		int count = 0;
		IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(g);
		char* test = static_cast<char*>(ptrToNativeString.ToPointer());
		char* number = strtok(test, "+");
		while (number != NULL)
		{
			sum += atof(number);
			number = strtok(NULL, "+");
			count++;
		}
		sum = sum / count;
		String^ temp1 = sum.ToString();
		L1_2->Text = temp1;
		textbox->Text = "";
		String^ temptemp = count.ToString();
		L2_2->Text = temptemp;


	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}