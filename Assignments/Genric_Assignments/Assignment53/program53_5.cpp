#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Replace
//  Input           : Array Genrictype, integer, Genrictype, Genrictype 
//  Output          : Nothing
//  Description     : Used to find old vlaue and replace it with new value
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
	int iCnt = 0;

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
  	}
}	// End of Replace

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iCnt = 0;
	int Arr[] = {10,55,11,60,58};

	cout<<"\n";
	cout<<"Before call Array is : \t";

	for (iCnt = 0; iCnt < 5; iCnt++)
	{
		cout<<Arr[iCnt]<<"\t";
	}

	cout<<"\n";

	Replace(Arr, 5, 10, 99);

	cout<<"After call Array is : \t";
	for (iCnt = 0; iCnt < 5; iCnt++)
	{
		cout<<Arr[iCnt]<<"\t";
	}

	cout<<"\n";
	char Brr[] = {'a', 'b', 'a', 'c'};

	cout<<"Before call Array is : \t";
	for (iCnt = 0; iCnt < 5; iCnt++)
	{
		cout<<Brr[iCnt]<<"\t";
	}
	cout<<"\n";
	Replace(Brr, 4, 'a', 'z');	

	cout<<"After call Array is : \t";
	for (iCnt = 0; iCnt < 5; iCnt++)
	{
		cout<<Brr[iCnt]<<"\t";
	}	

	return 0;
}	// End of main
