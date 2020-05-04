#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string text;
	vector<char> delims;
	cout<<"enter a string\n";
	getline(cin, text);
	for (int i = 0; i <text.length(); i++)
	{
		if (!(isalpha(text[i])))
		{
			bool duplicate = false; 
			for (int j = 0; j < delims.size(); j++)
			{
				if (delims[j] == text[i])
					duplicate = true;		
			}
			if (!duplicate)
				delims.push_back(text[i]);
		}
		
	}
	cout<<"pick a character to split at";
	for (int i = 0; i < delims.size(); i++)
		cout<<"'"<<delims[i]<<"',";
	cout<<"\n";
	char deliminator;
	cin>>deliminator;
	int i = 0;
	int j = text.find(deliminator, i);
	while (j != string::npos)
	{
		cout<<text.substr(i,j-i)<<endl;
		j = text.find(deliminator, i);
		i=j+1;
	}
}
