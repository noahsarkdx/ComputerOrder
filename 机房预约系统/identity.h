#pragma once
#include <iostream>
using namespace std;

//身份的抽象基类
class identity
{
public:
	virtual void openmenu() = 0;//纯虚函数实现子菜单的多态
	string m_name;//姓名
	string m_password;//密码
};
