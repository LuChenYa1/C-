#include <iostream>

using namespace std;

//! �ܽ᣺��Ȼ�ṩ�˺���ģ�壬��þͲ�Ҫ�ṩ��ͨ�������������׳��ֶ����ԣ�Ҳ��ɺ�������

void myPrint(int a, int b)
{
	cout << "��������ͨ����" << endl;
}

template<typename T>
void myPrint(T a, T b) 
{ 
	cout << "������ģ��" << endl;
}

template<typename T>
void myPrint(T a, T b, T c) 
{ 
	cout << "���������ص�ģ��" << endl; 
}

void test01()
{
	//* 1���������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
	// ע�� ������߱�����  ��ͨ�������еģ���ֻ������û��ʵ�֣����߲��ڵ�ǰ�ļ���ʵ�֣��ͻᱨ���Ҳ���
	int a = 10;
	int b = 20;
	myPrint(a, b); //������ͨ����

	//* 2������ͨ����ģ������б���ǿ�Ƶ��ú���ģ�壨< >��Ҳ������д���������ͣ�
	myPrint<>(a, b); //���ú���ģ��

	//* 3������ģ��Ҳ���Է�������
	int c = 30;
	myPrint(a, b, c); //�������صĺ���ģ��

	//* 4�� �������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2); //���ú���ģ��
}

int main() 
{
	test01();

	return 0;
}
