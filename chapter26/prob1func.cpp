#include "prob1func.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int HighScore::compare(Comparable& other)
{
	if(this->getIntComp() > other.getIntComp())
		return -1;
	else if (this->getIntComp() < other.getIntComp())
		return 1;
	return 0;
}

string HighScore::getStrComp()
{
	return this->name;
}

int HighScore::getIntComp()
{
	return this->score;
}


void HighScore::setName(string nm)
{
	this->name = nm;
}

void HighScore::setScore(int scr)
{
	this->score = scr;
}

void sort(vector<Comparable*>& vec)
{
	for(int i = 1; i < vec.size(); i++)
	{
		int j = i;
		while(j > 0 && vec[j]->compare(*vec[j-1]) == 1)
		{
			Comparable* temp = vec[j];
			vec[j] = vec[j-1];
			vec[j-1] = temp;
			j--;
		}
	}
		
}

