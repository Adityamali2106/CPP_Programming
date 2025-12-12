#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Print
{
public :
	bool DisplayConvert(char ch)
	{
		if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'
		|| ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')								
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
};

int main(void)
{
	char chValue = '\0';
	bool bRet = false;
	Print pobj;

	cout<<"Enter Character : "<<endl;
	cin>>chValue;

	bRet = pobj.DisplayConvert(chValue);

	if (bRet == true)
	{
		cout<<"It is Vowel"<<endl;
	}
	else
	{
		cout<<"It is not Vowel"<<endl;
	}
	return 0;
}
