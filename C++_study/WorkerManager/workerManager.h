#pragma once
#include <iostream>
#include "Worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define  FILENAME "WorkerFile.txt"

using namespace std;

//* ְ��������
class WorkerManager
{
public:

	//���캯��
	WorkerManager();

    //չʾ�˵�
    void Show_Menu();

	//�˳�����
	void exitSystem();

	//����ְ��
	void Add_Emp();	

	//�����ļ�
	void save();


	
	//��������
	~WorkerManager();

	//��¼�ļ��е���������
	int m_WorkerNum;

	//Ա�������ָ��
	Worker ** m_WorkerArray;
};
