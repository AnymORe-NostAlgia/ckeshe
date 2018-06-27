#include "MyFunction.h"
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void initData(Teacher teacher[], Student student[],Class myclass[],Course course[])
{
	teacher[0].Setaccount("Teacher1");
	teacher[0].Setpassword("111");
	teacher[0].Setname("李老师");

	teacher[1].Setaccount("Teacher2");
	teacher[1].Setpassword("222");
	teacher[1].Setname("张老师");

	teacher[2].Setaccount("Teacher3");
	teacher[2].Setpassword("333");
	teacher[2].Setname("陈老师");

	student[0].Setaccount("Student1");
	student[0].Setpassword("111");
	student[0].Setname("小明");
	student[0].Setclassnumber(1);
	student[0].Setgrade(0, 81);
	student[0].Setgrade(1, 93);
	student[0].Setgrade(2, 68);
	student[0].Setgrade(3, 77);
	student[0].Setgrade(4, 55);

	student[1].Setaccount("Student2");
	student[1].Setpassword("222");
	student[1].Setname("小胡");
	student[1].Setclassnumber(1);
	student[1].Setgrade(0, 78);
	student[1].Setgrade(1, 72);
	student[1].Setgrade(2, 88);
	student[1].Setgrade(3, 91);
	student[1].Setgrade(4, 66);

	student[2].Setaccount("Student3");
	student[2].Setpassword("333");
	student[2].Setname("小华");
	student[2].Setclassnumber(2);
	student[2].Setgrade(0, 60);
	student[2].Setgrade(1, 64);
	student[2].Setgrade(2, 71);
	student[2].Setgrade(3, 62);
	student[2].Setgrade(4, 52);

	student[3].Setaccount("Student4");
	student[3].Setpassword("444");
	student[3].Setname("小孙");
	student[3].Setclassnumber(2);
	student[3].Setgrade(0, 99);
	student[3].Setgrade(1, 89);
	student[3].Setgrade(2, 94);
	student[3].Setgrade(3, 91);
	student[3].Setgrade(4, 92);

	myclass[0].Setnumber(1);
	myclass[0].addstudent(student[0]);
	myclass[0].addstudent(student[1]);

	myclass[1].Setnumber(2);
	myclass[1].addstudent(student[2]);
	myclass[1].addstudent(student[3]);

	course[0].Setname("C++程序设计");
	course[0].Setstate(1);
	course[0].Setcredit(5);
	course[0].Setfullscore(100);

	course[1].Setname("高等数学");
	course[1].Setstate(1);
	course[1].Setcredit(5);
	course[1].Setfullscore(100);

	course[2].Setname("Java程序设计");
	course[2].Setstate(0);
	course[2].Setcredit(3);
	course[2].Setfullscore(100);

	course[3].Setname("大学物理");
	course[3].Setstate(0);
	course[3].Setcredit(4);
	course[3].Setfullscore(100);

	course[4].Setname("计算机组成原理");
	course[4].Setstate(0);
	course[4].Setcredit(3);
	course[4].Setfullscore(100);
}

