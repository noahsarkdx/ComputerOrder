#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

class teacher :public identity
{
public:
	//默认构造
	teacher();
	//有参构造 参数：姓名，学号，密码
	teacher(int empid, string name, string password);
	//菜单界面
	virtual void openmenu();
	//查看所有预约
	void showallorder();
	//审核预约
	void validorder();
	//职工号
	int m_empid;
};