#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Pattern
{
public:
	
	bool CheckEven(int iNo)
	{
		int iCnt = 0;

		if((iNo % 2) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
};

int main(void)
{
	int iValue = 0;
	bool bRet = false;
	Pattern pobj;

	cout<<"Enter a Number"<<endl;
	cin>>iValue;

	bRet = pobj.CheckEven(iValue);

	if (bRet == true)
	{
		cout<<iValue<<" is a Even Number"<<endl;
	}
	else
	{
		cout<<iValue<<" is a Odd Number"<<endl;
	}
}