#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

class student :public identity
{
public:
	//Ĭ�Ϲ���
	student();
	//�вι��� ������������ѧ�ţ�����
	student(int id, string name, string password);
	//�˵�����
	virtual void openmenu(); 
	//����ԤԼ
	void applyorder();
	//�鿴����ԤԼ
	void showmyorder();
	//�鿴����ԤԼ
	void showallorder();
	//ȡ��ԤԼ
	void cancerorder();
	//ѧ��ѧ��
	int m_id;
};