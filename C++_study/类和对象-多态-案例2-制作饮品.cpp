#include <iostream>

using namespace std;

//! ���麯��  virtual ����ֵ ������ (�β�) = 0; 
//! ��;������౾������ݲ��ᱻ���ã�ֻ����Ϊһ���������ڣ���˿���ֱ��д�ɳ����࣬����д������
//! ����ֻҪ��һ�����麯���ͳ�Ϊ������
//* �������ص㣺
//! �������޷�ʵ��������
//! ���������д�����еĴ��麯��������Ҳ���ڳ�����

//* �������������������﷨����ͨ��Ա����һ��������������ڳ�Աָ��ָ������ռ�ʱ�����ͷţ������಻���ڣ���ʹ�ö�̬ʱ��

//! ���麯�����麯��������
//* ���麯��ʹ���Ϊ�����࣬�޷�ʵ�������󣬵��麯����Ӱ����

//* ����������Ʒ(����)
class AbstractDrinking 
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSomething() = 0;
	//�涨����
	void MakeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//* �������ȣ�����-�Ը������ϸ����
class Coffee : public AbstractDrinking 
{
public:
	//��ˮ
	virtual void Boil() {
		cout << "��ũ��ɽȪ!" << endl;
	}
	//����
	virtual void Brew() {
		cout << "���ݿ���!" << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "�����ȵ��뱭��!" << endl;
	}
	//���븨��
	virtual void PutSomething() {
		cout << "����ţ��!" << endl;
	}
};

//* ������ˮ������-�Ը������ϸ����
class Tea : public AbstractDrinking 
{
public:
	//��ˮ
	virtual void Boil() {
		cout << "������ˮ!" << endl;
	}
	//����
	virtual void Brew() {
		cout << "���ݲ�Ҷ!" << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "����ˮ���뱭��!" << endl;
	}
	//���븨��
	virtual void PutSomething() {
		cout << "�������!" << endl;
	}
};

//* ҵ����
void DoWork(AbstractDrinking* drink) 
{
	drink->MakeDrink();
	delete drink;
}

int main() 
{
	DoWork(new Coffee);
	cout << "--------------" << endl;
	DoWork(new Tea);

	return 0;
}