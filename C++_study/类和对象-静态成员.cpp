#include <iostream>

using namespace std;

//* ��̬��Ա�����������࣬������ĳһ������Ķ���
//* ������Ķ�����ͬһ�ݾ�̬�ռ�
//* ��̬��Ա����ȫ�������ڱ���׶η����ڴ�
//* ��̬��Ա����ͨ��Աһ�����з���Ȩ�ޣ�˽�����Եľ�̬��Ա���ⲻ��ֱ�ӷ���

class Person
{
public:
    static int A;//TODO   ���������������ʼ��
    int C;
    static void Func()
    {
        A = 111;
        //! ��̬��Ա�����������÷Ǿ�̬��Ա
        //* ԭ�򣺾�̬��Ա���������࣬������ĳ��������˵��ú���ʱ���޷����ַǾ�̬��Ա���������ĸ�����
        // C = 222;
        cout << "��̬��Ա��������" << endl;
    }

private:
    static int B;
};
int Person::A = 10;
int Person::B = 20;

int main()
{
    //* ͨ����������
    Person::Func();
    cout << Person::A << endl;

    //* ͨ���������
    Person p;
    p.A = 100;
    cout << p.A << endl;
    p.Func();
    cout << p.A << endl;

    // cout << p.B << endl;

    return 0;
}
