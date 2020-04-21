#include <iostream>
#include <string>

using namespace std;

int addMult (int x, int y, int &mult)
{
	mult = x*y;
	return x+y;

}

int main()
{
	int x = 5, y = 7, mult=0;
	int add = addMult(x,y,mult);
	cout<<add<< " " <<mult<<endl;
}
