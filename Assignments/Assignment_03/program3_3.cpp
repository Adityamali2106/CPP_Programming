#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Print
{
public :
	void DisplayEvenFactor(int iNo)
	{
		int iCnt = 0;

		if(iNo <= 0)
		{
			return;
		}

		for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
		{
			if ((iNo % iCnt) == 0 && (iCnt % 2) == 0)
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

	pobj.DisplayEvenFactor(iValue);

	return 0;
}
