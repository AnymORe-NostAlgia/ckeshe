#include "Course.h"

void Course::Setname(string name)
{
	this->name = name;
}

void Course::Setstate(int n)
{
	state = n;
}

int Course::Getstate()
{
	return state;
}

string Course::Getname()
{
	return name;
}

void Course::Setcredit(int n)
{
	credit = n;
}

void Course::Setfullscore(int n)
{
	fullscore = n;
}

int Course::Getcredit()
{
	return credit;
}

int Course::Getfullscore()
{
	return fullscore;
}