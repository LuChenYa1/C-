#include<iostream>
using namespace std;

// #include "person.h"
// #include "person.cpp" //�����ʽ1������cppԴ�ļ�

//�����ʽ2����������ʵ��д��һ���ļ���׺����Ϊ.hpp
#include "TemplateClass_Multi_Func.hpp"

int main() 
{
	Person<string, int> p("Tom", 10);
	p.showPerson();

	return 0;
}