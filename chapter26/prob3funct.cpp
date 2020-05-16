#include "prob3funct.h"
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

void Account::setUsername(string name)
{
	this->username = name;
}

void Account::setPassword(string pass)
{
	this->password = pass;
}

string Account::getUsername()
{
	return this->username;
}

string Account::getPassword()
{
	return this->password;
}

void Account::toString()
{
	cout<<"username: " << this->username << endl;
	cout<<"password: " << this->password << endl;
}

void loggin(StringConvertable* obj)
{
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	obj->toString();
}

