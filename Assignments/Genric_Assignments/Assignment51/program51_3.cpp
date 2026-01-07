#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SearchFirst
//  Input           : Array Genrictype, integer, Genrictype
//  Output          : Integer
//  Description     : Used to Search First occrence of element in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
int SearchFirst(T *arr, int iSize,T no)
{
	int iCnt = 0;
	int iCount = 0;

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (arr[iCnt] == no)
		{
			iCount = iCnt;
			break;
		}
	}
	
	return iCount;
}	// End of SearchFirst

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,10,30,40,10,40,10};
	int iRet = SearchFirst(Arr,9,10);
	if (iRet != 0)
	{
		cout<<"First Occrence is :"<<iRet<<"\n";
	}
	else
	{
		cout<<"Given data Not found \n";
	}

	return 0;
}	// End of main
