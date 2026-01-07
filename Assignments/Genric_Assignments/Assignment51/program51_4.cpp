#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SearchLast
//  Input           : Array Genrictype, integer, Genrictype 
//  Output          : Integer
//  Description     : Used to Search Last occrence of element in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////
template <class T>
int SearchLast(T *arr, int iSize,T no)
{
	int iCnt = 0;
	int iCount = 0;

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (arr[iCnt] == no)
		{
			iCount = iCnt;
		}
	}
	
	return iCount;
}	// End of SearchLast

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,10,30,40,10,40,10};
	int iRet = SearchLast(Arr,9,40);
	if (iRet != 0)
	{
		cout<<"SearchLast is :"<<iRet<<"\n";
	}
	else
	{
		cout<<"Given data Not found \n";
	}
	
	return 0;
}	// End of main
