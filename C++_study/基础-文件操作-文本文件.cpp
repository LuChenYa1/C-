#include <iostream>
//* 1������ͷ�ļ�  
#include <fstream>  // ofstream ifstream

using namespace std;

//* �ļ��򿪷�ʽ
// ios:: in     Ϊ���ļ������ļ�
// ios::out     Ϊд�ļ������ļ�
// ios::ate     ��ʼλ�ã��ļ�β
// ios::app     ׷�ӷ�ʽд�ļ�
// ios::trunc   ����ļ�������ɾ�����ٴ���
// ios::binaray �����Ʒ�ʽ

// ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|������
// ���磺�ö����Ʒ�ʽд�ļ� ios::binary |  ios:: out

//* д�ļ�
void test01()
{
    // //* 2������������
	// ofstream ofs;
    // //* 3�����ļ�
	// ofs.open("test.txt", ios::out);
    // �ɺϲ�
    ofstream ofs("test.txt", ios::out);

    //* 4��д����
	ofs << "����������" << endl;
	ofs << "�Ա�Ů" << endl;
	ofs << "���䣺20" << endl;

    //* 5���ر��ļ�
	ofs.close();
}

//* ���ļ�
void test02()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);

    //* ����is_open���������ж��ļ��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//��һ�ַ�ʽ
	// char buf[1024] = { 0 };
	// while (ifs >> buf)
	// {
	// 	cout << buf << endl;
	// }

	//�ڶ���
	// char buf[1024] = { 0 };
	// while (ifs.getline(buf,sizeof(buf)))
	// {
	// 	cout << buf << endl;
	// }

	//������
	// string buf;
	// while (getline(ifs, buf))
	// {
	// 	cout << buf << endl;
	// }

	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();
}


int main() 
{
	test01();
    test02();

	return 0;
}