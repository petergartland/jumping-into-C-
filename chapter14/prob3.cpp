#include <iostream>
#include <string>

using namespace std;

int** table()
{
	int **x = new int*[3];
	for (int i = 0; i < 3; i++)
		x[i] = new int[3];
	return x;
}

int main()
{
	int tabl[3][3];
	for (int i = 0; i <3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout<<&tabl[i][j]<<endl;
	}
	cout<<endl;
	
	int** test = table();
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout<<&test[i][j]<<endl;
	}
}
