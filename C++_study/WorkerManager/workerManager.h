#pragma once
#include <iostream>
#include <fstream>
#include "Worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#define  FILENAME "WorkerFile.txt"

using namespace std;

//* ְ��������
class WorkerManager
{
public:

	//* ���캯��
	WorkerManager();

    //* չʾ�˵�
    void Show_Menu();

	//* �˳�����
	void exitSystem();

	//* ����ְ��
	void Add_Emp();	

	//* �����ļ�
	void save();

	//* ��ȡ�ļ�ͳ������
	int get_WorkerNum();
	
	//* ��ʼ��Ա������
	void init_Worker();

	//* ��ʾְ��
	void Show_Worker();

	//* ɾ��ְ��
	void Del_Worker();

	//* ����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	//* �޸�ְ��
	void Mod_Worker();

	//* ��������
	~WorkerManager();

	//* ��¼�ļ��е���������
	int m_WorkerNum;

	//* Ա�������ָ��
	Worker ** m_WorkerArray;

	//* ��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
};
