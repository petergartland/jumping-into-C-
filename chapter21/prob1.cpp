#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

int main()
{
	int x = 15;
	int y = 5;
	cout<<"x+y = " <<add(x,y)<<endl;
	cout<<"x-y = " << subtract(x,y)<<endl;
	cout<<"x*y = " << multiply(x,y)<<endl;
	cout<<"x/y = " << divide(x,y)<<endl;
}
