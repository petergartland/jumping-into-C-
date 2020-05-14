#include "functions.h"
#include <iostream>
#include <string>
#include <vector>
#include "functions2.h"

using namespace std;

int main()
{
/*
	Ship s;
	s.draw();
	vector<Drawable*> drawables;
	drawables.push_back(new Ship);
	drawables[0]->draw();
	//drawables.push_back(new Drawable);
	cout<<endl;
*/
	deleteDrawable(new Ship);
	Node test0;
	Node test1;
	Node test2;
	cout<<test0.number()<<" "<<test1.number()<<" "<<test2.number()<<endl;

}
