#include <iostream>

using namespace std;

//* ֻҪͬ�����ͼ�������

//! ����͸����Ա���ֿ�����ͬ������Ҫ�ڳ�Ա����ǰ���������������ø���ͬ����Ա
//! ע��:��ͬ��ʱ�������������ֱ�ӵ��ø����Ա������Ȩ�޳��⣩
//* ����֮��ͬ��Ҳ������������
//* ��ʹ���ں������أ�������͸���ͬ����Ա�������Ͳ�һ����������Ҫ����������ܵ��ø���ͬ����Ա

//* ��̬��Ա�ͷǾ�̬��Ա�Ӹ�ͬ��ʱ���ʷ�ʽ����һ��������̬��Ա����ֱ��ͨ�������

class Father
{
public:
    Father()
    {
        a = 100;
    }
    void Func(void)
    {
        cout << "���ø����Ա�������޲Σ�" << endl;
        a = 333;
        Father::a = 444;
    }
    void Func(int a)
    {
        cout << "���ø����Ա�������вΣ�" << endl;
        a = 333;
        Father::a = 444;
    }
    static void Func(int a, int b)
    {
        cout << "���ø��ྲ̬��Ա�������вΣ�" << endl;
    }
    int a;
    int Father_Num;
    static int Num;
};

class Son : public Father
{
public:
    Son()
    {
        a = 200;
        b = 300;
    }
    void Func(void)
    {
        cout << "���������Ա����" << endl;
        a = 111;
        Father::a = 222;
    }
    static void Func(int a, int b)
    {
        cout << "�������ྲ̬��Ա�������вΣ�" << endl;
    }
    int a;
    int b;
    static int Num;
};

int main()
{
    Son son1;

    son1.Func();
    cout << "����ĳ�Աa:" << son1.Father::a << endl;
    cout << "����ĳ�Աa:" << son1.a << endl;

    son1.Father::Func();
    cout << "����ĳ�Աa:" << son1.Father::a << endl;
    cout << "����ĳ�Աa:" << son1.a << endl;

    son1.Father::Func(2);

    //* ��ͬ��ʱ���ø����Ա����Ҫ��������
    son1.Father_Num = 12;

    //! ���¶Ծ�̬ͬ����Ա�ĵ����﷨û�����⣬��������������ʾδ���壺��Son::Num������Father::Num��
    // cout << "ͨ��������ʸ���ľ�̬��Ա����Num:" << son1.Father::Num << endl;
    // cout << "ͨ���������ʸ���ľ�̬��Ա����Num:" << Son::Father::Num << endl;
    // cout << "ͨ��������������ľ�̬��Ա����Num:" << Son::Num << endl; 
    // cout << "ͨ�������������ľ�̬��Ա����Num:" << son1.Num << endl;

    // //* ͨ���������ʸ���ľ�̬��Ա����
    // Son::Father::Func(10, 20);
    // //* ͨ��������������ľ�̬��Ա����
    // Son::Func(20, 30);
}
