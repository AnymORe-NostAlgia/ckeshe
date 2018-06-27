#include "Teacher.h"

Teacher::Teacher(string account, string password, string name)
{
	this->account = account;
	this->password = password;
	this->name = name;
}

Teacher::Teacher()
{

}

string Teacher::Getaccount()
{
	return account;
}

string Teacher::Getpassword()
{
	return password;
}

string Teacher::Getname()
{
	return name;
}

void Teacher::Setaccount(string account)
{
	this->account = account;
}

void Teacher::Setpassword(string password)
{
	this->password = password;
}

void Teacher::Setname(string name)
{
	this->name = name;
}
