#include <iostream>

using namespace std;


class Animal
{
public:
    //! �ӹؼ���virtual �������ֽ����ӿ����1���ֽڱ��8���ֽڣ���Ϊ����һ��vfptr ָ��
    //* v:virtual f:function ptr:pointer
    //* vfptr ָ��ָ��Ŀռ� vftable װ��dospeak() �ĺ������ַ����û��������д�ú��������������ַΪ����ԭװ�ĺ������ַ
    virtual void doSpeak()
    {
        cout << "������˵��" << endl;
    }
};

class Cat : public Animal
{
public:
    //! ������д�˸���� doSpeak������
    //! ������̳еĸ������ vfptr ָ��ָ��Ŀռ��װ�ŵĺ������ַ��Ϊ����� doSpeak �������ַ��ԭֵ������
    void doSpeak()
    {
        cout << "Сè��˵��" << endl;
    }
};

class Dog : public Animal
{
public:
    void doSpeak()
    {
        cout << "С����˵��" << endl;
    }
};

void Test(Animal & animal)
{
    //* ���β�Ϊ�������ʱ�������ָ�������ָ�����������˻��ǻ��������ִ�к���
    //* ��Ϊ doSpeak �������麯���������Ҫ�ҵ� vfptr ָ�룬����������ָ��ָ��Ŀռ���װ��������д�ĺ������ַ�����ִ������� doSpeak ����
    animal.doSpeak();
}

int main()
{
    Animal animal;
    Cat cat;
    Dog dog;

    Test(animal);
    Test(cat);
    Test(dog);//��ͬ��

    cout << "Animal������" << sizeof(Animal) << "���ֽ�" << endl;

    return 0;
}
