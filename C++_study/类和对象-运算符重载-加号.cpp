#include <iostream>

using namespace std;

//! �Ӻ���������أ�ֻ��������������ӣ��������������ĸ�������

//! ��д����Result = A + B;
//* ��ʡ��д��ʱҪ�����޷���𾿾�ʹ�õ��ĸ����غ��������������ͬһ������Ĳ�ͬ���غ���Ҫ����������Ͳ�ͬ

class Person
{
public:
    int A;
    int B;
    //* ��Ա�������ؼӺţ�ʵ��������ֵ��Ӧ���
    // Person operator+(Person &p)
    // {
    //     Person Temp;
    //     Temp.A = this->A + p.A;
    //     Temp.B = this->B + p.B;
    //     return Temp;
    // }
};

//* ȫ�ֺ������ؼӺţ�ʵ��������ֵ��Ӧ���
Person operator+(Person & p1, Person & p2)
{
    Person Temp;
    Temp.A = p1.A + p2.A;
    Temp.B = p1.B + p2.B;
    return Temp;
}

//* ȫ�ֺ������ؼӺţ�ʵ�ֶ��󣨵ĳ�Ա�������ͱ������
Person operator+(Person & p1, int a)
{
    Person Temp;
    Temp.A = p1.A + a;
    Temp.B = p1.B + a;
    return Temp;
}

int main()
{
    Person p1;
    p1.A = 10;
    p1.B = 20;

    Person p2;
    p2.A = 10;
    p2.B = 20;

    Person p3;
    p3.A = 100;
    p3.B = 200;

    // Person p4 = p1.operator+(p2);
    Person p4 = p1 + p2;
    cout << "A = " << p4.A << endl;
    cout << "B = " << p4.B << endl;

    // p4 = operator+(p1, p3);
    p4 = p1 + p3;
    cout << "A = " << p4.A << endl;
    cout << "B = " << p4.B << endl;

    p4 = p4 + 3;
    cout << "A = " << p4.A << endl;
    cout << "B = " << p4.B << endl;

    return 0;
}
