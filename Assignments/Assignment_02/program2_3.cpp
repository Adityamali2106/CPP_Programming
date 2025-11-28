#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Prantable
{
public:
	void Display(int iNo)
	{
		if(iNo < 10)
		{
			cout<<"Hello"<<endl;
		}
		else
		{
			cout<<"Demo"<<endl;
		}
	}
};

int main(void)
{
	int iValue = 0;
	Prantable pobj;

	cout<<"Enter Number"<<endl;
	cin>>iValue;

	pobj.Display(iValue);

	return 0;
}