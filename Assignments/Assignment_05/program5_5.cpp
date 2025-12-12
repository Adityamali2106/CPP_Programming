#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Check
{
public :
	int FindLargest(int iNo1,int iNo2,int iNo3)
	{
		if(iNo1 > iNo2)
		{
			return iNo1;
		}
		else if(iNo2 > iNo3)
		{
			return iNo2;
		} 
		else
		{
			return iNo3;
		}
	}
};

int main(void)
{
	int iValue1 = 0, iValue2 = 0, iValue3 = 0,iRet = 0;
	Check cobj;

	cout<<"Enter Three Number : "<<endl;
	cin>>iValue1>>iValue2>>iValue3;

	iRet = cobj.FindLargest(iValue1,iValue2,iValue3);

	cout<<"Largest Number is "<<iRet<<endl;

}
