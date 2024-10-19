// #pragma once 
//#pragma once ��һ�ֱ�����ָ����ڸ��߱���������ļ�ֻӦ�ñ�����һ�Σ��Ա����ظ����������ָ��ͨ������ͷ�ļ����ʼλ�ã�������Դ�ļ���.cpp �ļ����С�
//! warning: #pragma once in main file" ��ʾ��ͷ�ļ���ʹ���� #pragma once ָ�����������Ϊ����������һ�����ļ���ͨ���� .cpp �ļ����С���ͨ����һ���޺��ľ��棬��ʾ�����߿�����Դ�ļ��ж�����ͷ�ļ���ʹ���� #pragma once��

#include <iostream>
using namespace std;
#include <string>

//! ���⣺
//! ��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���

//* �����ʽ1�����ļ�ֱ�Ӱ���.cppԴ�ļ�
//* �����ʽ2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ��������
//* �ܽ᣺�����Ľ����ʽ�ǵڶ��֣�����ģ���Ա����д��һ�𣬲�����׺����Ϊ.hpp

template<class T1, class T2>
class Person 
{
public:
	Person(T1 name, T2 age);
	void showPerson();
public:
	T1 m_Name;
	T2 m_Age;
};

//���캯�� ����ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) 
{
	this->m_Name = name;
	this->m_Age = age;
}

//��Ա���� ����ʵ��
template<class T1, class T2>
void Person<T1, T2>::showPerson() 
{
	cout << "����: " << this->m_Name << " ����:" << this->m_Age << endl;
}
