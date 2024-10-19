#include <iostream>
#include <string.h>

using namespace std;

//* �뺯��ģ���������ģ����ģ������б��п�����Ĭ�ϲ���������ģ�岻��
//* ��ģ���г�Ա��������ͨ���г�Ա��������ʱ����������ģ�
//* ��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//* ��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
//* ͨ����ģ�崴���Ķ��󣬿��������ַ�ʽ�����н��д���,ʹ�ñȽϹ㷺����ֱ��ָ���������������

//* ��ģ��
template<typename NameType, typename AgeType = int> 
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

//* ����ģ�廯
template <typename T1, typename T2>
void printPerson2(Person<T1, T2>&p)
{
	p.showPerson();                   
}

int main() 
{
    //C17��׼���ϣ���ģ�����ʹ���Զ������Ƶ�
	Person p("��˽�", 999); //��ģ���е�ģ������б� ����ָ��Ĭ�ϲ���
	p.showPerson();

    Person <string, int >p2("ɳ��", 90);
	printPerson2(p2);

	return 0;
}
