#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

class student :public identity
{
public:
	//默认构造
	student();
	//有参构造 参数：姓名，学号，密码
	student(int id, string name, string password);
	//菜单界面
	virtual void openmenu(); 
	//申请预约
	void applyorder();
	//查看自身预约
	void showmyorder();
	//查看所有预约
	void showallorder();
	//取消预约
	void cancerorder();
	//学生学号
	int m_id;
};