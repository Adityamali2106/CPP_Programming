#include <iostream>
using std :: cout;
///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SumOdd
//  Input           : Array Genrictype, integer 
//  Output          : Genrictype (result)
//  Description     : Used to Calculate Addition odd element in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T SumOdd(T *arr,int iSize)
{
	int iCnt = 0;
	T Sum;

	Sum = arr[0] - arr[0];
	for (iCnt = 1; iCnt < iSize; iCnt++)
	{
		if ((arr[iCnt] % 2) != 0)
		{
			Sum = Sum + arr[iCnt];
		}
	}

	return Sum;
}	// End of SumOdd

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,35,60,56};
	int i = 0;
	int iRet = SumOdd(Arr,5);

	cout<<"Sum of all even Elements in Array is "<<iRet<<"\n";		

	return 0;
}	// End of main
