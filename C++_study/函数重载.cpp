#include <iostream>

using namespace std;

//! �������ص�������
//! 1������������ͬ
//! 2��������������ͬ
//! 3���βεĸ�����ͬ / ���Ͳ�ͬ / ���͵�˳��ͬ
//! 4���޷����ؽ�������ֵ�������ֵĺ���
//! ���ɣ����뱣֤�����к�������ʱ������������ȷ֪�����õ����ĸ�����������������

// void Func(void)
// {
//     cout << "����Func" << endl;
// }

// //* void Func(int a = 10) ���䱻����ʹ��Ĭ��ֵʱ���� Func(); ����void Func(void) �ĵ��÷��������������ֶ�����
// void Func(int a)
// {
//     cout << "����Func(int a)" << endl;
// }

// void Func(double a)
// {
//     cout << "����Func(double a)" << endl;
// }

// void Func(double a, int b)
// {
//     cout << "����Func(double a, int b)" << endl;
// }

// void Func(int a, double b)
// {
//     cout << "����Func(int a, double b)" << endl;
// }

//* �޷����ؽ�������ֵ�������ֵĺ���
// int Func(int a, double b)
// {
//     cout << "����Func(int a, double b)" << endl;
// }

//* ������Ϊ��������ʱ��const �Ͳ��� const ��ͬʱ���غ���
void Func(int &a)//ֻ���ܱ�����
{
    cout << "����Func(int a)" << endl;
}

void Func(const int &a)//* const int &a �������ͳ������ܽ��գ�����������ڲ��� const ���β� int &a �����غ���ʱ��ֻ���ճ�����Ϊ������������
{
    cout << "����Func(const int a)" << endl;
}

int main(void)
{
    // Func(1.23,1);
    // Func();

    int a = 10;
    int &b = a;
    const int &c = 10;
    const int &d = a;//* ʹ��ԭ��a��Ϊ����ʱ�����޸�ֵ��ʹ������b��Ϊ����ʱΪ�����������޸�
    a = 20;
    b = 30;
    // c = 40;

    Func(a);
    Func(10);

    return 0;
}
