#include <iostream>
#include <string>

using namespace std;

int** mult_table(int n, int m)
{
	int **table = new int*[n+1];
	for(int i = 0; i < n+1; i++)
	{
		table[i] = new int[m];
		for(int j = 0; j < m+1; j++)
			table[i][j] = i*j;
	}
	return table;
}

int main()
{
	int** table = mult_table(5,3);
	for(int i = 0; i<6; i++)
	{
		for(int j = 0; j<4; j++)
			cout<<table[i][j];
		delete[] table[i];
		cout<<endl;
	}
	delete[] table;
}
