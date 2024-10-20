#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

char Array[11] = "HelloWorld";

//* �������ļ�  д�ļ�
void test01()
{
	//1������ͷ�ļ�

	//2���������������
	ofstream ofs("person.txt", ios::out | ios::binary);
	
	//3�����ļ�
	//ofs.open("person.txt", ios::out | ios::binary);

	Person p = {"����"  , 18};

	//4��д�ļ�
    //* ָ��д���������ͺ��ֽ���
	ofs.write((const char *)&p, sizeof(p));
    ofs.write(Array, 10);

	//5���ر��ļ�
	ofs.close();
}

//* ���ļ�
void test02()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}

	Person p1;
    //* ָ����ȡ�ֽ��������ݴ��λ��
	ifs.read((char *)&p1, sizeof(p1));

	cout << "������ " << p1.m_Name << " ���䣺 " << p1.m_Age << endl;
}

int main() 
{
	test01();
	test02();

	return 0;
}