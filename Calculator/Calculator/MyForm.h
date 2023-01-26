#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ backspace;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ clear2;
	private: System::Windows::Forms::Button^ posneg;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ add;
	protected:

	protected:








	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ minus;




	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ multiply;




	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ decimal;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ divide;





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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->clear2 = (gcnew System::Windows::Forms::Button());
			this->posneg = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(317, 53);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->backspace->Location = System::Drawing::Point(13, 71);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(80, 80);
			this->backspace->TabIndex = 1;
			this->backspace->Text = L"⌫";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->clear->Location = System::Drawing::Point(92, 71);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(80, 80);
			this->clear->TabIndex = 2;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// clear2
			// 
			this->clear2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->clear2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->clear2->Location = System::Drawing::Point(171, 71);
			this->clear2->Name = L"clear2";
			this->clear2->Size = System::Drawing::Size(80, 80);
			this->clear2->TabIndex = 2;
			this->clear2->Text = L"CE";
			this->clear2->UseVisualStyleBackColor = false;
			this->clear2->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// posneg
			// 
			this->posneg->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->posneg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->posneg->Location = System::Drawing::Point(250, 71);
			this->posneg->Name = L"posneg";
			this->posneg->Size = System::Drawing::Size(80, 80);
			this->posneg->TabIndex = 2;
			this->posneg->Text = L"±";
			this->posneg->UseVisualStyleBackColor = false;
			this->posneg->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn7->Location = System::Drawing::Point(13, 157);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(80, 80);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn8->Location = System::Drawing::Point(92, 157);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(80, 80);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn9->Location = System::Drawing::Point(171, 157);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(80, 80);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->add->Location = System::Drawing::Point(250, 157);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(80, 80);
			this->add->TabIndex = 2;
			this->add->Text = L"+";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &MyForm::operatorClick);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn4->Location = System::Drawing::Point(13, 243);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(80, 80);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn5->Location = System::Drawing::Point(92, 243);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(80, 80);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn6->Location = System::Drawing::Point(171, 243);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(80, 80);
			this->btn6->TabIndex = 2;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->minus->Location = System::Drawing::Point(250, 243);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(80, 80);
			this->minus->TabIndex = 2;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::operatorClick);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn1->Location = System::Drawing::Point(13, 329);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(80, 80);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn2->Location = System::Drawing::Point(92, 329);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(80, 80);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn3->Location = System::Drawing::Point(171, 329);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(80, 80);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->multiply->Location = System::Drawing::Point(250, 329);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(80, 80);
			this->multiply->TabIndex = 2;
			this->multiply->Text = L"×";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::operatorClick);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->btn0->Location = System::Drawing::Point(13, 415);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(80, 80);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// decimal
			// 
			this->decimal->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->decimal->Location = System::Drawing::Point(92, 415);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(80, 80);
			this->decimal->TabIndex = 2;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = false;
			this->decimal->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->equal->Location = System::Drawing::Point(171, 415);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(80, 80);
			this->equal->TabIndex = 2;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->divide->Location = System::Drawing::Point(250, 415);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(80, 80);
			this->divide->TabIndex = 2;
			this->divide->Text = L"÷";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::operatorClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 504);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->add);
			this->Controls->Add(this->posneg);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->clear2);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Length > 0)
		{
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(txtDisplay->Text);

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
	}

	if (operators == "-")
	{
		result = firstDigit - secondDigit;
	}

	if (operators == "×")
	{
		result = firstDigit * secondDigit;
	}

	if (operators == "÷")
	{
		result = firstDigit / secondDigit;
	}

	txtDisplay->Text = System::Convert::ToString(result);

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}

	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	txtDisplay->Text = "0";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	txtDisplay->Text = "0";
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}

	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}

}
private: System::Void operatorClick(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);

	txtDisplay->Text = "";
	operators = NumbersOp->Text;

}
};
}
