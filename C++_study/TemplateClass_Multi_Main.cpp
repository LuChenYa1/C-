#include<iostream>
using namespace std;

// #include "person.h"
// #include "person.cpp" //解决方式1，包含cpp源文件

//解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
#include "TemplateClass_Multi_Func.hpp"

int main() 
{
	Person<string, int> p("Tom", 10);
	p.showPerson();

	return 0;
}