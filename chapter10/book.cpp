#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>


using namespace std;

/*
int array_sum(int array[])
{
	int sum;
	int size = array.size();
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}
*/

int find_min(int array[], int i)
{
	int lowest = i;
	for(int j = i; j < sizeof(array)/sizeof(1); j++)
	{
		if (array[lowest] > array[j])
		{
			lowest = j;
		}
	}
	return lowest;
}

void swap(int array[], int i, int j)
{
	int temp1 = array[i];
	int temp2 = array[j];
	array[i] = temp2;
	array[j] = temp1;
}

void sort(int array[])
{
	cout<<"here\n\n";
	cout<<array[5]<<endl;
	cout<<(sizeof(array))/sizeof(1)<<endl;
	//cout<<"here\n\n";
	for (int i = 0; i < sizeof(array)/sizeof(1); i++)
	{
		int j = find_min(array, i);
		swap(array, i, j);
	}
}



int main()
{
	/*
	int table[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			table[i][j] = i*j;
		}
	}
	cout<<"multiplication table\n";
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout<<"[ "<<i<<"]" << "["<<j<<"]";
			cout<<table[i][j]<<" ";
		}
		cout<<endl<<"\n";
	}
	*/
	
	//int array[5] = {1,2,3,4,5};
	//cout<<array_sum(array)<<endl;
	srand(time(NULL));
	
	int array[100];
	for (int i = 0; i<100; i++)
	{
		array[i] = rand()%100;
	}
	for (int i = 0; i<100; i++)
	{
		cout<<array[i] << " ";
	}	

	sort(array);
	cout<<endl;
	cout<<endl;
	for (int i = 0; i<100; i++)
		cout<<array[i]<<" ";
	cout<<endl;
	cout<<sizeof(array)/sizeof(1)<<endl;	
}
