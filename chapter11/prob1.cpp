#include <iostream>
#include <string>

using namespace std;

struct Info
{
	string name;
	string address;
	string phone;
};

Info makeInfo()
{
	Info person;
	cout<<"enter name\n";
	getline(cin,person.name);
	cout<<"enter address\n";
	getline(cin,person.address);
	cout<<"enter phone\n";
	getline(cin,person.phone);
	return person;
}

void printInfo(Info persons[])
{
	int i = 0;
	while(persons[i].name != " " && i <100)
	{
		cout<<persons[i].name<<endl;
		cout<<persons[i].address<<endl;
		cout<<persons[i].phone<<endl<<endl;
		i++;
	}
}

int main()
{
	Info persons[100];
	for (int i = 0; i < 100; i++)
	{
		persons[i].name = " ";
	}
	string action;
	int i = 0;
	while (i < 100)
		{
			cout<<"enter 'new' to make a new entery or 'print' so see list\n";
			getline(cin,action);
			if (action == "new")
			{
				persons[i] = makeInfo();
				i++;
			}
			else if (action == "print")
			{
				printInfo(persons);
			}
			else
				cout<<"invalide request\n";
		}
}
