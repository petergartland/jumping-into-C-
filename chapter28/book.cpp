#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
/*
	ifstream file_reader("myfile.txt");
	if (! file_reader.is_open() )
	{
		cout<<"could not open file\n";
	}
	
	ofstream file_writer("outfile.txt",ios::ate);
	
	string line;
	for(int i = 0; i < 10; i++)
	{
		if(! getline(file_reader,line))
		{
			cout<<"end!\n";
			break;
		}
		file_writer<<line<<" out\n";
	}
	
*/
	fstream file(argv[1], ios::in | ios::out);
	if(!file.is_open())
		cout<<"could not open\n";
	int score;
	cout<<"enter a score\n";
	cin>>score;
	streampos pre_score_pos = file.tellg();
	int cur_score;
	while (file>>cur_score)
	{
		if(cur_score < score)
			break;
		pre_score_pos = file.tellg();		
	}
	if(file.fail() && !file.eof())
	{
		cout<<"bad score/reading exititng.../n";
		return 0;
	}
	file.clear();
	file.seekg(pre_score_pos);
	vector<int> scores;
	while(file>>cur_score)
	{
		scores.push_back(cur_score);
	}
	if(! file.eof())
	{
		cout<<"error reading file\n";
		return 0;
	}
	file.clear();
	file.seekp(pre_score_pos);
	if(pre_score_pos != 0)
		file<<endl;
	file<<score<<endl;
	for(vector<int>::iterator itr = scores.begin(); itr != scores.end(); ++itr)
	{
		file<<*itr<<endl;
	}
}
