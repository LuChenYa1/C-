#include "workerManager.h"

WorkerManager::WorkerManager()
{
	//��ʼ������
	this->m_WorkerNum = 0;

	//��ʼ������ָ��
	this->m_WorkerArray = NULL;
}

//��ʾ�˵�
void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//�˳�
void WorkerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");//���д���ɾ���������ʧ�ܣ�����
	exit(0);
}

//����ְ��:���ö�̬���飬��������ռ���װ�Ŷ����ָ�룬ÿ������ְ����Ҫ�����������пռ�
void WorkerManager::Add_Emp()
{
	cout << "����������ְ�������� " << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//�����¿ռ��С
		int newSize = this->m_WorkerNum + addNum;

		//�����¿ռ�
		Worker ** newSpace = new Worker*[newSize];//����Ҫ���ӵ�ְ�������������������ְ���ࣨ���ࣩ��ָ��

		//��ԭ�ռ������ݴ�ŵ��¿ռ���
		if (this->m_WorkerArray != NULL)
		{
			for (int i = 0; i < this->m_WorkerNum; i++)
			{
				newSpace[i] = this->m_WorkerArray[i];
			}
		}

		//����������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "������� " << i + 1 << " ����ְ����ţ�" << endl;
			cin >> id;

			cout << "������� " << i + 1 << " ����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1: //��ͨԱ��
				worker = new Employee(id, name, 1);
				break;
			case 2: //����
				worker = new Manager(id, name, 2);
				break;
			case 3:  //�ϰ�
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[this->m_WorkerNum + i] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_WorkerArray;

		//�����¿ռ��ָ��
		this->m_WorkerArray = newSpace;

		//�����µĸ���
		this->m_WorkerNum = newSize;

		//��ʾ��Ϣ
		cout << "�ɹ����" << addNum << "����ְ����" << endl;
	}
	else
	{
		cout << "�������" << endl;
	}

	system("pause");
	system("cls");
}

//����ְ����Ϣ���ļ���
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_WorkerNum; i++)
	{
		ofs << this->m_WorkerArray[i]->m_Id << " " 
			<< this->m_WorkerArray[i]->m_Name << " " 
			<< this->m_WorkerArray[i]->m_DeptId << endl;
	}
	ofs.close();
}


WorkerManager::~WorkerManager()
{
	if (this->m_WorkerArray != NULL)
	{
		delete[] this->m_WorkerArray;
	}	
}
