#include <iostream>
using namespace std;


class Person
{
// private:
public:
    int Age;
    mutable int Height;//* �ùؼ���ʹ�ó�Ա�������ڳ�����ͳ������ڱ��޸�

public:
    //! �������������޸ĳ�Ա����
    //* ԭ���ڳ�Ա������������� const�����ε��� this ָ�򣬵ȼ���ָ�볣�� this ǰ��� const �� const Person * const this
    //* ���ǣ�this ָ�뱾�����ָ��Ķ����ֵ���������޸ģ�thisָ��һ�����ز�д��
    void ShowPerson() const
    {
        // Age = 200;
        // this->Age = 100;
        // this = NULL;
        Height = 157;
    }
};

int main()
{
    Person p1;
    const Person p2 = p1;
    //! ������ֻ�ܵ��ó���������ʹ��ͨ����û���޸ĳ�Ա���ԣ�Ҳ���ܱ�����
    p2.ShowPerson();
    //* ������ĳ�Ա�����ɱ��޸ģ�����mutable ���ε����������ԭ��ͬ������
    // p2.Age = 300;
    p2.Height = 165;
    return 0;
}
