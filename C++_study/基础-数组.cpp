#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int array[5] = { 2, 4, 6, 8, 10 };
	cout << array[3] << endl;
	cout << sizeof(array) / 4 << endl;
	cout << &array[0] << endl;
	cout << &array[1] << endl;
	cout << sizeof(&array[2]) << endl;//* ����ϵͳָ��8�ֽ�

	int array2[][3] = {1, 3, 5, 7, 9, 11};
	cout << array2[1][2] << endl;
	cout << sizeof(array2) / 4 << endl;
	cout << &array2[0][2] << endl;
	cout << array2[1] << endl;//ȥ�������󣬱�����ǵ�ַ
	cout << sizeof(&array2[1][1]) << endl;//����ϵͳָ��8�ֽ�

	//ð������
	int b[10] = {23, 98, 45, 55, 39, 66, 38, 11, 78, 60};
	for (int i = 0; i < 10; i++)//b[i]ʼ�մ����b[0]��b[i]��С����
	{
		for (int j = i; j < 10; j++)
		{
			if (b[i] > b[j])
			{
				int temp;
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << endl;
	}
	return 0;
}
