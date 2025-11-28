#include <iostream>
using std::cout;
using std::cin;

class Pattren
{
public: 
	void Accept(int iNo)
	{
		int iCnt = 0;

		for(iCnt = 1; iCnt <= iNo;iCnt++)
		{
			cout<<"* \t";
		}
	}
};

int main(void)
{

	int iValue = 0;
	Pattren pobj;

	cout<<"Entyer Number \n";
	cin>>iValue;

	pobj.Accept(iValue);
	return 0;
}