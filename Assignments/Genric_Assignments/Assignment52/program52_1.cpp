#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Multiply
//  Input           : Genrictype,Genrictype 
//  Output          : Genrictype (result)
//  Description     : Used to calculate multiplecation of two
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T Multiply(T No1, T No2)
{
	int ans;
	ans = No1 * No2;
	return ans;
}	// End of Multiply

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iRet = Multiply(10,20);
	cout<<"Multiplecation is : \t"<<iRet<<"\n";
	float fRet = Multiply(10.0f,20.0f);
	cout<<"Multiplecation is : \t"<<fRet<<"\n";
	return 0;
}	// End of main
