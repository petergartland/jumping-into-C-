#include <iostream>
#include <string>
using namespace std;

int adder(int x, int y);


int funct_call = 0;

void fun()
{
	funct_call++;
}

int main()
{
	int x = 8;
	int y = 10;
	cout<<adder(x,y)<<endl;
	fun();
	fun();
	cout<<funct_call<<endl;
}

int adder(int x, int y)
{
	return x+y;
}
