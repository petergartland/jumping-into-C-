#include "functions.h"
#include <iostream>

using namespace std;

//Node::serial_number = 0;
/*
void Drawable::draw()
{
	cout<<"hello"<<endl;
}
*/

void deleteDrawable(Drawable *drawable)
{
	delete drawable;
}

int Node::next_serial_number = 0;

Node::Node() : serial_number(getNextSerialNumber())

{
}

int Node::getNextSerialNumber()
{
	return next_serial_number++;
}

int Node::number()
{
	return serial_number;
}

