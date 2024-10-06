#include <iostream>

using namespace std;

class Person
{
private:
    string Name;
    int Age;
public:
    Person(string Name, int Age)
    {
        this->Name = Name; 
        this->Age = Age;
    }

    //* == ��ȹ�ϵ���������
    bool operator== (Person & p)
    {
        if(this->Name == p.Name && this->Age == p.Age)
            return true;
        else
            return false;
    }
    //* ��= ���ȹ�ϵ���������
    bool operator!= (Person & p)
    {
        if(this->Name != p.Name || this->Age != p.Age)
            return true;
        else
            return false;
    }
};

int main()
{
    Person p1("����", 20);
    Person p2("����", 18);
    Person p3("����", 20);

    if(p1 == p2)
        cout << "��������һ����" << endl;
    else
        cout << "������������" << endl;

    if(p1 != p2)
        cout << "������������" << endl;
    else
        cout << "��������һ����" << endl;

    return 0;
}
