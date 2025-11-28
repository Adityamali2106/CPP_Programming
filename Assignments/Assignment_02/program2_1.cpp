#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Pattern
{
public :
	void Display(int iNo)
	{
		int iCnt = 0;

		for(iCnt = 1; iCnt <= iNo;iCnt++)
		{
			cout<<"*\t";
		}
		cout<<endl;
	}	
};

int main(void)
{
	int iValue = 0;
	Pattern pobj;

	cout<<"Enter Number"<<endl;
	cin>>iValue;

	pobj.Display(iValue);

	return 0;
}