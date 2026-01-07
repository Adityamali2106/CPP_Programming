#include <iostream>
using std :: cout;
using std :: cin;
///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SumEven
//  Input           : Array Genrictype, integer 
//  Output          : Genrictype (result)
//  Description     : Used to Calculate Addition Even element in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////


template <class T>
T SumEven(T *arr,int iSize)
{
	int iCnt = 0;
	T Sum;

	Sum = arr[0] - arr[0];
	for (iCnt = 1; iCnt < iSize; iCnt++)
	{
		if ((arr[iCnt] % 2) == 0)
		{
			Sum = Sum + arr[iCnt];
		}
	}

	return Sum;
}	// End of SumEven

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,60,50};
	int i = 0;
	int iRet = SumEven(Arr,5);

	cout<<"Sum of all even Elements in Array is "<<iRet<<"\n";		

	return 0;
}	// End of main
