#include <iostream>
#include <string>
using namespace std;

int main()
{
	for (int i = 0; i <7; i++)
	{
		cout<<"on the " << i+1 << "th day of christmas my true love sent to me\n";
		
		switch (i)
		{
			case 6:
				cout<<"seven swans a wimming\n";
			case 5:
				cout<<"six geese a laying\n";
			case 4:
				cout<<"five golden rings\n";
			case 3:
				cout<<"four calling birds\n";
			case 2:
				cout<<"three french hens\n";
			case 1:
				cout<< "two turtle doves\nand ";
			case 0:
				cout<<"a patritch in a peer tree\n\n";
		}
	}
}
