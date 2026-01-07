#include <iostream>
using std :: cout;
using std :: cin;
///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SecondMin
//  Input           : Array Genrictype, integer 
//  Output          : Genrictype (result)
//  Description     : Used to find Maximum element in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T *arr, int iSize)
{
	int iCnt = 0;
	T Max;

	Max = arr[0] - arr[0];

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (Max < arr[iCnt])
		{
			Max = arr[iCnt];
		}	
	}
	
	return Max;
}	// End of Max

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,40,50};
	float Brr[] = {10.6,3.7,9.8,8.7};
	int iRet = Max(Arr,5);
	
	cout<<"Maximum elements is :"<<iRet<<"\n";

	float fRet = Max(Brr,4);	
	cout<<"Maximum elements is :"<<fRet<<"\n";

	return 0;
}	// End of main
