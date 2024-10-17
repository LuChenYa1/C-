#include <iostream>

using namespace std;

//* ��̬�ŵ㣺������֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չ�Լ�ά��
//* ʵ�ʿ����ᳫ����ԭ�򣺶���չ���п��ţ����޸Ľ��йرգ���ֻ������

//��ͨʵ��
class Calculator {
public:
	int getResult(string oper)
	{
		if (oper == "+") 
        {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") 
        {
			return m_Num1 - m_Num2;
		}
		else if (oper == "*") 
        {
			return m_Num1 * m_Num2;
		}
        return -1;
		//! ���Ҫ�ṩ�µ����㣬��Ҫ�޸�Դ��,ʵ�ʿ�����������ô��
	}
public:
	int m_Num1;
	int m_Num2;
};

void test01()
{
	//��ͨʵ�ֲ���
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}


//* ��̬ʵ��
//* �����������
class AbstractCalculator
{
public :
	virtual int getResult(void) = 0;

	int m_Num1;
	int m_Num2;
};

//* �ӷ�������
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//* ����������
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//* �˷�������
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};


void test02()
{
	//�����ӷ�������
	AbstractCalculator *abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;  //�����˼ǵ�����

	//��������������
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;  

	//�����˷�������
	abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}

int main() {

	//test01();

	test02();

	return 0;
}
