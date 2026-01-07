#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Frequency
//  Input           : Array Genrictype, integer,Genrictype 
//  Output          : Genrictype (result)
//  Description     : Used to calculate the Frequency of element in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
int Frequency(T *arr, int iSize,T no)
{
	int iCnt = 0;
	int iCount = 0;

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (arr[iCnt] == no)
		{
			iCount++;
		}
	}
	return iCount;
}	// End of Frequency

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,10,30,40,10,40,10};
	int iRet = Frequency(Arr,9,10);
	cout<<"Frequency is :"<<iRet<<"\n";
	return 0;
}	// End of main