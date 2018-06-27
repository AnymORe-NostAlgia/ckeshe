#include <string>
#include "Student.h"

#ifndef CLASS_H
#define CLASS_H


using namespace std;

class Class
{
private:
	int number;
	Student inclass[10];
	int index = 0;
public:
	void addstudent(Student instudent);
	Student getstudent(int n);
	int getindex();
	void Setnumber(int n);
	int Getnumber();

};
#endif 

