#include <iostream>

using namespace std;


//! C++���������������ԣ���װ���̳С���̬
//* �����������Ժ���Ϊ
//* ������ͬ���ʵĶ��󣬿��Գ���Ϊ��

//! ���е����Ժ���Ϊ��ͳһ��Ϊ��Ա
//* ����  ��Ա���� ��Ա����
//* ��Ϊ  ��Ա���� ��Ա����

//! ����ʵ����һ���������ö����ǿն�����ռһ���ֽ�
//* ���о�̬��Աͨͨ�洢��ȫ������ֱ������
//* �Ǿ�̬��Ա�У�ֻ�г�Ա�����洢�ڶ���ռ���

class Person
{
    //* ���Կն���ռ�ֽڴ�С��1��
};
class Person1//* �ö���ռ�ĸ��ֽ�
{
    int a;
    void Func(void)
    {
        //! ��Ա������ռ����ռ�
    }
};

const double PI = 3.14;

class Circle
{
    //* ����Ȩ��
    //����Ȩ��
    public:
    //* ����
    //* �뾶
    int Radius;
    //* ��Ϊ
    double GetPerimeter()
    {
        return 2 * PI * Radius;
    }
};

class Student
{
    //����Ȩ��
    public:
    //����
    string Name;
    int ID;
    //��Ϊ
    //��ʾ������ѧ��
    void ShowStudent()
    {
        cout << "����: " << Name << "  ѧ��:" << ID << endl;
    }
    //* ��������ֵ
    void SetName(string S_Name)
    {
        Name = S_Name;
    }
    //* ��ѧ�Ÿ�ֵ
    void SetID(int S_ID)
    {
        ID = S_ID;
    }
};

int main(void)
{
    Person1 p;
    cout << "Person p ռ" << sizeof(p) << "���ֽ�" << endl;

    //* ͨ���࣬��������Ķ���
    //* ʵ���� 
    Circle C1;
    //* ����������Ը�ֵ
    C1.Radius = 10;
    //* ������Ϊ����ȡ�����ܳ�
    cout << "Բ�İ뾶��" << C1.GetPerimeter() << endl;

    Student S1;
    // S1.Name = "����";
    S1.SetName("����");
    // S1.ID = 1;
    S1.SetID(1);
    S1.ShowStudent();
    Student S2;
    S2.Name = "����";
    S2.ID = 2;
    S2.ShowStudent();

    return 0;
}
