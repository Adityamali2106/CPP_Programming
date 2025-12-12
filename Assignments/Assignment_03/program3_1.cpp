#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Operations
{
public:
	void PrintEven(int iNo)
	{
		int iCnt = 0;

		if(iNo <= 0)
		{
			return;
		}

		for(iCnt = 1; iCnt <= iNo;iCnt++)
		{
			cout<<iCnt * 2<<"\t";
		}
		cout<<endl;
	}
};

int main(void)
{
	int iValue = 0;
	Operations obj;

	cout<<"Enter number :"<<endl;
	cin>>iValue;

	obj.PrintEven(iValue);
	
	return 0;
}
