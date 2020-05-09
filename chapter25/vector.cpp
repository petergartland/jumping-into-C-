#include "vector.h"
#include <iostream>
using namespace std;

VectorofInt::VectorofInt()
{
	vec = new int[32];
	size = 32;
	current = -1;
}

VectorofInt::VectorofInt(int n)
{
	vec = new int[n];
	size = n;
	current = -1;
}

int VectorofInt::get(const int index)
{
	if(index>current)
	{
		cout<<"out of range"<<endl;
		return -1;
	}
	return vec[index];
}

void VectorofInt::set(const int index, int value)
{
	//cout<<"here"<<endl;
	if(index>current)
	{
		cout<<"out of range"<<endl;
		return;
	}
	vec[index] = value;
}

void VectorofInt::push_back(int value)
{
	if(current >= size-1)
	{
		int *newarray = new int[size*2];
		size = size*2;
		for(int i = 0; i < current+1; i++)
			newarray[i] = vec[i];
		delete[] vec;
		vec = newarray;
	}
	
	vec[current+1] = value;
	current++;
}

const int VectorofInt::length()
{
	return current+1;
}

void VectorofInt::push_front(int value)
{

}

VectorofInt& VectorofInt::operator=(const VectorofInt& other)
{
	if (this == &other)
		return *this;
	delete[] vec;
	current = other.current;
	size = current*2;
	vec = new int[current*2];
	for(int i = 0; i < current+1; i++)
	{
		vec[i] = other.vec[i];
	}
	return *this;
}
