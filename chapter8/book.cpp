#include <iostream>
#include <string>
using namespace std;

	void playgame()
	{
		cout<<"play game\n";
	}
	
	void loadgame()
	{
		cout<<"load game\n";
	}
	
	void multiplayer()
	{
		cout<<"multiplayer!\n";
	}
	
	void exitgame()
	{
		cout<<"thanks for playing\n";
	}

int main()
{

	int input;
	cout<<"1. play game\n";
	cout<<"2. load game\n";
	cout<<"3. multiplayer\n";
	cout<<"4. exit game\n";
	
	cin>>input;
	
	
	switch (input)
	{
		case 1:
			playgame();
			break;
		case 2:
			loadgame();
			break;
		case 3:
			multiplayer();
			break;
		case 4:
			exitgame();
			break;
		default:
			cout<<"error\n";
	}

}
