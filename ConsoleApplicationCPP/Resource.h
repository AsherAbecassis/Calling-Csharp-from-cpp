//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by app.rc
using namespace System;
using namespace ClassCsharp;

namespace TestCPlusPlus {

    public ref class ManagedCPlusPlus
    {
    public:
        void PrintText()
        {
            Class1^ c = gcnew Class1();
         
            c->PrintText();
        }
        int Add(int a, int b)
        {
            Class1^ c = gcnew Class1();
            int result = c->Add(a, b);
            return result;
        }
    };
}