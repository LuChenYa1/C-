#include <iostream>

using namespace std;

//! ������������Ѿ���Ĭ�ϲ������������岻�ܳ���Ĭ�ϲ���
//! ���䣺���������Ͷ����У�����ͬһ���βΣ�ֻ��������һ����Ĭ�ϲ���
int Func(int a, int b, int c = 30);

//! ���ĳ��λ���Ѿ�����Ĭ��ֵ��������λ�ö�Ҫ��Ĭ��ֵ
int Func(int a, int b = 20, int c)
{
    return a + b + c;
}

int main(void)
{
    int Sum = Func(10, 30, 20);
    cout << "Sum = " << Sum << endl;
    Sum = Func(1);
    cout << "Sum = " << Sum << endl;

    return 0;
}
