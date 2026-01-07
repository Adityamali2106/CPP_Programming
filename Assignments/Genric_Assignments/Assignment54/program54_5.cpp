#include <iostream>
using std :: cout;
using std :: cin;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SecondMin
//  Input           : Array, integer 
//  Output          : AnyDatatype (result)
//  Description     : Used to find Secound Minimum element in array
//  Author          : Aditya Vijay Mali
//  Date            : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMin(T *arr,int iSize)
{
	int iCnt = 0;
	T Min;
	T SecondMin;

	Min = arr[0];
	SecondMin = arr[1];

	if (SecondMin < Min)
	{
		SecondMin = arr[0];
		Min = arr[1];
	}

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (arr[iCnt] < Min)
        {
            SecondMin = Min;
            Min = arr[iCnt];
        }
        else if (arr[iCnt] < SecondMin && arr[iCnt] != Min)
        {
            SecondMin = arr[iCnt];
        }
  	}

	return SecondMin;
}

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {65,55,11,60,58};
	int iRet = SecondMin(Arr,5);
	
	cout<<"Secound LArgest element is : "<<iRet<<"\n";

	return 0;
}