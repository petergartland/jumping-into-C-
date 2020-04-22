#include <iostream>
#include <string>

using namespace std;

int* grow_array(int* p_vals, int &cur_size);

int main()
{
	int next_element = 0;
	int val;
	int size = 5;
	int *p_vals = new int[size];
	cout<<"Enter value to insert (or 0 to exit)\n";
	cin>>val;
	while (val != 0)
	{
		if(next_element+1 == size)
		{
			p_vals = grow_array(p_vals, size);
		}
		p_vals[next_element] = val;
		next_element++;
		cout<<"Enter value to insert (or 0 to exit)\n";
		cin>>val;
	}
	for (int i = 0; i < next_element; i++)
	{
		cout<<p_vals[i]<<endl;
	}
}

int* grow_array(int* p_vals, int &cur_size)
{
	cur_size = 2*cur_size;
	int *new_p_vals = new int[cur_size];
	for (int i = 0; i < (cur_size/2) - 1; i++)
	{
		new_p_vals[i] = p_vals[i];	
	}
	delete[] p_vals;
	return new_p_vals;
}
