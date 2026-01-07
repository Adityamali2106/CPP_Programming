#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Swap
//  Input           : two vlaues of any data type 
//  Output          : Nothing
//  Description     : Used to swap two values through function
//  Author          : Aditya Vijay Mali
//  Date            : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
void Swap (T *no1, T *no2)
{
	T temp = *no1;
	*no1 = *no2;
	*no2 = temp;
}	// End of swap

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int a = 10, b= 20;
	cout<<"Befor swap Values are :  a = "<< a <<" b = "<<b<<"\n";
	Swap(&a, &b);
	cout<<"After Swap Values are :  a = "<< a <<" b = "<<b<<"\n";

	float x = 3.5f, y = 7.8f;
	cout<<"Before Swap Values are : x = "<< x <<" y = "<<y<<"\n";
	Swap(&x, &y);
	cout<<"After Swap Values are :  x = "<< x <<" y = "<<y<<"\n";

	return 0;
}	// End of main
