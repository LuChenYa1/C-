#include<iostream>
#include "workerManager.h"
#include "Worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;

int main() 
{
	WorkerManager wm;
	int choice = 0;
	while (1)
	{
		//չʾ�˵�
		wm.Show_Menu();
		cout << "����������ѡ��:" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: //�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1: //���ְ��
			wm.Add_Emp();
			break;
		case 2: //��ʾְ��
			wm.Show_Worker();
			break;
		case 3: //ɾ��ְ��
			wm.Del_Worker();
			break;
		case 4: //�޸�ְ��
			wm.Mod_Worker();
			break;
		case 5: //����ְ��
			break;
		case 6: //����ְ��
			break;
		case 7: //����ļ�
			break;
		default:
			system("cls");
			break;
		}
	}


	return 0;
}

