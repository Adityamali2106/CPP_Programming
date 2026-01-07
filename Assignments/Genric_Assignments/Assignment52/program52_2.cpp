#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Max
//  Input           : Genrictype,Genrictype,Genrictype 
//  Output          : Genrictype (result)
//  Description     : Used to find Maximum from three numbers
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T No1, T No2,T No3)
{
	if (No1 > No2)
	{
		if (No1 > No3)
		{
			return No1;
		}
		else if (No2 > No3)
		{
			return No2;
		}
	}
	else if (No2 > No1)
	{
		if (No2 > No3)
		{
			return No2;
		}
		else if (No3 > No1)
		{
			return No3;
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iRet = Max(50,20,30);
	cout<<"Maximum number is : \t"<<iRet<<"\n";
	float fRet = Max(10.0f,20.0f,5.0f);
	cout<<"Maximum float is : \t"<<fRet<<"\n";
	return 0;
}	// End of main
