#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;


class Check
{
public:
	bool ChkEqual(int iNo1,int iNo2)
	{
		if (iNo1 == iNo2)
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
	int iValue1 = 0,iValue2 = 0;
	bool bRet = false;
	Check cobj;

	cout<<"Enter Two numbers : "<<endl;
	cin>>iValue1>>iValue2;

	bRet = cobj.ChkEqual(iValue1,iValue2);

	if (bRet == true)
	{
		cout<<"Equal"<<endl;
	}
	else
	{
		cout<<"Not Equal"<<endl;
	}

	return 0;
}