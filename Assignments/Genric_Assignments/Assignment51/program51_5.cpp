#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Reverse
//  Input           : Array Genrictype, integer 
//  Output          : Nothing
//  Description     : Used to reverse the array
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T *arr, int iSize)
{
	int i = 0;
	int j = 0;
	T temp;

	temp = arr[0] - arr[0];
	for (i = 0, j = iSize-1; i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}	// End of Reverse

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int Arr[] = {12,20,30,10,30,40,10,40,10};
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		cout<<Arr[i]<<"\t";
	}	

	cout<<"\n";

	Reverse(Arr,9);

	for (i = 0; i < 9; i++)
	{
		cout<<Arr[i]<<"\t";
	}	
	cout<<"\n";
	return 0;
}	// End of main