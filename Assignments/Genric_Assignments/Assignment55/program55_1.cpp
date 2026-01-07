#include <iostream>
using std::cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Add
//  Input           : two vlaues of any data type 
//  Output          : AnyDatatype(result)
//  Description     : Used to calculate addition of two numbers
//  Author          : Aditya Vijay Mali
//  Date            : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T Add(T no1, T no2)
{
	T sum;
	sum = no1 + no2;
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
	iRet = Add (10, 20);
	cout<<"Addition of two integer is :"<<iRet<<"\n";
	
	float fRet = 0.0f;
	fRet = Add (10.5f, 20.3f);
	cout<<"Addition of two float is :"<<fRet<<"\n";
	
	return 0;
}
