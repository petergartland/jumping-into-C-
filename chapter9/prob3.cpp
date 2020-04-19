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
	int num = randRange(1,101);
	int guess=50;
	int upper = 100;
	int lower = 1;
	while (guess != num)
	{

		if (guess > num)
			{
				upper = guess-1;
				guess = (guess + lower)/2;
			}
		else if (guess < num)
			{
				lower = guess+1;
				guess = (guess + upper + 1);
			}

	}
					
	cout<< guess << " is correct!\n";
		
}
