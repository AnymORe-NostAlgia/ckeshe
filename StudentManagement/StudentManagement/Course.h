#include <string>
#ifndef COURSE_H
#define COURSE_H


using namespace std;

class Course
{
private:
	string name;
	int state = 0;
	int credit;
	int fullscore;
public:
	void Setname(string name);
	void Setstate(int n);
	void Setcredit(int n);
	void Setfullscore(int n);
	int Getfullscore();
	int Getcredit();
	int Getstate();
	string Getname();
};
#endif 

