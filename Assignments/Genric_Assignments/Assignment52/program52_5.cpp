#include <iostream>
using std :: cout;
using std :: cin;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SecondMin
//  Input           : Array Genrictype, integer 
//  Output          : Genrictype (result)
//  Description     : Used to find Minimum element in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T Min(T *arr, int iSize)
{
	int iCnt = 0;
	T Min;

	for (iCnt = 0,Min = arr[1]; iCnt < iSize; iCnt++)
	{
		if (Min > arr[iCnt])
		{
			Min = arr[iCnt];
		}	
	}
	
	return Min;
}	// End of Min

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,40,50};
	float Brr[] = {10.6,3.7,9.8,8.7};
	int iRet = Min(Arr,5);
	
	cout<<"Minimum elements is :"<<iRet<<"\n";

	float fRet = Min(Brr,4);	
	cout<<"Minimum elements is :"<<fRet<<"\n";

	return 0;
}	// End of main