#include <iostream>

using namespace std;

//* ���� () ��ʹ��ʱ����ú������ʱ���Ϊ�º���

class MyPrint
{
public:
    void operator() (string test)
    {
        cout << test << endl;
    }
};

//* �������أ��º������ǳ����
class MyAdd
{
public:
    int operator() (int A, int B)
    {
        return A + B;
    }
};

void Func(string test)
{
    cout << test << endl;
}

int main()
{
    MyPrint p1;
    p1("���Ƿº������ã�ʵ��Ϊ��������");

    MyAdd Add;
    int Ret = Add(100, 120);
    cout << "Ret = " << Ret << endl;

    Func("����������������");

    //! ������������:���� + ()��ִ���굱ǰ��������ͷ�
    cout << MyAdd()(20, 30) << endl;

    return 0;
}
