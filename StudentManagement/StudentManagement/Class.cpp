#include "Class.h"


void Class::addstudent(Student instudent)
{
	inclass[index] = instudent;
	index++;
}

Student Class::getstudent(int n)
{
	return inclass[n];
}

int Class::getindex()
{
	return index;
}

void Class::Setnumber(int n)
{
	number = n;
}

int  Class::Getnumber()
{
	return number;
}






