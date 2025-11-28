#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Pattern
{
public:
	
	void Display(int iNo, int iFrequency)
	{
		int iCnt = 0;

		if(iFrequency < 0)
		{
			iFrequency = -iFrequency;
		}

		for(iCnt = 1; iCnt <= iFrequency; iCnt++)
		{
			cout<<iNo<<"\t";
		}
		cout<<endl;
	}
};

int main(void)
{
	int iValue1 = 0,iValue2 = 0;
	Pattern pobj;

	cout<<"Enter a Number"<<endl;
	cin>>iValue1;

	cout <<"Enyter a Frequency"<<endl;
	cin>>iValue2;

	pobj.Display(iValue1,iValue2);
}