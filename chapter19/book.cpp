#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	string text1;
	string text2;
	cout<<"enter some text\n";
	getline(cin,text1);
	//cout<<"ok\n";
	getline(cin,text2);
	cout<<"here is your string: " << text1<<endl;
	*/
	
	/*
	while(true)
	{
		string first_name;
		getline(cin,first_name, ',');
		if (first_name.size() == 0)
			break;
		string last_name;
		getline(cin, last_name, ',');
		string player_class;
		getline(cin,player_class,'\n');
		cout<<first_name<<" "<<last_name<<" is a "<<player_class<<endl;
	}
	*/
	
	string my_string;
	getline(cin,my_string);
	int cat_count = 0;
	for(int i = my_string.find("cat", 0); i != string::npos; i = my_string.find("cat", i))
	{
		cat_count++;
		i++;
	}
	cout<<"cat appaers "<<cat_count<<" times\n";
}
