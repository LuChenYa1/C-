#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "= " << i*j << "\t";
			//break;����break����continue����ֻ����Ե�ǰ���ڵ������ѭ����������������ֹѭ��
		}
		cout << "\n";
	}
	return 0;
}
