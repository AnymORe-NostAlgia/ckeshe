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

	//��������
	initData(teacher, student, myclass, course);

	while (true)
	{
		int isLogin = 0;
		int objflag = 0;

		//��¼����ʵ��
		string account;
		string password;
		cout << endl;
		cout << "------------��¼------------" << endl;
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
					cout << "------------��½�ɹ���Ȩ�ޣ���ʦ------------" << endl;
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
					cout << "------------��½�ɹ���Ȩ�ޣ�ѧ��------------" << endl;
					cout << endl;
					break;
				}
			}
		}
		

		//��¼�ɹ�

		//��ʦ����
		if (isLogin == 1)
		{
			TeacherMain(teacher, course,objflag);
		}
		
		//ѧ������
		else if (isLogin == 2)
		{
			StudentMain(student, course,objflag);

		}

		//��¼ʧ��
		else {
			cout << "------------��½ʧ�ܣ������ԣ�------------" << endl;
			cout << endl;
		}


	}
	system("Pause");
}