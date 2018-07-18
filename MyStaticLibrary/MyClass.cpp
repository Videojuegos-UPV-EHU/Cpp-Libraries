#include "stdafx.h"
#include "MyClass.h"


MyClass::MyClass()
{
	m_myNumber = 22;
}


MyClass::~MyClass()
{
}

int MyClass::MyNumber()
{
	return m_myNumber;
}