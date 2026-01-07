#include <iostream>
using std :: cout;
using std :: cin;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Search
//  Input           : Array Genrictype, integer,Genrictype 
//  Output          : Boolen
//  Description     : Used to Check wether the element is present in array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////
template <class T>
bool Search(T *arr,int iSize,T value)
{
	int iCnt = 0;
	bool flag = false;

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (arr[iCnt] == value)
		{
			flag = true;
		}	
	}

	return flag;
}	// End of Search

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,60,50};
	int i = 0;
	bool bRet = Search(Arr,5,50);
	
	if (bRet == true)
	{
		cout<<"Element is found in Array\n";
	}
	else
	{
		cout<<"Element is Not found in Array\n";		
	}

	return 0;
}	 // End of main
