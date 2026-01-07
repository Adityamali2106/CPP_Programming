#include <iostream>
using std :: cout;
using std :: cin;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CopyArray
//  Input           : Array Genrictype,Array Genrictype, integer 
//  Output          : Nothing
//  Description     : Used to one array into secound array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
void CopyArray(T *arr,T *brr,int iSize)
{
	int iCnt = 0;

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		brr[iCnt] = arr[iCnt];	
	}
}	// End of CopyArray

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,40,50};
	int Brr[5];
	int i = 0;
	CopyArray(Arr,Brr,5);
	
	cout<<"Copid Array is : \t";
	for (i = 0; i < 5; ++i)
	{
		cout<<Brr[i]<<"\t";
	}

	cout<<"\n";

	return 0;
}	// End of main
