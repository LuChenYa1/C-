#include <iostream>

using namespace std;

//! Ŀǰ�ܽᣬֻҪ�ǳ�Ա�����������Ƿ��Ǿ�̬�������洢�ڶ���ռ䣬ֱ�����࣬�������Ψһ�ĳ�Ա������ʵ������Ҳ����
//* ��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ����루����ʵ����
//* ���캯��Ҳ���ڷǾ�̬��Ա����



class Person
{
public:
    void ShowClassName(void)
    {
        cout << "���� person ��" << endl;
    }

    void ShowPersonAge(void)
    {
        if(this == NULL)
            return ;
        cout << "Age = " << Age << endl;//this->Age
    }

private:
    int Age;
};

int main()
{
    Person * p = NULL;
    p->ShowClassName();
    //! ��Ϊ��Ա�����������޶��󶼴���Ψһ��ʵ�������Կ�ָ����Է��ʳ�Ա����
    //* ���ǣ�����ǿ�ָ�룬��˵��û��ָ��Ķ������Ӧ�ķǾ�̬��Ա������������
    //* ���ԣ���ָ����ʵĳ�Ա������������˷Ǿ�̬��Ա�������ͻᱨ����Ҫ���� this ָ�뱣֤�ǿյ���
    p->ShowPersonAge();

    return 0;
}


