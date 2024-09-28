#include <iostream>

using namespace std;

//! ����Ȩ�������֣�(Ĭ��˽��Ȩ��)
//* 1. public    ����Ȩ��  ���ڿ��Է��ʣ�������Է���
//* 2. protected ����Ȩ��  ���ڿ��Է��ʣ����ⲻ���Է���
//* 3. private   ˽��Ȩ��  ���ڿ��Է��ʣ����ⲻ���Է��� ���Ӳ����Է��ʸ��ף��̳У�

//* struct �� class ���񣬵�struct �����г�Ա��������Ĭ�Ϲ���Ȩ��

//! ������ö�дȨ�ޣ�
//* 1������������Ϊ˽��/����
//* 2��������Ϊ�������ԣ�����������ж�д

class Test
{
    int a;
};

class Person
{
public:
    string ReadName()
    {
        return Name;
    }
    void SetAge(int S_Age)
    {
        if(S_Age < 0 || S_Age > 150)
        {
            cout << "�������ò���������������" << endl;
            return;
        }
        Age = S_Age;
    }
    double ReadHeight()
    {
        return Height;
    }
    void SetHeight(double S_Height)
    {
        Height = S_Height;
    }

    //* ʹ�ó�Ա�����ж����������������Ƿ����
    bool isSameHeightByClass(Person C)//Ҳ�������ã�����û��Ҫ
    {
        if(Height == C.ReadHeight())
            return true;
        return false;
    }

private:
    string Name;//ֻ��
    int Age;//ֻд
    double Height;//�ɶ���д
};

//* ʹ��ȫ�ֺ����ж����������������Ƿ���� 
bool isSameHeight(Person C1, Person C2)//Ҳ�������ã�����û��Ҫ
{
    if(C1.ReadHeight() == C2.ReadHeight())
        return true;
    return false;
}

int main(void)
{
    //Ĭ��˽��Ȩ�ޣ���Ա���ɷ���
    // Test T1;
    // T1.a = 1;

    Person P1;
    cout << "������" <<  P1.ReadName() << endl;
    P1.SetAge(151);
    P1.SetHeight(157);
    cout << "��ߣ�" <<  P1.ReadHeight() << endl;

    Person P2;
    P2.SetHeight(156);
    // bool ret = isSameHeight(P1, P2);
    bool ret = P1.isSameHeightByClass(P2);
    if(ret == true)
        cout << "���һ��" << endl;
    else
        cout << "��߲�һ��" << endl;
    return 0;
}
