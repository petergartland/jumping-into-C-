#include <iostream>
#include <string>
#include "vector.h"
#include <vector>

using namespace std;

int main()
{
	VectorofInt vec(2);
	cout<<endl;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	for(int i = 0; i <vec.length(); i++)
		cout<<vec.get(i)<<endl;
	VectorofInt vec2;
	vec2 = vec;
	for(int i = 0; i <vec2.length(); i++)
		cout<<vec2.get(i)<<endl;
	
}
