#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int randRange(int low, int high)
{
	return (rand()% (high - low) + low);
}

int main()
{
	srand(time(NULL));
	for(int i = 0; i < 20; i++)
		cout<<randRange(3,10)<<endl;
}
