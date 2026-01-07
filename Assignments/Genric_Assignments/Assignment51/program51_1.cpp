#include <iostream>
using std :: cout;
using std :: cin;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Genrictype, integer 
//  Output          : Nothing
//  Description     : Used to Display the Genrictype value for N times
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
void Display(T value, int iSize)
{
	int iCnt = 0;

	for (iCnt = 1; iCnt <= iSize; iCnt++)
	{
		cout<<value<<"\t";
	}
	cout<<"\n";
}	//End of Display

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	Display('M',7);
	Display(11,3);
	Display(3.7,6);

	return 0;
}	// End of main