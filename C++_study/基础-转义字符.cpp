#include <iostream>

using namespace std;

int main(void)
{
	// \n
	cout << "aaaa\n" << endl;
	cout << "aaa\n";
	cout << "aaaaaaa";
	cout << "aaaa" << endl;
	//���ϣ�������ʾ����Զ�ڽ�β�������У����Ƿ�ӻ���û��ϵ���������滻���ƶ�

	//��б��
	cout << "\\" << endl;//Ҫ\,��\\��
	cout << "\"" << endl;//�Դ����ƣ�Ҫ��������ַ�����Ҫ��б��
	cout << "\\\\" << endl;
	cout << "\'" << endl;

	//ˮƽ�Ʊ��
	cout << "hello\tworld" << endl;//��ֱ����
	cout << "aa\tbbbbb" << endl;//һ�еĵ�һ��\t�����װ˸��ո�ռλ
	cout << "aaaa\tbbbbbb\tcccccccccccc\tddd" << endl;//�����˸���û����
	cout << "aaaa\tbbbbbb\tcccc\tddd" << endl;//һ�еĵڶ���\t�ӵ�һ��\t��ʼռλ
	return 0;
}
