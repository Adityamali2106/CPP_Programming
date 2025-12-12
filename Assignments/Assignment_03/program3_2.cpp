#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Print
{
public :
	void DisplayFactor(int iNo)
	{
		int iCnt = 0;

		if(iNo <= 0)
		{
			return;
		}

		for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
		{
			if ((iNo%iCnt) == 0)
			{
				cout<<iCnt<<"\t";
			}
		}
		cout<<endl;
	}
};

int main(void)
{
	int iValue = 0;
	Print pobj;

	cout<<"Enter number : "<<endl;
	cin>>iValue;

	pobj.DisplayFactor(iValue);

	return 0;
}
