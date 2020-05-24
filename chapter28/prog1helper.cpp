#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	fstream mybinfile("highscoresbinary.bin");
	int score_help;
	while(mybinfile.read(reinterpret_cast<char*>(&score_help),sizeof(score_help)))	
	{
		cout<<score_help<<endl;
	}

}
