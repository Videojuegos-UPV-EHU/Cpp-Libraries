// StaticLibrarySourceCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../MyStaticLibrary/MyClass.h"
#include <iostream>
using namespace std;

int main()
{
	MyClass object;

	int result = object.MyNumber();

	cout << result;
    return 0;
}

