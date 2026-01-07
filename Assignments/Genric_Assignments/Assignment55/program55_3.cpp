#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Div
//  Input           : Genrictype,Genrictype
//  Output          : Genrictype (result)
//  Description     : Used to Calculate Division
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T Div(T no1, T no2)
{
	if (no2 == 0)
	{
		cout<<"Cannot Devide by Zero\n";
		return no1-no1;
	}

	return no1/no2;
}

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main(int argc, char const *argv[])
{
	int iRet = Div(15,5);
	cout<<"Division of Integer is : "<<iRet<<"\n";
	float fRet = Div(15.2f,2.3f);
	cout<<"Division of float is : "<<fRet<<"\n";
	return 0;
}

