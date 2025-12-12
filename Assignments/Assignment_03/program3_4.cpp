#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Print
{
public :
	void DisplayConvert(char ch)
	{
		if (ch >= 97 && ch <= 122)								
		{
			ch =(ch - 32);
			cout<<ch<<endl;
		}
		else if (ch >= 65 && ch <= 90)
		{
			ch = (ch + 32);
			cout<<ch<<endl;
		}
	}
};

int main(void)
{
	char chValue = '\0';
	Print pobj;

	cout<<"Enter Character : "<<endl;
	cin>>chValue;

	pobj.DisplayConvert(chValue);

	return 0;
}
