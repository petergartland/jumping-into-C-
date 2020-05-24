#include <iostream>
#include <string>
#include <vector>
#include "bookfunctions.h"

using namespace std;

template <typename T>
T triangleArea(T x, T y)
{
	return .5*x*y;
} 




int main()
{
	ArrayWrapper<int> test(5);
	test.p_mem[0]=7;
	cout<<test.p_mem[0]<<endl;
	Calc<double> calc;
	cout<<calc.multiply(.5,3)<<endl;
}
