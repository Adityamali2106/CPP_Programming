#include<iostream>
using std::cout;
using std::endl;

class Print
{
public :
	void Display()
	{
		int iCnt = 0;

		for (iCnt = 5; iCnt >= 1; iCnt--)
		{
			cout <<iCnt<<endl;
		}
	}
};

int main()
{
	Print pobj;

	pobj.Display();

	return 0;
}