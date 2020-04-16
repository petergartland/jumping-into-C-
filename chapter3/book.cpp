#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	int number1;
	cout<<"please enter a number\n";
	cin>>number1;
	cout<<"enter another number\n";
	int number2;
	cin>>number2;
	cout<<number1<< " * " << number2 << " = " << number1 * number2 << endl;
	cout<<number1<< " / " << number2 << " = " << number1 / number2 << endl;
	cout<<number1<< " + " << number2 << " = " << number1 + number2 << endl;
	cout<<number1<< " - " << number2 << " = " << number1 - number2 << endl;
	*/
	string first_name;
	cout<<"please enter your first name\n";
	cin>>first_name;
	string last_name;
	cout<<"please enter your last name\n";
	cin>>last_name;
	string full_name = first_name + " " + last_name;
	cout<<"hello " << full_name << endl;
}
