#include <iostream>

using namespace std;

//! Ŀǰ�׶��ò���ռλ����
//! ռλ����Ҳ������Ĭ��ֵ
//! ���ú���ʱ�������ռλ����дֵ�����û��Ĭ��ֵ��

//! �����ԣ��������������β�������һ����ռλ����ʱ�������ض������
void Func(int a, int)
// void Func(int a, double b, double)
{
    cout << "This is func" << endl;
}

int main(void)
{
    // Func(10, 1, 2.34);
    Func(10, 2);
    return 0;
}
