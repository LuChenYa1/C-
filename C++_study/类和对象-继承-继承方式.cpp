#include <iostream>

using namespace std;

//! �̳л����﷨��class ������ ���̳з�ʽ ������
//* ����-����
//* ����-������

//! �����˽�г�Ա���������κη�ʽ�̳ж��޷�����
//! ����Ȩ�����ȼ���ͣ�˽��Ȩ�����ȼ����
//* ���������Թ���Ȩ�޼̳и��࣬���Աȫ������ԭ�������ԣ�˽�г�Ա���̳к󲻿ɷ��ʣ��������κ�Ȩ�ޣ�
//* �����Ա���Ȩ�޼̳и��࣬���๫����Ա������ౣ����Ա�����ౣ����ԱȨ�޲���
//* ������˽��Ȩ�޼̳и��࣬����Ĺ�����Ա�ͱ�����Ա����Ϊ˽�г�Ա

//����һ������ 
class Base
{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Derived_1 : public Base
{
public:
    void Func(void)
    {
        //* �����޷����ʸ���˽��Ȩ�޳�Ա
        // c = 30;
        a = 10;//����
        b = 20;//����
    }
};

class Derived_2 : protected Base
{
public:
    void Func(void)
    {
        //* �����޷����ʸ���˽��Ȩ�޳�Ա
        // c = 30;
        a = 10;//����
        b = 20;//����
    }
};

class Derived_3 : private Base
{
public:
    void Func(void)
    {
        //* �����޷����ʸ���˽��Ȩ�޳�Ա
        // c = 30;
        a = 10;//˽��
        b = 20;//˽��
    }
};

class Derived_4 : private Derived_3
{
public:
    void Func(void)
    {
        //* ȫ��˽��
        // c = 30;
        // a = 10;
        // b = 20;
    }
};

int main()
{
    Derived_1 d1;
    d1.a = 20;

    Derived_2 d2;
    //d2.a = 30;

    Derived_3 d3;
    // d3.a = 40;

    return 0;
}
