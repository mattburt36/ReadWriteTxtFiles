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
			this->SuspendLayout();
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::Color::Black;
			this->exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitBtn->ForeColor = System::Drawing::Color::Snow;
			this->exitBtn->Location = System::Drawing::Point(548, 12);
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
			this->createTxtFileBtn->Size = System::Drawing::Size(112, 29);
			this->createTxtFileBtn->TabIndex = 12;
			this->createTxtFileBtn->Text = L"Create Text File";
			this->createTxtFileBtn->UseVisualStyleBackColor = false;
			this->createTxtFileBtn->Click += gcnew System::EventHandler(this, &MyForm::createTxtFileBtn_Click_1);
			// 
			// inputTextBox
			// 
			this->inputTextBox->Location = System::Drawing::Point(12, 47);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(218, 22);
			this->inputTextBox->TabIndex = 13;
			this->inputTextBox->Text = L"Input";
			// 
			// namingTextBox
			// 
			this->namingTextBox->Location = System::Drawing::Point(130, 17);
			this->namingTextBox->Name = L"namingTextBox";
			this->namingTextBox->Size = System::Drawing::Size(100, 22);
			this->namingTextBox->TabIndex = 14;
			this->namingTextBox->Text = L"Name ";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(627, 526);
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
		String^ fileTitle = namingTextBox->Text;
		StreamWriter^ outFile = gcnew StreamWriter(fileTitle); // Designate the name of the file here, you can also 
		  													   // give a specific path rather than a name for foreign files. 
		String^ inputTxt = inputTextBox->Text;
		outFile->Write(inputTxt);

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
