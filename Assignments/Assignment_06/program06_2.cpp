#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;


class Check
{
public:
	bool ChkGreater(int iNo)
	{
		if (iNo > 100)
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

	cout<<"Enter number : "<<endl;
	cin>>iValue;

	bRet = cobj.ChkGreater(iValue);

	if (bRet == true)
	{
		cout<<"Greater "<<endl;
	}
	else
	{
		cout<<"Smaller"<<endl;
	}

	return 0;
}