#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Pattern
{
public:
	void Display(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		while(iNo > 0)
		{
			cout<<"*\t";
			iNo--;
		}
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