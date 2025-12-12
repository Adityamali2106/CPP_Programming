#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;


class Check
{
public:
	int Multiplay(int iNo1,int iNo2, int iNo3)
	{
		if ((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
		{
			return 0;
		}
		else
		{
			return ((iNo1 * iNo2) * iNo3);
		}
	}	
};

int main()
{
	int iValue1 = 0,iValue2 = 0, iValue3 = 0;
	int iRet = 0;
	Check cobj;

	cout<<"Enter Three numbers : "<<endl;
	cin>>iValue1>>iValue2>>iValue3;

	iRet = cobj.Multiplay(iValue1,iValue2, iValue3);

	cout<<"Multiplecation is : "<<iRet<<endl;
	
	return 0;
}