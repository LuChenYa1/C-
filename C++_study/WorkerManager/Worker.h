// #pragma once  //����ļ��������������������
#ifndef WORKER_H
#define WORKER_H

#include<iostream>
#include<string>
using namespace std;

//ְ���������
class Worker
{
public:

	//��ʾ������Ϣ
	virtual void showInfo() = 0;
	//��ȡ��λ����
	virtual string getDeptName() = 0;

	int m_Id; //ְ�����
	string m_Name; //ְ������
	int m_DeptId; //ְ�����ڲ������Ʊ��
};

#endif // WORKER_H
