#ifndef PROB3FUNCT_H
#define PROB3FUNCT_H

#include <string>

using namespace std;

class StringConvertable
{
public:
	virtual void toString() = 0;
};


class Account : public StringConvertable
{
public:
	virtual void toString();
	void setUsername(string);
	void setPassword(string);
	string getUsername();
	string getPassword();
private:
	string username;
	string password;	
};


void loggin(StringConvertable*);
#endif
