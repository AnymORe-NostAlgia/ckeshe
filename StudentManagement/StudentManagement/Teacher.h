#include <string>
#ifndef TEACHER_H
#define TEACHER_H


using namespace std;

class Teacher
{
private:
	string account;
	string password;
	string name;
public:
	Teacher(string account,string password,string name);
	Teacher();
	string Getaccount();
	string Getpassword();
	string Getname();
	void Setaccount(string account);
	void Setpassword(string password);
	void Setname(string name);
};
#endif 

