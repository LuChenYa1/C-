#include <iostream>
#include <string.h>
using namespace std;

// x64ϵͳ�У�ָ���ǰ��ֽ�
//����
//1��int_4 (-32768~32767)
//2��short_2
//3��long_4  ע��Windows��4�ֽڣ�Linux��4�ֽڣ�32λ����8�ֽڣ�64λ��
//4��long long_8

int main()
{
	//������2
	short range1 = -32768;
	cout << range1 << endl;
	std::cout << "hello C++" << std::endl;
	std::cin.get();//��ȡһ�ΰ�������

	//������4
	float num = 3.1415926f;//C++�����С��Ĭ����λ��������λ
	cout << num << "��" << sizeof(num) << "���ֽ�" << endl;

	//�ַ�1
	char num2 = 'a';
	cout << num2 << " " << (int)num2 << endl;

    //ֻҪ�õ����ַ�������Ҫ��ͷ�ļ�
	//�ַ���Cд��,Ч�ʸ���
	char str[] = "hello world";
	//�ַ���C++д��
	string str1 = "hello world";
	cout << str << endl;
	cout << str1 << endl;

	//��������(1/0)������0����1
	bool flag = true;
	cout << flag << "ռ" << sizeof(flag) << "���ֽ�" << endl;
	return 0;
}
