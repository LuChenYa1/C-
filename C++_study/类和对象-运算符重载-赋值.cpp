#include <iostream>

using namespace std;

//* ��ֵ��������ص���;��ʵ�����

class Person
{
private:
    int * pAge;

public:
    Person(int Age)
    {
        pAge = new int (Age);
    }
    ~Person()
    {
        if(pAge == NULL)
            return;
        delete pAge;
        cout << "�ͷŶ����ռ�" << endl;
    }

    int ReadAge(void)
    {
        return *pAge;
    }

    //* ���� ��ֵ�����(ʵ�����)
    Person & operator=(Person & p)
    {
        // if(pAge != NULL)
        //     delete pAge;
        // pAge = new int(p.ReadAge());
        //...������ָ�������ֵ

        *pAge = p.ReadAge();
        //...������ָ�������ֵ
        return p;//Ҳ����д *this
    }
};

int main()
{
    Person p1(18);
    cout << "p1��������" << p1.ReadAge() << endl;

    Person p2(20);
    cout << "p2��������" << p2.ReadAge() << endl;

    //! ǳ������ֻ�Ǽ򵥵ؽ����б�����ֵ���и��ƣ�����ָ�����
    //! �������⣺����������ָ�����ָ��ͬһ��ռ䣬������ִ�������������ظ��ͷ�ͬһ��ռ�
    p2 = p1;
    cout << "p1��������" << p1.ReadAge() << endl;
    cout << "p2��������" << p2.ReadAge() << endl;

    Person p3(22);
    p1 = p2 = p3;

    return 0;
}
