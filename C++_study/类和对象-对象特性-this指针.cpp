#include <iostream>

using namespace std;

//! �Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ����루����ʵ����
//* ������зǾ�̬��Ա�������൮���������޶����޹أ�����һ������Ҳû�У���Щ�������ɴ���
//* ���캯��Ҳ���ڷǾ�̬��Ա����

//! thisָ��������ÿһ���Ǿ�̬��Ա�����ڣ��ĸ���������������ĳ�Ա��������ָ���ָ��ö���,���ó�Ա����ʱҲ���õ� this ָ��
//! Person * const this
//* this ָ�뱾�ʺ�����һ����ָ�볣�������ɱ���Ϊ�޸�
//* ��;��
//* 1�� ���βκͺ�����Ա����ͬ��ʱ����thisָ����Ϊ����
//* 2������ķǾ�̬��Ա�����з��ض�������ʹ�� return * this;

class Person
{
private:
    int Age;

public:
    Person(int Age)
    {
        //* ÿ�ε��ó�Ա����ʱ��Age === this->Age
        this-> Age = Age;//* 1
    }

    int ReadAge(void)
    {
        return Age;
    }

    Person AddAge(Person &p)
    {
        this->Age += p.ReadAge();
        return *this;//* 2  ע�⣺ֻҪ�Ƿ���ֵ����ֻ�ܱ�֤���ص�ֵ�ǶԵģ���װ��ֵ�Ŀռ䲻��ԭ���Ŀռ䣬�����´����Ŀռ�
    }
    Person & AddAge_1(Person &p)//* 2 �Ľ������������Ҫ�Ĵӷ��صĿռ��ɷ���ֵ�����������ͱ�����ã� ��&
    {
        this->Age += p.ReadAge();
        return *this;//*
    }
};

int main(void)
{
    Person p = 10;
    Person p1 = 10;
    cout << p.ReadAge() << endl;
    cout << p.AddAge(p).ReadAge() << endl;
    //! ��ʽ���
    p1.AddAge(p).AddAge(p).AddAge(p).AddAge(p);//! ִ��һ�κ󷵻صĶ������µĶ��󣬲���ԭ����p1������Ageֻ����һ��ֵ�������30����90
    cout << p1.ReadAge() << endl;
    p1.AddAge_1(p).AddAge_1(p).AddAge_1(p);//30 + 20 + 20 + 20
    cout << p1.ReadAge() << endl;

    return 0;
}
