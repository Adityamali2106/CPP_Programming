#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Check
{
public :
	void CheckEvenOdd(int iNo)
	{
		if((iNo % 2) == 0)
		{
			cout<<iNo<<" is a Even Number";
		}
		else
		{
			cout<<iNo<<" is a odd Number";
		}
	}
};

int main(void)
{
	int iValue = 0;
	Check cobj;

	cout<<"Enter Number : "<<endl;
	cin>>iValue;


	cobj.CheckEvenOdd(iValue);	
}
