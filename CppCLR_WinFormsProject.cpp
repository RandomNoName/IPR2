#include"pch.h"
#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include <locale.h>
#include <iomanip>

using namespace System;
using namespace System::Runtime::InteropServices;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}