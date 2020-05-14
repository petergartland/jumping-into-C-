#ifndef PROB1FUNC_H
#define PROB1FUNC_H

#include <vector>
#include <string>

using namespace std;

class Comparable
{
public:
	virtual int compare(Comparable& other) = 0;
	virtual int getIntComp()=0;
	virtual string getStrComp()=0;
protected:
	int score;
};

class HighScore : public Comparable
{
public:
	virtual int compare(Comparable& other);
	virtual int getIntComp();
	virtual string getStrComp();
	void setName(string nm);
	void setScore(int scr);
private:
	int score;
	string name;
};

void sort(vector<Comparable*>&);

#endif


