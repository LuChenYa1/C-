#include "workerManager.h"

WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//�ļ����������
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl; //�������
		this->m_WorkerNum = 0;  //��ʼ������
		this->m_FileIsEmpty = true; //��ʼ���ļ�Ϊ�ձ�־
		this->m_WorkerArray = NULL; //��ʼ������
		ifs.close(); //�ر��ļ�
		return;
	}
	//�ļ����ڣ�����û�м�¼
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��!" << endl;
		this->m_WorkerNum = 0;
		this->m_FileIsEmpty = true;
		this->m_WorkerArray = NULL;
		ifs.close();
		return;
	}
	//�ļ����ڣ��Ҳ���
	//��ȡ�ļ��Ӷ�����ְ������
	this->m_FileIsEmpty = false;
	int num =  this->get_WorkerNum();
	cout << "���ã���ǰְ������Ϊ��" << num << endl;  //���Դ���
	this->m_WorkerNum = num;  //���³�Ա���� 

	//��ȡ�ļ��Ӷ����´洢ְ������ָ�������
	//����ְ������������
	this->m_WorkerArray = new Worker *[this->m_WorkerNum];
	//��ʼ��ְ��
	init_Worker();

	//���Դ���
	for (int i = 0; i < m_WorkerNum; i++)
	{
		cout << "ְ���ţ� " << this->m_WorkerArray[i]->m_Id
			<< " ְ�������� " << this->m_WorkerArray[i]->m_Name
			<< " ���ű�ţ� " << this->m_WorkerArray[i]->m_DeptId << endl;
	}
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

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;
	}
	else
	{
		cout << "�������" << endl;
	}

	save();

	system("pause");//�����жϣ����������������
	system("cls");//�������������������н��棨���ն˻�������ʾ�����ڣ�����Ļ
}

//����ְ����Ϣ���ļ���
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	cout << "���ļ�..." << endl;
	
	for (int i = 0; i < this->m_WorkerNum; i++)
	{
		ofs << this->m_WorkerArray[i]->m_Id << " " 
			<< this->m_WorkerArray[i]->m_Name << " " 
			<< this->m_WorkerArray[i]->m_DeptId << endl;
	}
	ofs.close();
	cout << "ְ����Ϣ��¼���ļ���" <<endl;
}

int WorkerManager::get_WorkerNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
        //��¼����
		num++;
	}
	ifs.close();

	return num;
}

void WorkerManager::init_Worker()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker * worker = NULL;
		//���ݲ�ͬ�Ĳ���Id������ͬ����
		if (dId == 1)  // 1��ͨԱ��
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) //2����
		{
			worker = new Manager(id, name, dId);
		}
		else //�ܲ�
		{
			worker = new Boss(id, name, dId);
		}
		//�����������
		this->m_WorkerArray[index] = worker;
		index++;
	}

	ifs.close();
}

//��ʾְ��
void WorkerManager::Show_Worker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < m_WorkerNum; i++)
		{
			//���ö�̬���ýӿ�
			this->m_WorkerArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_WorkerNum; i++)
	{
		if (this->m_WorkerArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

//ɾ��ְ��
void WorkerManager::Del_Worker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		//��ְ�����ɾ��
		cout << "��������Ҫɾ����ְ���ţ�" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1)  //˵��index��λ��������Ҫɾ��
		{
			Worker * DelWorker = m_WorkerArray[index];
			delete DelWorker;
			for (int i = index; i < this->m_WorkerNum - 1; i++)
			{
				this->m_WorkerArray[i] = this->m_WorkerArray[i + 1];
			}
			this->m_WorkerNum--;

			this->save(); //ɾ��������ͬ�����ļ���
			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}
	
	system("pause");
	system("cls");
}

//�޸�ְ��
void WorkerManager::Mod_Worker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{ 
			//���ҵ���ŵ�ְ��
			delete this->m_WorkerArray[ret];
			
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽�� " << id << "��ְ������������ְ���ţ� " << endl;
			cin >> newId;

			cout << "�������������� " << endl;
			cin >> newName;

			cout << "�������λ�� " << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker * worker = NULL;

			switch (dSelect)
			{
				case 1:
					worker = new Employee(newId, newName, dSelect);
					break;
				case 2:
					worker = new Manager(newId, newName, dSelect);
					break;
				case 3:
					worker = new Boss(newId, newName, dSelect);
					// Boss* pBoss = static_cast<Boss*>(worker);
					break;
				default:
					break;
			}
			
			//�������� ��������
			this->m_WorkerArray[ret]= worker;
			cout << "�޸ĳɹ���" << endl;

			//���浽�ļ���
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}

	//������� ����
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::Find_Worker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2������������" << endl;

		int select = 0;
		cin >> select;

		if (select == 1) //��ְ���Ų���
		{
			int id;
			cout << "��������ҵ�ְ����ţ�" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->m_WorkerArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if(select == 2) //����������
		{
			string name;
			cout << "��������ҵ�������" << endl;
			cin >> name;

			bool flag = false;  //���ҵ��ı�־
			for (int i = 0; i < m_WorkerNum; i++)
			{
				if (m_WorkerArray[i]->m_Name == name)
				{
					cout << "���ҳɹ�,ְ�����Ϊ��"
                           << m_WorkerArray[i]->m_Id
                           << " �ŵ���Ϣ���£�" << endl;
					
					flag = true;
					this->m_WorkerArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				//���޴���
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}

	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::Sort_Worker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ�� " << endl;
		cout << "1����ְ���Ž�������" << endl;
		cout << "2����ְ���Ž��н���" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_WorkerNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_WorkerNum; j++)
			{
				if (select == 1) //����
				{
					if (m_WorkerArray[minOrMax]->m_Id > m_WorkerArray[j]->m_Id)
					{
						minOrMax = j;//ָ��Сֵ
					}
				}
				else  //����
				{
					if (m_WorkerArray[minOrMax]->m_Id < m_WorkerArray[j]->m_Id)
					{
						minOrMax = j;//ָ����ֵ
					}
				}
			}

			if (i != minOrMax)
			{
				Worker * temp = m_WorkerArray[i];
				m_WorkerArray[i] = m_WorkerArray[minOrMax];
				m_WorkerArray[minOrMax] = temp;
			}
		}

		cout << "����ɹ�,�������Ϊ��" << endl;
		this->save();
		this->Show_Worker();
	}

}

//����ļ�
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//��ģʽ ios::trunc �������ɾ���ļ������´���
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_WorkerArray != NULL)
		{
            for (int i = 0; i < this->m_WorkerNum; i++)
			{
				if (this->m_WorkerArray[i] != NULL)
				{
					delete this->m_WorkerArray[i];
				}
			}
			this->m_WorkerNum = 0;
			delete[] this->m_WorkerArray;
			this->m_WorkerArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}

	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_WorkerArray != NULL)
	{
		delete[] this->m_WorkerArray;
	}	
}
