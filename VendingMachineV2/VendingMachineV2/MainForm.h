#pragma once

namespace VendingMachineV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ IncrementButton;
	private: System::Windows::Forms::Label^ counter;
	private: int counterCount = 0;

	protected:

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
			this->IncrementButton = (gcnew System::Windows::Forms::Button());
			this->counter = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// IncrementButton
			// 
			this->IncrementButton->Location = System::Drawing::Point(354, 193);
			this->IncrementButton->Name = L"IncrementButton";
			this->IncrementButton->Size = System::Drawing::Size(123, 58);
			this->IncrementButton->TabIndex = 0;
			this->IncrementButton->Text = L"Click to Add!";
			this->IncrementButton->UseVisualStyleBackColor = true;
			this->IncrementButton->Click += gcnew System::EventHandler(this, &MainForm::IncrementButton_Click);
			// 
			// counter
			// 
			this->counter->AutoSize = true;
			this->counter->Location = System::Drawing::Point(384, 170);
			this->counter->Name = L"counter";
			this->counter->Size = System::Drawing::Size(18, 20);
			this->counter->TabIndex = 1;
			this->counter->Text = L"0";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 530);
			this->Controls->Add(this->counter);
			this->Controls->Add(this->IncrementButton);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IncrementButton_Click(System::Object^ sender, System::EventArgs^ e) {
		counterCount++;
		counter->Text = counterCount.ToString();
	}
	};
}
