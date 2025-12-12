#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;


class Check
{
public:
	float Percentage(int iNo1,int iNo2)
	{
		float fAns = 0.0f;

		if (iNo1 == 0 || iNo1 == 0)
		{
			return fAns;
		}

		fAns = ((float) iNo2 / iNo1) *100;


		return fAns;
	}
};
int main()
{
	int iValue1 = 0,iValue2 = 0;
	float fRet = 0.0f;
	Check cobj;

	cout<<"Please enter total marks : "<<endl;
	cin>>iValue1;

	cout<<"Please enter obtained marks :"<<endl;
	cin>>iValue2;

	fRet = cobj.Percentage(iValue1,iValue2);

	cout<<"obtained Percentage is : "<<fRet;
	return 0;
}