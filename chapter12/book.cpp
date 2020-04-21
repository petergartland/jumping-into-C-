#include <iostream>
#include <string>

using namespace std;

void swap(int&x, int& y)
{
	int temp = x;
	x=y;
	y=temp;
}

int main()
{
	int x;
	int *px = &x;
	cout<<"enter a number\n";
	cin>>x;
	int y = 5;
	cout<<x<<endl;
	swap(x,y);
	cout<<x<<endl;
	*px = 10;
	cout<<x<<endl;
}
