#include <iostream>
using std :: cout;

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : MaxUseArray
//  Input           : Genrictype,Genrictype,Genrictype 
//  Output          : Genrictype (result)
//  Description     : Used to find Maximum from three numbers
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T MaxUseArray(T No1, T No2,T No3,T No4)
{
	T Arr[4];
	Arr[0] = No1;
	Arr[1] = No2;
	Arr[2] = No3;
	Arr[3] = No4;
	int iCnt = 0;
	T Max = Arr[0] - Arr[0];

	for (iCnt = 0; iCnt < 4; iCnt++)
	{
		if (Max < Arr[iCnt])
		{
			Max = Arr[iCnt];
		}
	}

	return Max;
}	// End of MaxUseArray

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Max
//  Input           : Genrictype,Genrictype,Genrictype 
//  Output          : Genrictype (result)
//  Description     : Used to find Maximum from three numbers
//  Author          : Aditya Vijay Mali
//  Date            : 06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T No1, T No2,T No3, T No4)
{
	T Max = No1;

	if (Max < No1)
	{
		Max = No1;
	}
	else if (Max < No2)
	{
		Max = No2;
	}
	else if (Max < No3)
	{
		Max = No3;
	}
	else if (Max < No4)
	{
		Max = No4;
	}

	return Max;
}	// End of Max

///////////////////////////////////////////////////////////////////////////////////
//
//		Entry point function of application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iRet = MaxUseArray(50,20,30,62);
	cout<<"Maximum number is : \t"<<iRet<<"\n";
	float fRet = MaxUseArray(10.0f,20.0f,5.0f,15.5f);
	cout<<"Maximum float is : \t"<<fRet<<"\n";

	iRet = Max(50,20,30,62);
	cout<<"Maximum number is : \t"<<iRet<<"\n";
	fRet = Max(10.0f,20.0f,5.0f,15.5f);
	cout<<"Maximum float is : \t"<<fRet<<"\n";

	return 0;
}	// End of main
