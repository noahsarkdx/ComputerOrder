#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

class teacher :public identity
{
public:
	//Ĭ�Ϲ���
	teacher();
	//�вι��� ������������ѧ�ţ�����
	teacher(int empid, string name, string password);
	//�˵�����
	virtual void openmenu();
	//�鿴����ԤԼ
	void showallorder();
	//���ԤԼ
	void validorder();
	//ְ����
	int m_empid;
};