#include <iostream>
using std :: cout;
using std :: cin;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : AddN
//  Input           : Array Genrictype, integer 
//  Output          : Genrictype (result)
//  Description     : Used to Addition of all elements in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T AddN(T *arr, int iSize)
{
	int iCnt = 0;
	T sum;

	sum = arr[0] - arr[0];

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		sum = sum + arr[iCnt];	
	}
	
	return sum;
}	// End of AddN

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,40,50};
	float Brr[] = {10.0,3.7,9.8,8.7};
	int iRet = AddN(Arr,5);
	
	cout<<"Addition of N elements is :"<<iRet<<"\n";

	float fRet = AddN(Brr,4);	
	cout<<"Addition of N elements is :"<<fRet<<"\n";

	return 0;
}	// End of main
