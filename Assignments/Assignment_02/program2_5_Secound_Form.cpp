#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Pattern
{
public:
	
	bool CheckEven(int iNo)
	{
		return ((iNo % 2) == 0);
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