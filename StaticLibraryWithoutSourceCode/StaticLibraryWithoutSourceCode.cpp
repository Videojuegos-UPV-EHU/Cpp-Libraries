// StaticLibraryWithoutSourceCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#include "../3rd-party/tinyxml2/include/tinyxml2.h"

#ifdef _WIN64
	#ifdef _DEBUG
		#pragma comment(lib, "../3rd-party/tinyxml2/lib/tinyxml2-x64d.lib")
	#else
		#pragma comment(lib, "../3rd-party/tinyxml2/lib/tinyxml2-x64.lib")
	#endif
#else
	#ifdef _DEBUG
		#pragma comment(lib, "../3rd-party/tinyxml2/lib/tinyxml2-x86d.lib")
	#else
		#pragma comment(lib, "../3rd-party/tinyxml2/lib/tinyxml2-x86.lib")
	#endif
#endif

int main()
{
	tinyxml2::XMLDocument document;
	
	document.LoadFile("example.xml");

	if (document.Error())
		cout << "Could not load the file";
	else
		cout << "File loaded";

    return 0;
}

