#include <iostream>
#include <string>

using namespace std;

struct friends
{
	string name;
	double time;
};

void sort_list(friends* list)
{
	int i = 0;
	while (list[i].name != "NULL" && i < 100)
	{
		int min = i;
		int j = i;
		while (list[j].name != "NULL" && j < 100)
		{
			if (list[i].time > list[j].time)
				min = j;
			j++;
		}
		friends temp = list[i];
		list[i] = list[min];
		list[min] = temp;
		i++;
	}
}

void print_list(friends* list)
{
	cout<<"here";
	friends* sorted_list = list;
	sort_list(sorted_list);
	int i = 0;
	while (list[i].name != "NULL" && i <100)
	{
		cout<<sorted_list[i].name << " " << sorted_list[i].time<<endl;
		i++;
	}
}

int main()
{
	int n;
	n = 10;
	friends* list = new friends[n];
	for (int i = 0; i < n; i++)
	{
		list[i].name = "NULL";
	}
	cout<<"enter a friend and the last time spoken to them\n";
	string name;
	double time;
	cin>> name;
	cin>>time;
	list[0].name = name;
	list[0].time = time;
	int i = 1;
	while (name != "0")
	{
		cout<<"enter a friend and the last time spoken to them, enter print to see the list, or enter 0 to exit\n";
		cin>>name;
		if (name == "print")
		{
			print_list(list);
			continue;
		}
		cin>>time;

		if (name == "0")
			break;
		else if (time < 0)
		{
			cout <<"time cannot be less than 0\n";
			continue;
		}
		list[i].name = name;
		list[i].time = time;
		i++;
	}
}
