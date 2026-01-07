#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SecondMax
//  Input           : Array Genrictype, integer 
//  Output          : Genrictype (result)
//  Description     : Used to find Secound Maximum element in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMax(T *arr,int iSize)
{
	int iCnt = 0;
	T Max;
	T SecondMax;

	Max = arr[0];
	SecondMax = arr[0];

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (arr[iCnt] > Max)
        {
            SecondMax = Max;
            Max = arr[iCnt];
        }
        else if (arr[iCnt] > SecondMax && arr[iCnt] != Max)
        {
            SecondMax = arr[iCnt];
        }
  	}

	return SecondMax;
}	// End of SecondMax

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,55,30,60,58};
	int iRet = SecondMax(Arr,5);
	
	cout<<"Secound LArgest element is : "<<iRet<<"\n";

	return 0;
}	// End of main
