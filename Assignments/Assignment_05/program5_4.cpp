#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Check
{
public :
	void CheckNumberType(int iNo)
	{
		if(iNo > 0)
		{
			cout<<iNo<<" It is a positive number"<<endl;
		}
		else if(iNo == 0)
		{
			cout<<iNo<<" It is a zero"<<endl;
		} 
		else
		{
			cout<<iNo<<" It is a negative number"<<endl;
		}
	}
};

int main(void)
{
	int iValue = 0;
	Check cobj;

	cout<<"Enter Number : "<<endl;
	cin>>iValue;


	cobj.CheckNumberType(iValue);

}
