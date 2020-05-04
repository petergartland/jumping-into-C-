#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
 	vector<int> highscores;
 	string score;
 	cout<<"enter a high score or print to see high scores\n";
 	cin>>score;
 	int intscore;
 	while (score!="0")
 	{
 		if (score == "print")
 		{
 			for(vector<int>::iterator itr = highscores.begin(); itr != highscores.end(); itr++)
 				cout<<*itr<<endl;
 		}
 		else if (intscore = stoi(score))
 		{
 			highscores.push_back(intscore);
 			vector<int>::reverse_iterator itr = highscores.rbegin();
 			cout<<"iter is " <<*itr<<endl;
 			while (itr != (--highscores.rend()) && *itr < *++itr)
 			{
 				cout<<"ehre\n";
 				int temp1 = *itr;
 				int temp2 = *--itr;
 				*itr = temp1;
 				*++itr = temp2;
 			}
 				
 		}
 		cin>>score;
 	}
}
