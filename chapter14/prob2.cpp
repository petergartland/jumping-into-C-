#include <iostream>
#include <string>

using namespace std;

int*** mult_table(int x, int y, int z)
{
	int*** table = new int**[x+1];
	for (int i = 0; i < x+1; i++)
	{
		 table[i] = new int*[y+1];
		 for (int j = 0; j < y+1; j++)
		 {
		 	table[i][j] = new int[z];
		 	for (int k = 0; k < z+1; k++)
		 		table[i][j][k] = i*j*k;
		 }
		 
	}
	return table;
}

int main()
{
	int*** table = mult_table(3,4,5);
	for (int i = 0; i <4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 6; k++)
				cout<<table[i][j][k];
			cout<<", ";
			delete[] table[i][j];
		}
		cout<<endl;
		delete[] table[i];
	}
	delete[] table;
}
