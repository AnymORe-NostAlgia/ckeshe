#include <iostream>
#include <string>
#include "MyFunction.h"
#include "Class.h"
#include "Course.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	
	Teacher teacher[3];
	Student student[4];
	Class myclass[2];
	Course course[10];

	//加入数据
	initData(teacher, student, myclass, course);

	while (true)
	{
		int isLogin = 0;
		int objflag = 0;

		//登录功能实现
		string account;
		string password;
		cout << endl;
		cout << "------------登录------------" << endl;
		cout << "Enter Account:";
		cin >> account;
		cout << "Enter Password:";
		cin >> password;

		for (int i = 0; i < 3; i++)
		{
			if (account.compare(teacher[i].Getaccount()) == 0)
			{
				if (password.compare(teacher[i].Getpassword()) == 0)
				{
					isLogin = 1;
					objflag = i;
					cout << "------------登陆成功！权限：教师------------" << endl;
					cout << endl;
					break;
				}	
			}
		}

		for (int i = 0; i < 4; i++)
		{
			if (account.compare(student[i].Getaccount()) == 0)
			{
				if (password.compare(student[i].Getpassword()) == 0)
				{
					isLogin = 2;
					objflag = i;
					cout << "------------登陆成功！权限：学生------------" << endl;
					cout << endl;
					break;
				}
			}
		}
		

		//登录成功

		//教师界面
		if (isLogin == 1)
		{
			TeacherMain(teacher, course,objflag);
		}
		
		//学生界面
		else if (isLogin == 2)
		{
			StudentMain(student, course,objflag);

		}

		//登录失败
		else {
			cout << "------------登陆失败！请重试！------------" << endl;
			cout << endl;
		}


	}
	system("Pause");
}