#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream infile("highscores.txt");
	ofstream outfile ("highscoresbinary.bin", ios::binary);
	int number;
	while(infile>>number)
		outfile.write(reinterpret_cast<char*>(&number),sizeof(number));
}
