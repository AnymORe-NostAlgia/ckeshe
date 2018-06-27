#include "Student.h"

Student::Student(string account, string password, string name)
{
	this->account = account;
	this->password = password;
	this->name = name;
}

Student::Student() 
{

}

string Student::Getaccount()
{
	return account;
}

string Student::Getpassword()
{
	return password;
}

string Student::Getname()
{
	return name;
}

void Student::Setaccount(string account)
{
	this->account = account;
}

void Student::Setpassword(string password)
{
	this->password = password;
}

void Student::Setname(string name)
{
	this->name = name;
}

void Student::Setclassnumber(int n)
{
	this->classnumber = n;
}

void Student::addcourse(Course course)
{
	mycourse[index] = course;
	index++;
}

int Student::Getindex()
{
	return index;
}

int Student::Getclasssnumber()
{
	return classnumber;
}

string Student::getcoursename(int n)
{
	return mycourse[n].Getname();
}

void Student::Setgrade(int n, int score)
{
	grade[n] = score;
}

int Student::Getgrade(int n)
{
	return grade[n];
}

Course Student::getcourse(int n)
{
	return mycourse[n];
}