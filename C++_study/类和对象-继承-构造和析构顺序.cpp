#include <iostream>

using namespace std;

//* ����ʵ��������ʱ����һ���Ǽ̳и�������г�Ա����ִ�и���Ĺ��캯����Ȼ��ص�����ִ���Լ��Ĺ��캯��
//* �ͷ��������ʱ������ջ���߼���������������ִ�������������������ִ�и������������

class Father
{
public:
    Father()
    {
        cout << "ִ�и��๹�캯��" << endl;
    }
    ~Father()
    {
        cout << "ִ�и�����������" << endl;
    }

    int a;
};

class Son : public Father
{
public:
    Son()
    {
        cout << "ִ�����๹�캯��" << endl;
    }
    ~Son()
    {
        cout << "ִ��������������" << endl;
    }
    int a;
    int b;
};

int main()
{
    cout << "���������" << sizeof(Son) << "���ֽ�" << endl;//�̳��Ը���ı���a + ���౾����Ի��ı���b

    Son son1;

}
