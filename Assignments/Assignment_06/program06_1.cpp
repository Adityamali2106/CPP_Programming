#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;


class Priantable
{
public:
	void Display(char Arr[])
	{
		cout<<"Your name is : "<<Arr<<endl;
	}	
};

int main()
{
	char Name[30] = {'\0'};
	Priantable pobj;

	cout<<"Please Enter full name"<<endl;
	cin.get(Name,30);

	pobj.Display(Name);

	return 0;
}