void StudentMain(Student student[],Course course[],int objflag)
{
	int isquit = 0;
	int choice = 0;
	while (isquit==0)
	{
		cout << endl;
		cout << "----------------请选择操作------------------" << endl;
		cout << "|                1.选课                     |" << endl;
		cout << "|                2.查看课表                 |" << endl;
		cout << "|                3.查看成绩单               |" << endl;
		cout << "|                4.退出登录                 |" << endl;
		cout << "--------------------------------------选择：";
		cin >> choice;
		switch (choice)
		{

			//选课
			case 1:
			{
				cout << endl;
				cout << "----------------已开课程------------------" << endl;
				for (int i = 0; i < 5; i++)
				{
					if (course[i].Getstate() == 1)
					{
						cout << "              " << i + 1 << "." << course[i].Getname() << "                  " << endl;
					}

				}
				cout << "--------------------------------------选择：";
				int tempi;
				cin >> tempi;
				student[objflag].addcourse(course[tempi-1]);
				cout << "----------------选课成功------------------" << endl;
				break;
			}

			//查看课表
			case 2:
			{
				cout << endl;
				cout << "----------------" << student[objflag].Getname() << " 的课表---------------" << endl;
				for (int i = 1; i <= student[objflag].Getindex(); i++)
				{
					cout << "|               " << i <<"."<< student[objflag].getcoursename(i-1) << endl;
				}
				cout << "------------------------------------------" << endl;
				break;
			}

			//查看成绩单
			case 3:
			{
				double avg;
				double gpa;
				int sumtotal = 0;
				int sumcredit = 0;
				int sumgpatotal = 0;
				cout << endl;
				cout << "----------------" << student[objflag].Getname() << " 的成绩单---------------" << endl;
				cout << "|     姓名:" << student[objflag].Getname() << "       班级：" << student[objflag].Getclasssnumber() << endl;
				cout << "|---------------成绩信息----------------------" << endl;
				for (int i = 1; i <= student[objflag].Getindex(); i++)
				{
					cout << "|     课程：" << student[objflag].getcoursename(i - 1) << "    学分：" << student[objflag].getcourse(i - 1).Getcredit()
						<< "    几分制：" << student[objflag].getcourse(i - 1).Getfullscore() << "    分数：" << student[objflag].Getgrade(i - 1) << endl;
					sumtotal += student[objflag].getcourse(i - 1).Getcredit()*student[objflag].Getgrade(i - 1);
					sumcredit += student[objflag].getcourse(i - 1).Getcredit();
					sumgpatotal += student[objflag].getcourse(i - 1).Getcredit()*(5 - ((100 - (double)student[objflag].Getgrade(i - 1)) / 10));
				}
				avg = ((double)sumtotal )/ ((double)sumcredit);
				gpa= ((double)sumgpatotal) / ((double)sumcredit);

				cout << "|---------------学期成绩----------------------" << endl;
				cout << "|    总学分："<<sumcredit<<"     平均分数："<< avg << "    平均绩点："<< gpa<< endl;
				
				
				break;
			}

			//退出
			case 4:
			{
				isquit = 1;
				break;
			}

			//其它选项
			default:
			{
				cout << "-------------无效选项！---------------" << endl;
				isquit = 0;
				break;
			}
			
		}
	}

}

void TeacherMain(Teacher teacher[],Course course[],int objflag)
{
	int isquit = 0;
	int choice = 0;
	while (isquit == 0)
	{
		cout << endl;
		cout << "----------------请选择操作------------------" << endl;
		cout << "|                1.查看已开课程             |" << endl;
		cout << "|                2.开课                     |" << endl;
		cout << "|                3.退出登录                 |" << endl;
		cout << "--------------------------------------选择：";
		cin >> choice;
		switch (choice)
		{

			//查看已开课程
			case 1:
			{
				cout << endl;
				cout << "----------------已开课程------------------" << endl;
				for (int i = 0; i < 5; i++)
				{
					if (course[i].Getstate() == 1)
					{
						cout << "              " << i+1 << "." << course[i].Getname() << "                  " << endl;
					}
					
				}
				break;
			}

			//开课
			case 2:
			{	
				cout << endl;
				cout << "----------------开设课程------------------" << endl;
				for (int i = 0; i < 5; i++)
				{
					if (course[i].Getstate() == 0)
					{
						cout << "              " << i+1 << "." << course[i].Getname() << "                  " << endl;
					}

				}
				cout << "--------------------------------------选择：";
				int tempi;
				cin >> tempi;
				course[tempi-1].Setstate(1);
				cout << "----------------开设成功------------------" << endl;
				break;
			}

			//退出
			case 3:
			{
				isquit = 1;
				break;
			}

			//其它选项
			default:
			{
				cout << "-------------无效选项！---------------" << endl;
				isquit = 0;
				break;
			}

		}
	}
}