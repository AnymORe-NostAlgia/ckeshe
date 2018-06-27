#include "MyFunction.h"
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void initData(Teacher teacher[], Student student[],Class myclass[],Course course[])
{
	teacher[0].Setaccount("Teacher1");
	teacher[0].Setpassword("111");
	teacher[0].Setname("����ʦ");

	teacher[1].Setaccount("Teacher2");
	teacher[1].Setpassword("222");
	teacher[1].Setname("����ʦ");

	teacher[2].Setaccount("Teacher3");
	teacher[2].Setpassword("333");
	teacher[2].Setname("����ʦ");

	student[0].Setaccount("Student1");
	student[0].Setpassword("111");
	student[0].Setname("С��");
	student[0].Setclassnumber(1);
	student[0].Setgrade(0, 81);
	student[0].Setgrade(1, 93);
	student[0].Setgrade(2, 68);
	student[0].Setgrade(3, 77);
	student[0].Setgrade(4, 55);

	student[1].Setaccount("Student2");
	student[1].Setpassword("222");
	student[1].Setname("С��");
	student[1].Setclassnumber(1);
	student[1].Setgrade(0, 78);
	student[1].Setgrade(1, 72);
	student[1].Setgrade(2, 88);
	student[1].Setgrade(3, 91);
	student[1].Setgrade(4, 66);

	student[2].Setaccount("Student3");
	student[2].Setpassword("333");
	student[2].Setname("С��");
	student[2].Setclassnumber(2);
	student[2].Setgrade(0, 60);
	student[2].Setgrade(1, 64);
	student[2].Setgrade(2, 71);
	student[2].Setgrade(3, 62);
	student[2].Setgrade(4, 52);

	student[3].Setaccount("Student4");
	student[3].Setpassword("444");
	student[3].Setname("С��");
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

	course[0].Setname("C++�������");
	course[0].Setstate(1);
	course[0].Setcredit(5);
	course[0].Setfullscore(100);

	course[1].Setname("�ߵ���ѧ");
	course[1].Setstate(1);
	course[1].Setcredit(5);
	course[1].Setfullscore(100);

	course[2].Setname("Java�������");
	course[2].Setstate(0);
	course[2].Setcredit(3);
	course[2].Setfullscore(100);

	course[3].Setname("��ѧ����");
	course[3].Setstate(0);
	course[3].Setcredit(4);
	course[3].Setfullscore(100);

	course[4].Setname("��������ԭ��");
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
		cout << "----------------��ѡ�����------------------" << endl;
		cout << "|                1.ѡ��                     |" << endl;
		cout << "|                2.�鿴�α�                 |" << endl;
		cout << "|                3.�鿴�ɼ���               |" << endl;
		cout << "|                4.�˳���¼                 |" << endl;
		cout << "--------------------------------------ѡ��";
		cin >> choice;
		switch (choice)
		{

			//ѡ��
			case 1:
			{
				cout << endl;
				cout << "----------------�ѿ��γ�------------------" << endl;
				for (int i = 0; i < 5; i++)
				{
					if (course[i].Getstate() == 1)
					{
						cout << "              " << i + 1 << "." << course[i].Getname() << "                  " << endl;
					}

				}
				cout << "--------------------------------------ѡ��";
				int tempi;
				cin >> tempi;
				student[objflag].addcourse(course[tempi-1]);
				cout << "----------------ѡ�γɹ�------------------" << endl;
				break;
			}

			//�鿴�α�
			case 2:
			{
				cout << endl;
				cout << "----------------" << student[objflag].Getname() << " �Ŀα�---------------" << endl;
				for (int i = 1; i <= student[objflag].Getindex(); i++)
				{
					cout << "|               " << i <<"."<< student[objflag].getcoursename(i-1) << endl;
				}
				cout << "------------------------------------------" << endl;
				break;
			}

			//�鿴�ɼ���
			case 3:
			{
				double avg;
				double gpa;
				int sumtotal = 0;
				int sumcredit = 0;
				int sumgpatotal = 0;
				cout << endl;
				cout << "----------------" << student[objflag].Getname() << " �ĳɼ���---------------" << endl;
				cout << "|     ����:" << student[objflag].Getname() << "       �༶��" << student[objflag].Getclasssnumber() << endl;
				cout << "|---------------�ɼ���Ϣ----------------------" << endl;
				for (int i = 1; i <= student[objflag].Getindex(); i++)
				{
					cout << "|     �γ̣�" << student[objflag].getcoursename(i - 1) << "    ѧ�֣�" << student[objflag].getcourse(i - 1).Getcredit()
						<< "    �����ƣ�" << student[objflag].getcourse(i - 1).Getfullscore() << "    ������" << student[objflag].Getgrade(i - 1) << endl;
					sumtotal += student[objflag].getcourse(i - 1).Getcredit()*student[objflag].Getgrade(i - 1);
					sumcredit += student[objflag].getcourse(i - 1).Getcredit();
					sumgpatotal += student[objflag].getcourse(i - 1).Getcredit()*(5 - ((100 - (double)student[objflag].Getgrade(i - 1)) / 10));
				}
				avg = ((double)sumtotal )/ ((double)sumcredit);
				gpa= ((double)sumgpatotal) / ((double)sumcredit);

				cout << "|---------------ѧ�ڳɼ�----------------------" << endl;
				cout << "|    ��ѧ�֣�"<<sumcredit<<"     ƽ��������"<< avg << "    ƽ�����㣺"<< gpa<< endl;
				
				
				break;
			}

			//�˳�
			case 4:
			{
				isquit = 1;
				break;
			}

			//����ѡ��
			default:
			{
				cout << "-------------��Чѡ�---------------" << endl;
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
		cout << "----------------��ѡ�����------------------" << endl;
		cout << "|                1.�鿴�ѿ��γ�             |" << endl;
		cout << "|                2.����                     |" << endl;
		cout << "|                3.�˳���¼                 |" << endl;
		cout << "--------------------------------------ѡ��";
		cin >> choice;
		switch (choice)
		{

			//�鿴�ѿ��γ�
			case 1:
			{
				cout << endl;
				cout << "----------------�ѿ��γ�------------------" << endl;
				for (int i = 0; i < 5; i++)
				{
					if (course[i].Getstate() == 1)
					{
						cout << "              " << i+1 << "." << course[i].Getname() << "                  " << endl;
					}
					
				}
				break;
			}

			//����
			case 2:
			{	
				cout << endl;
				cout << "----------------����γ�------------------" << endl;
				for (int i = 0; i < 5; i++)
				{
					if (course[i].Getstate() == 0)
					{
						cout << "              " << i+1 << "." << course[i].Getname() << "                  " << endl;
					}

				}
				cout << "--------------------------------------ѡ��";
				int tempi;
				cin >> tempi;
				course[tempi-1].Setstate(1);
				cout << "----------------����ɹ�------------------" << endl;
				break;
			}

			//�˳�
			case 3:
			{
				isquit = 1;
				break;
			}

			//����ѡ��
			default:
			{
				cout << "-------------��Чѡ�---------------" << endl;
				isquit = 0;
				break;
			}

		}
	}
}