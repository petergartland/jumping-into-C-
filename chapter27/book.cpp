#include <iostream>
#include <string>
#include "bookfunct.h"

	namespace cprog
	{
		int x;
	}

using namespace std;
using namespace cprog;
int main()
{
	cprog::x = 3;
	cout<<x<<endl;
	com::MyClass test;
	test.hello();
}
