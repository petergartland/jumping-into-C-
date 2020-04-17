#include <iostream>
#include <string>
using namespace std;

int main()
{
/*
	int x;
	cout<<"enter a number\n";
	cin>>x;
	if (x>0)
	{
		cout << "you entered a postive number\n";
	} 
	else if (x==0)
	{
		cout<<"you entered 0\n";
	}
	else
	{
		cout<<"you entered a negative number\n";
	}
*/	
	
	
	string password;
	string username;
	cout<<"enter your username\n";
	getline(cin,username);
	cout<<"enter your password\n";
	getline(cin,password);
	if (username == "root" && password == "mypass")
	{
		cout << "access granted\n";
	} 
	else
	{
		cout<<"invalid username or password\n";
		return 0;
	}
	cout<<"hello"<<endl;
}
