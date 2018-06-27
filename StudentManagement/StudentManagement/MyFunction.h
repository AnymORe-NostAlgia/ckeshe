#include <iostream>
#include <string>
#include "Class.h"
#include "Course.h"
#include "Student.h"
#include "Teacher.h"

#ifndef MYFUNCTION_H
#define MYFUNCTION_H

using namespace std;

void initData(Teacher teacher[],Student student[],Class myclass[],Course course[]);

void StudentMain(Student student[],Course course[],int objflag);

void TeacherMain(Teacher teacher[], Course course[],int objflag);

#endif 

