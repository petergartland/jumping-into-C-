#include <vector>
#include <iostream>
#include <string>
#include "prob1.h"

using namespace std;

template <typename T>
T sumVec(vector<T> vec)
{
	T sum = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		sum = sum + vec[i];
	}
	return sum;	
}

template <typename T>
void sortVec(vector<T> &vec)
{
	for (int i = 1; i < vec.size(); i++)
	{
		int j = i;
		while(j > 0 && vec[j-1] > vec[j])
		{
			T temp = vec[j-1];
			vec[j-1] = vec[j];
			vec[j] = temp;
			j--;
		}
	}
}

template <typename T>
bool vecContains(vector<T> vec, T item)
{
	
	for(int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == item)
			return true;
	}
	return false;
}

template <typename T>
class MyVec
{
public:
	MyVec();
	void push(T item);
	T get(int);
private:
	int size;
	int counter;
	T* pointer;
};

template <typename T>
MyVec<T>::MyVec() : size{1}, counter{0}
{
	pointer = new T[size];
}

template<typename T>
void MyVec<T>::push(T item)
{
	if (size == counter)
	{
		T* temp = new T[size];
		for(int i = 0; i < size; i++)
			temp[i] = pointer[i];
		delete[] pointer;
		size = size*2;
		pointer = new T[size];
		for(int i = 0; i < size/2; i++)
			pointer[i] = temp[i];
	}
	pointer[counter] = item;
	counter++;
}


template<typename T>
T MyVec<T>::get(int index)
{
	return pointer[index];
}

int main()
{
/*

	vector<double> vec;
	vec.push_back(5);
	vec.push_back(1.5);
	vec.push_back(3);
	vec.push_back(7);
	vec.push_back(3.5);
	vector<string> vec2;
	vec2.push_back("hello");
	vec2.push_back("world");
	vec2.push_back("its");
	vec2.push_back("me");
	vec2.push_back("peter");
	sortVec(vec2);
	for(int i = 0; i < vec.size(); i++)
		cout<<vec2[i]<<endl;
	//cout<<sumVec(vec)<<endl;
	cout<<vecContains(vec, 5.1)<<endl;
	
*/
	MyVec<int> vec;
	vec.push(3);
	vec.push(8);
	vec.push(99);
	vec.push(1);
	cout<<vec.get(0)<< " " <<vec.get(1)<< " " << vec.get(2)<< " " <<vec.get(3)<<endl;
}
