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
	int guess=1;
	while (guess != num && guess > 0 && guess < 101)
	{
		cout<<"guess the number between 1 and 100\n";
		cin>>guess;
		if (guess > num && guess <101)
			cout <<"to high\n";
		else if (guess < num && guess > 0)
			cout<<"to low\n";
		else if (guess == num)
			cout<<"correct!\n";
		else
			{
				cout<<"ending\n";
				return 0;
			}
	}
		
}
