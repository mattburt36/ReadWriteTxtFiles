#pragma once

namespace ReadWriteTxtFiles {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exitBtn;
	protected:

	private: System::Windows::Forms::Button^ createTxtFileBtn;
	private: System::Windows::Forms::TextBox^ inputTextBox;
	private: System::Windows::Forms::TextBox^ namingTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:





	protected:

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->createTxtFileBtn = (gcnew System::Windows::Forms::Button());
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->namingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::Color::Black;
			this->exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitBtn->ForeColor = System::Drawing::Color::Snow;
			this->exitBtn->Location = System::Drawing::Point(274, 12);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(67, 29);
			this->exitBtn->TabIndex = 11;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::exitBtn_Click);
			// 
			// createTxtFileBtn
			// 
			this->createTxtFileBtn->BackColor = System::Drawing::Color::Black;
			this->createTxtFileBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createTxtFileBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createTxtFileBtn->ForeColor = System::Drawing::Color::Snow;
			this->createTxtFileBtn->Location = System::Drawing::Point(12, 12);
			this->createTxtFileBtn->Name = L"createTxtFileBtn";
			this->createTxtFileBtn->Size = System::Drawing::Size(176, 29);
			this->createTxtFileBtn->TabIndex = 12;
			this->createTxtFileBtn->Text = L"Create/Choose Text File";
			this->createTxtFileBtn->UseVisualStyleBackColor = false;
			this->createTxtFileBtn->Click += gcnew System::EventHandler(this, &MyForm::createTxtFileBtn_Click_1);
			// 
			// inputTextBox
			// 
			this->inputTextBox->Location = System::Drawing::Point(12, 140);
			this->inputTextBox->Multiline = true;
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(577, 133);
			this->inputTextBox->TabIndex = 13;
			this->inputTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::inputTextBox_TextChanged);
			// 
			// namingTextBox
			// 
			this->namingTextBox->Location = System::Drawing::Point(12, 93);
			this->namingTextBox->Name = L"namingTextBox";
			this->namingTextBox->Size = System::Drawing::Size(172, 22);
			this->namingTextBox->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 19);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Input";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 19);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Name";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(605, 285);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->namingTextBox);
			this->Controls->Add(this->inputTextBox);
			this->Controls->Add(this->createTxtFileBtn);
			this->Controls->Add(this->exitBtn);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// Buttons section 
//--------------------------------------------------------------------------------------------------------------------
	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit(); // When click exit button exit the application 
	}
	private: System::Void createTxtFileBtn_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		String^ fileTitle = namingTextBox->Text; // Assign a variable to carry the title of a file, to access files
		StreamWriter^ outFile = gcnew StreamWriter(fileTitle, true);	// Designate the name of the file here, you can also 
		  																// give a specific path rather than a name for foreign files. 

		String^ inputTxt = inputTextBox->Text; // Assign a variable with the value of the input box, to write to file chosen.  
		outFile->Write(inputTxt + "\n");

		outFile->Close(); 
	}
//--------------------------------------------------------------------------------------------------------------------


// Dragging box around screen section 
//--------------------------------------------------------------------------------------------------------------------
		   bool dragging;
		   Point offset;
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		// Enable dragging and get mouse position
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		// Check whether able to move
		if (dragging)
		{
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		// Disable dragging 
		dragging = false;
	}
//--------------------------------------------------------------------------------------------------------------------
};
}
