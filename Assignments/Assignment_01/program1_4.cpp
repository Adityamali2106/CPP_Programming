#include <iostream>
using std::cout;
using std::endl;
using std::cin;


class Check
{
public:
	bool IsDivisible(int iNo)
	{
		if ((iNo % 5) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	int iValue = 0;
	bool bRet = false;
	Check cobj;

	cout<< "Enter Number" << endl;
	cin>>iValue;

	bRet = cobj.IsDivisible(iValue);

	if (bRet == true)
	{
		cout<<iValue<<" Is Divisible by 5"<< endl;
	}
	else
	{
		cout<<iValue<<" Is Not Divisible by 5"<< endl;
	}

	return 0;
}