#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
class Drawable
{
public:
	virtual void draw() = 0;
	Drawable() {std::cout<<"drawable constructore"<<std::endl;}
	virtual ~Drawable() {std::cout<<"drawable destroyed"<<std::endl;}
};

void deleteDrawable(Drawable *drawable);


class Node
{
public:
	Node();
	int number();
private:
	static int getNextSerialNumber();
	static int next_serial_number;
	int serial_number;
};


#endif
