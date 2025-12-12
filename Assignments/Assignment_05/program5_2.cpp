#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Check
{
public :
	int FindMax(int iNo1,int iNo2)
	{
		if(iNo1 > iNo2)
		{
			return iNo1;
		}
		else
		{
			return iNo2;
		}
	}
};

int main(void)
{
	int iValue1 = 0,iValue2 = 0,iRet = 0;
	Check cobj;

	cout<<"Enter two Numbers : "<<endl;
	cin>>iValue1>>iValue2;


	iRet = cobj.FindMax(iValue1,iValue2);

	cout<<"Maximum Number is : "<<iRet<<endl;
}
