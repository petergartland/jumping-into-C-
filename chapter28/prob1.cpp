#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	fstream myfile("highscoresbinary.bin", ios::binary | ios::in | ios::out);
	if(! myfile.is_open())
		cout<<"error opening file\n";
	int score;
	cout<<"enter a score\n";
	cin >> score;
	streampos pre_score_pos = myfile.tellg();
	int cur_score;
	while(myfile.read(reinterpret_cast<char*>(& cur_score), sizeof(cur_score)))
	{
		if (cur_score < score)
			break;
		pre_score_pos = myfile.tellg();
	}
	
	if(myfile.fail() && !myfile.eof())
		cout<<"error reading file\n";
	myfile.clear();
	vector<int> scores;
	//int x = 99999;
	myfile.seekp(pre_score_pos);
	while(myfile.read(reinterpret_cast<char*>(&cur_score), sizeof(cur_score)))
		scores.push_back(cur_score);
	if(!myfile.eof())
		cout<<"error reading data\n";
	myfile.clear();
	myfile.seekp(pre_score_pos);

	myfile.write(reinterpret_cast<char*>(& score), sizeof(score));
	//myfile.write(reinterpret_cast<char*>(& score), sizeof(score));
	for (vector<int>::iterator itr = scores.begin(); itr!=scores.end(); itr++)
		myfile.write(reinterpret_cast<char*>(&(*itr)),sizeof(*itr));
	
	cout<<endl<<endl;
	
/*
	fstream mybinfile("highscoresbinary.bin");
	int score_help;
	while(mybinfile.read(reinterpret_cast<char*>(&score_help),sizeof(score_help)))	
	{
		cout<<score_help<<endl;
	}
*/
}

