#include <iostream>
#include <string>
#include "prob3funct.h"
#include <ctime>

using namespace std;

int main()
{
	Account test;
	test.setUsername("peter");
	test.setPassword("gartland");
	loggin(&test);
}
