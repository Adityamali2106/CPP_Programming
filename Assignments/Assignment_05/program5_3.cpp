#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Check
{
public :
	void CheckLeapYear(int iNo)
	{
		if((iNo% 4) == 0 ||(iNo % 400)  == 0 || (iNo % 100) == 0)
		{
			cout<<iNo<<" It is a leap year"<<endl;
		}
		else
		{
			cout<<iNo<<" It is Not a leap year"<<endl;
		}
	}
};

int main(void)
{
	int iValue = 0;
	Check cobj;

	cout<<"Enter Year : "<<endl;
	cin>>iValue;


	cobj.CheckLeapYear(iValue);

}
