#include <iostream>
#include <string>
#include "prob1func.h"
#include <vector>
using namespace std;

int main()
{
	HighScore test1;
	test1.setScore(1);
	HighScore test2;
	test2.setScore(5);
	HighScore test3;
	test3.setScore(200); 
	vector<Comparable*> vec;
	vec.push_back(&test1);
	vec.push_back(&test2);
	vec.push_back(&test3);
	sort(vec);
	//cout<<test2.compare(test1)<<endl;
	for(int i = 0; i < vec.size(); i++)
		cout<<vec[i]->getIntComp()<<endl;

}
