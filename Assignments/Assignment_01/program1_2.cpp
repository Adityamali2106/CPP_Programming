#include<iostream>
using std::cout;
using std::endl;

class Print
{
public :
	void Display()
	{
		int iCnt = 0;

		for (iCnt = 1; iCnt <= 5; iCnt++)
		{
			cout << "Marvellous"<<endl;
		}
	}
};

int main()
{
	Print pobj;

	pobj.Display();

	return 0;
}