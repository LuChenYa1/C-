#include <iostream>

using namespace std;

//* �������A��Ϊ��B��Ա����������bʱ��һ������B��ʹ�ó�ʼ���б�ֵ�����A��������Ա��Ȼ���ٽ��뻨����ִ��ʣ������
//* �ʣ�����A����ջ��ִ�й��캯������b����ջ��ջ���Ƚ������������b�ȳ�ջ��ִ��������������Ȼ��A��ջ

class Phone
{
public:
    string Name_Phone;

    Phone()
    {
        cout << "����PhoneĬ���޲ι��캯��" << endl;
    }
    Phone(string Str):Name_Phone(Str)
    {
        cout << "����Phone�вι��캯��" << endl;
    }

    ~Phone()
    {
        cout << "����Phone��������" << endl;
    }
};

class Person
{
public:
    int A;
    int B, C;
    Phone ph;

    // Person():A(10),B(20), C(30)
    // {

    // }

    Person(int a, int b, int c, string Str):A(a),B(b), C(c), ph(Str)
    {
        cout << "����Person�вι��캯��" << endl;
        // ph = Str;
        //! �������A��Ϊ��B��Աʱ��B�Ĺ��캯����Ӧ��������ʹ�ó�ʼ���б��A���и�ֵ����Ҫ�ڻ������ڸ�ֵ
        //* ԭ���ڻ������ڸ�ֵ����Aʱ������A���������ι���������������ҵ���˳����Ҳ���
    }

    ~Person()
    {
        cout << "����Person��������" << endl;
    }
};

void Test_01(void)
{
    // Person p;
    Person p(10, 20, 30, "ƻ��ProMax");

    cout << "A:" << p.A << endl;
    cout << "B:" << p.B << endl;
    cout << "C:" << p.C << endl;
}

int main(void)
{
    Test_01();
    return 0;
}
