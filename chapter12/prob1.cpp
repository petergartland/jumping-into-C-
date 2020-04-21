#include <iostream>
#include <string>

using namespace std;

void getName(string *first, string *last)
{
	cout<<"Enter your first name\n";
	cin>>*first;
	if (last == NULL)
	{
		cout<<"Enter your last name\n";
		cin>>*last;
	}
}

int main()
{
	string f;
	string l;
	string *first = &f;
	string *last = NULL;
	getName(first, last);
	cout<<f << " " <<l<<endl;
}
