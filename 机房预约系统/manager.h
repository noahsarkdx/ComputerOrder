#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

class manager :public identity
{
public:
	//默认构造
	manager();
	//有参构造 参数：姓名，学号，密码
	manager(string name, string password);
	//菜单界面
	virtual void openmenu();
	//添加账号
	void addperson();
	//查看账号
	void showperson();
	//查看机房信息
	void showcomputer();
	//清空预约记录
	void cleanfile();
};
