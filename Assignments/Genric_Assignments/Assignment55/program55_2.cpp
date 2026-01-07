#include <iostream>
using std::cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Sub
//  Input           : two vlaues of any data type 
//  Output          : AnyDatatype(result)
//  Description     : Used to calculate subtraction of two numbers
//  Author          : Aditya Vijay Mali
//  Date            : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////


template <class T>
T Sub(T no1, T no2)
{
	T sum;
	sum = no1 - no2;
	return sum;
}

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iRet = 0;
	iRet = Sub (10, 20);
	cout<<"Subtraction of two integer is :"<<iRet<<"\n";
	
	float fRet = 0.0f;
	fRet = Sub (10.5f, 20.3f);
	cout<<"Subtraction of two float is :"<<fRet<<"\n";
	
	return 0;
}
