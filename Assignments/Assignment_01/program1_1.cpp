#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Math
{
	int iValue1;
	int iValue2;
public :

	Math()
	{
		iValue1 = 0;
		iValue2 = 0;
	}

	void Set(int iNo1, int iNo2)
	{
		iValue1 = iNo1;
		iValue2 = iNo2;
	}

	int Divide()
	{
		int iAns = 0
		if (iValue2 == 0)
		{
			return -1;
		}

		iAns = iValue1 / iValue2;

		return iAns;
	}
};

int main()
{
	int iValue1 = 0,iValue2 = 0, iRet = 0;

	Math mobj;

	cout<<"Enter number's"<<endl;
	cin>>iValue1>>iValue2;
	
	mobj.Set(iValue1,iValue2);

	iRet = mobj.Divide();

	cout <<"Division is "<< iRet << endl;
	return 0;
}