#include <iostream>

using namespace std;

//! ��������������ȫ������ջ��������
//!ȫ������ȫ�ֱ�������̬����������
//! ������const ���ε�ȫ�ֱ������ַ�������

int g_a = 10;
static int g_b = 20;

int * Fun(void);

int main(int argc, const char** argv)
{
    int a = 10;
    static int b = 20;
    const int c = 10;

    cout << "�ֲ�������ַ��" << &a << endl;
    cout << "�ֲ�������ַ��" << &c << endl;
    cout << "��̬�ֲ�������ַ��" << &b << endl;
    cout << "��̬ȫ�ֱ�����ַ��" << &g_b << endl;
    cout << "�ַ���������ַ��" << &"Hello World" << endl;
    cout << "ȫ�ֱ�����ַ��" << &g_a << endl;

    // int * p = Fun();
    // cout << *p <<endl;
    // cout << *p <<endl;
    //���ۣ�ջ���ռ䣨�����ڵľֲ��������βΣ����˺������̻ᱻ�ͷţ�VSstudio�������ᱣ������ֱ����һ��ָ��ָ������ݣ��ٴ�ָ��ͻᱨ��Ұָ�룩
    return 0;
}

int * Fun(void)
{
    int a = 10;//�������������a�Ŀռ�ͻᱻ�ͷ�
    return &a;//���صĵ�ַ���Ұָ��
}
