//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;


class PatternPrinting
{
public:
	//////////////////////////////////////////////////////////////////////////
	//
	//  Function Name : Display
	//  Discription :   It is used to print number line of given number
	//  Input :         Integer
	//  Output :        void
	//  Author :        Aditya Mali
	//  Date :          12/12/2025
	//
	//////////////////////////////////////////////////////////////////////////

	void Display(int iNo)
	{
		int iCnt = 0;
		if (iNo < 0)
		{
			iNo = -iNo;
		}

		for (iCnt = -iNo; iCnt <= iNo; iCnt++)
		{
			cout<<iCnt<<"\t";
		}
		cout<<endl;
	}	// End of Display

		// O(N)
};

//////////////////////////////////////////////////////////////////////////
//
//	Entery point Function for the application
//
//////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	PatternPrinting pobj;

	cout<<"Enter number : "<<endl;
	cin>>iValue;

	pobj.Display(iValue);
	
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////
//
//	Input : 4				
//  Output: 
//			-4      -3      -2      -1      0       1       2       3       4  
//  Input : 5				
//  Output: 
//  -5      -4      -3      -2      -1      0       1       2       3       4       5
//	Input : 0 				Output: 0
//
//////////////////////////////////////////////////////////////////////////////////////
