#include <iostream>
#include <string.h>

using namespace std;

//* ˳��ѡ��ѭ��
int main(void)
{
	int a = 10;
	float b = 11;
	int c = 5;
	 
	// ֤����ͬ�������Ϳ��ԱȽϴ�С
	if (a < b)
	{
		cout << "�ǵ�a<b" << endl;
	}
	else if (a == b)
	{
		cout << "emmmm" << endl;
	}
	else
	{
		cout << "ɶѽ����" << endl;
	}

	switch (a)//ֻ�������ͻ����ַ���
	{
        case 1:break;
        case 2:break;
        case 3:break;
        default:break;
	}
	
	while (a--)
	{
		cout << "a" << endl;
	}
 
	do
    {
		a++;
    }while(a < 20);
    
	return 0;
}
