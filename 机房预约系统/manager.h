#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

class manager :public identity
{
public:
	//Ĭ�Ϲ���
	manager();
	//�вι��� ������������ѧ�ţ�����
	manager(string name, string password);
	//�˵�����
	virtual void openmenu();
	//����˺�
	void addperson();
	//�鿴�˺�
	void showperson();
	//�鿴������Ϣ
	void showcomputer();
	//���ԤԼ��¼
	void cleanfile();
};
