#ifndef FUNCTIONS2_H
#define FUNTCTIONS2_h
#include "functions.h"

class Ship : public Drawable
{
public:
	virtual void draw();
	Ship() {std::cout<<"ship constructor"<<std::endl;}
	virtual ~Ship() {std::cout<<"ship destroyed"<<std::endl;}
};


#endif
