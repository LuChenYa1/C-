#include <iostream>

using namespace std;

void Swap(int &a, int &b);
// int & ReDef(void);//! ��Ҫ���ؾֲ�����������
int & Left(void);


//! ���õı�����ָ�볣���������ֱ����÷��Ǳ�����ʵ���ڲ���ָ�����

int main(void)
{
    int a = 10;
    int &b = a;//! �����������
    b = 22;//�ڲ�����b�����ã��Զ�ת��Ϊ *b = 22;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    //! ע������
    //!int &c;  ���ñ����ʼ��
    //! ���ó�ʼ���󣬲����ٸı�,Ҳû�з������Ը���
    int d = 20;
    b = d;//���Ǹ�ֵ���������Ǹ�������
    //&b = d;//&b �Ǳ�����ַ���ǳ������޷�ʵ�����ø���

    //! ���õ�Ӧ�ã���Ϊ�βΣ�ʵ��ַ����
    int i = 10, j = 20;
    Swap(i, j);
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    // int &e = ReDef();//���Ϸ������ռ��Ѿ����ͷŵľֲ�������������ʹ��ʱָ��Ƿ��ռ�
    // cout << "e = " << e << endl;

    //! ������Ϊ����ֵʱ�����ص��Ǳ�����������Ǳ�����ֵ
    int &e = Left();//����̬�����ռ������������ʶ������
    Left() = 1111;//������Ϊ��ֵ
    cout << "e = " << e << endl;

    //! ���ñ�����Ҫһ���Ϸ����ڴ�ռ�
    //int &name = 10;
    //! �����������const, �ŵ����ܸ�������������ȱ���ǲ����޸�
    const int & name = 10;//int temp = 10; const int & name = temp;
    //name = 20;
    cout << "name = " << name << endl;

    return 0;
}

//��������������
void Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//����ֵ
// int & ReDef(void)//! ��Ҫ���ؾֲ����������˾�̬������������,�ᱨ��
// {
//     int a = 10;
//     return a;
// }

//����ֵ
int & Left(void)
{
    static int v = 11;//��̬��������ȫ����
    return v;
}
