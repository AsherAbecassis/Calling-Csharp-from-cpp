#include "pch.h"
#include "Resource.h"
#include <iostream>
using namespace std;

using namespace System;




int main()
{
    TestCPlusPlus::ManagedCPlusPlus p;
    p.PrintText();

    int result = p.Add(2, 2);
    cout << result << endl;

    return 0;
}
