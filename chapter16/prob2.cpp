#include <iostream>
#include <string>

using namespace std;

void reverse(int array[], int i, int j)
{
	if (i != j)
	{
		reverse(array, i+1, j);
		cout<<array[i]<<endl;
	}
}

int main()
{
	int len;
	cin>>len;
	int* array = new int[len];
	for (int i = 0; i < len; i++)
		array[i] = i+1;
	reverse(array, 0, len);
	
}
