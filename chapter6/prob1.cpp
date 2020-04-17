#include <iostream>
#include <string>
using namespace std;

void bottles();
void calc();

int main()
{
	cout << "please select one of the following:\n";
	string opt1 = "99 bottles of beer";
	string opt2 = "calculator";
	string choice;
	while(true)
	{
		cout<<opt1<<endl;;
		cout<<opt2<<endl;
		getline(cin, choice);
		if (choice == opt1)
		{
			bottles();
			break;
		}
		if (choice == opt2)
		{
			calc();
			break;
		}
	}
}

void bottles()
{
	int i = 5;
	while (i > 0)
	{
		cout<< i << " bottle of beer on the wall "<<i<<" bottles of beer.\n";
		cout<<"Take one down pass it arround, " << i-1 << " bottles of beer on the wall\n";
		i--;
	} 
}

void calc()
{
	cout<<"enter to numbers you would like added, separated by a space\n";
	int x,y;
	cin>>x;
	cin>>y;
	cout<< x<<" + "<<y<< " = " << x+y<<endl;
}
