#include <iostream>

using namespace std;

//* ostream : �����
//* ostream ����ֻ����һ������cout

class Person
{
    friend ostream & operator<< (ostream &cout, Person &p);
public:
    Person()
    {
        A = 10;
        B = 20;
    }
private:
    int A;
    int B;
    //! ��Ա������������ <<  
    //* ԭ�򣺵���ʱ p.operator << (cout)������p1�����򻯺�Ϊ p << cout��p1������Ȼ����
};

//* ʵ�� cout << p ����ӡ����p �����г�Ա����
ostream & operator<< (ostream &out, Person &p)//* ע��һ��Ҫ���ã��������صĲ��� cout ����, ��cout ֻ����һ��
{
    out << "A = " << p.A << "," << "B = " << p.B;
    return out;
}

int main()
{
    Person p1;
    
    cout << p1 << endl;//* ��ʽ���
    cout << "..." << endl;

    return 0;
}
