#include <iostream>
#include <string>
using namespace std;

int main()
{
	string question;
	string ans1, ans2, ans3;
	cout<<"enter the question\n";
	getline(cin, question);
	cout<<"enter the first answer\n";
	getline(cin,ans1);
	cout<<"enter the second answer\n";
	getline(cin,ans2);
	cout<<"enter the third answer\n";
	getline(cin,ans3);	
	double tal1, tal2, tal3;
	int response = 1;
	
	while (response != 0)
	{
		cout<<question<<endl;
		cin>>response;
		if (response == 1)
			tal1++;
		if (response == 2)
			tal2++;
		if (response == 3)
			tal3++;
	}
	
	double total =  tal1 + tal2 + tal3;
	tal1 = (tal1/total)*10;
	tal2 = (tal2/total)*10;
	tal3 = (tal3/total)*10;
	
	for(int i = 0; i <11; i++)
	{
		if (tal1 > 10-i)
			cout<<" || ";
		else
			cout<<"    ";
		if (tal2 > 10-i)
			cout<<" || ";
		else
			cout<<"    ";
		if (tal3 > 10-i)
			cout<<" || ";
		else
			cout<<"    ";
		cout<<endl;
	}
	cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
	cout<<question<<endl;
}
