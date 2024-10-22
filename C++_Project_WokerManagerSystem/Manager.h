#pragma once
#include<iostream>
#include "worker.h"

using namespace std;

//经理类
class Manager :public Worker
{
public:

	Manager(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取职工岗位名称
	string getDeptName();//! 这里不能加virtual,报了很多错
};
