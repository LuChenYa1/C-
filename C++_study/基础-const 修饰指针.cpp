#include <iostream>

using namespace std;

//! const ���ڷ�ֹ�����

int main(void)
{
    int A = 10;
    int B = 20;
    int C = 30;
    const int * p = &A;//* ����ָ�룬const ���� int ������ p ָ��Ŀռ䲻�ܱ��޸ģ���p��������޸�
    int * const p_1 = &B;//* ָ�볣����const ���� p_1 ������ p�����ܱ��޸ģ��� p ָ��Ŀռ�����޸�
    
    const int * const p_2  = &C;//* const ͬʱ���� int �� p_2, ����ָ�뱾�����ָ��Ŀռ䶼���ܱ��޸�

    //������������
    // *p = 20;
    // p = &B;
    // *p_1 = 30;
    // p_1 = &C;
    // *p_2 = 40;
    // p_2 = &B;

    return 0;
}
