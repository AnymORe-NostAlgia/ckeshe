#include <string>
#include "Course.h"

#ifndef STUDENT_H
#define STUDENT_H


using namespace std;

class Student
{
private:
	string account;
	string password;
	string name;
	int classnumber;
	Course mycourse[5];
	int index = 0;
	int grade[5];

public:
	Student(string account, string password, string name);
	Student();
	string Getaccount();
	string Getpassword();
	string Getname();
	void addcourse(Course course);
	void Setaccount(string account);
	void Setpassword(string password);
	void Setname(string name);
	void Setclassnumber(int n);
	int Getindex();
	int Getclasssnumber();
	string getcoursename(int n);
	Course getcourse(int n);
	void Setgrade(int n, int score);
	int Getgrade(int n);
};
#endif 

