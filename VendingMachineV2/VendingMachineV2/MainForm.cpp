#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace VendingMachineV2;

void MainForm::IncrementButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	counterCount = 0;
	counter->Text = counterCount.ToString();
}

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VendingMachineV2::MainForm form;
	Application::Run(% form);
}