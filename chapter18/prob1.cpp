#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, string> phone_book;
	std::cout<<"Command: Add entry, change entry, delete entery, list (enter 0 to exit)"<<endl;
	string comand;
	cin>>comand;
	string name;
	string number;
	while (comand != "0")
	{
		if (comand == "add")
		{
			cout<<"enter the name\n";
			getline(cin,name);
			getline(cin,name);
			cout<<"Enter the number of the new entery\n";
			getline(cin,number);
			phone_book[name]=number;
		} 
		else if(comand == "change")
		{
			cout<<"enter the name of the number you would like to change\n";
			getline(cin,name);
			getline(cin, name);
			cout<<"enter the new phone number\n";
			getline(cin, number);
			phone_book[name]=number;
		}
		else if(comand == "delete")
		{
			cout<<"enter the name to be deleted\n";
			getline(cin,name);
			getline(cin,name);
			phone_book.erase(name);
		}
		else if (comand == "list")
		{
			
			for (map<string,string>::iterator itr = phone_book.begin(); itr != phone_book.end(); itr++)
				cout<<itr->first<<"-->"<<itr->second<<endl;
		}
		else
			cout<<"comand not recognized"<<endl;
		std::cout<<"Command: Add entry, change entry, delete entery, list (enter 0 to exit)"<<endl;
		cin>>comand;
	}
}
