#include <iostream>

using namespace std;

//! ��������������ȫ������ջ��������
//!ȫ������ȫ�ֱ�������̬����������
//! ������const ���ε�ȫ�ֱ������ַ�������

int g_a = 10;
static int g_b = 20;
  
// int * Fun_1(int b);
double * Fun_2(void);//�ѣ����뵥������
double * Fun_3(void);//�ѣ�����������


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

    // int * p_1 = Fun_1(3);
    // cout << *p_1 <<endl;
    //cout << *p_1 <<endl;
    //���ۣ�ջ���ռ䣨�����ڵľֲ��������βΣ����˺������̻ᱻ�ͷţ�VSstudio�������ᱣ������ֱ����һ��ָ��ָ������ݣ��ٴ�ָ��ͻᱨ��Ұָ�룩
    //! ���ԣ���Ҫ���ؾֲ������ĵ�ַ��û�����û��ᱨ��

    double * p_2 = Fun_2();
    cout << "����������ֵ�ǣ�" << *p_2 <<endl;
    delete p_2;//�ͷŶ����ռ� 
    cout << "����������ֵ�ǣ�" << *p_2 <<endl;//ָ��Ƿ��ռ䣬��ӡ���ֵ

    Fun_3();

    return 0;
}

// int * Fun_1(int b)//ջ
// {
//     b = 20;//�βκ;ֲ�����ͬ��
//     int a = 10;//�������������a�Ŀռ�ͻᱻ�ͷ�
//     return &a;//���صĵ�ַ���Ұָ��
// }

double * Fun_2(void)//�ѣ����뵥������
{
    double * p = new double(12.3);//new �ؼ������ڰѱ����ŵ������������ض�Ӧ���͵ĵ�ַ
    return p;
}

double * Fun_3(void)//�ѣ�����������
{
    double * p = new double[10];//�����Ŵ���������С���Ŵ�������
    for(int i = 0; i < 10; i++)
        p[i] = i + 100;
    for(int i = 0; i < 10; i++)
        cout << p[i] << endl;
    delete[] p;//Ҫ�ͷ�����Ļ����ü��������ţ�����ֻ�ͷŵ�һ�����ݿռ�
    return p;
}
