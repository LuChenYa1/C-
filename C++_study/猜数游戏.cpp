#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(void)
{
	int num;
	int guessnum;
	string repeat;
	srand((unsigned int)time(NULL));
	num = rand() % 100 + 1;
	cout << "������Ϸ:��Χ0 < num <= 100" << endl;
	cout << "�Ƿ������Ϸ?yes or no" << endl;
	cin >> repeat;
	if (repeat == "no")cout << "�ڴ��´�����" << endl;

	while (repeat == "yes")
	{
		cout << "���������µ�����" << endl;
		cin >> guessnum;
		if (guessnum > num)
		{
			cout << "����" << endl;
		}
		else if (guessnum < num)
		{
			cout << "С��" << endl;
		}
		else
		{
			cout << "��ȷ��" << endl;
			cout << "�Ƿ�������棿" << endl;
			cin >> repeat;
			if (repeat == "yes")num = rand() % 100 + 1;
			else if (repeat == "no")
			{
				cout << "��ӭ�´����汾��Ϸ" << endl;
				break;
			}
		}
	}
	return 0;
}
