#include <iostream>
using std :: cout;
using std :: cin;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckSorted
//  Input           : Array of Genrictype, integer 
//  Output          : Boolen
//  Description     : Used to the array is sorted or not
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
bool CheckSorted(T *arr,int iSize)
{
	int iCnt = 0;

	for (iCnt = 0; iCnt < iSize-1; iCnt++)
	{
		if (arr[iCnt]>arr[iCnt+1])
		{
			break;
		}	
	}

	return(iCnt == iSize-1);
}	// End of CheckSorted

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {10,20,30,60,50};
	int i = 0;
	bool bRet = CheckSorted(Arr,5);
	
	if (bRet == true)
	{
		cout<<"Array is Sorted\n";
	}
	else
	{
		cout<<"Array is Not Sorted\n";		
	}

	return 0;
}	// End of main
