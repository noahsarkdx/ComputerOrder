#include <iostream>
using namespace std;

int main()
{
	int select = 0;
	while (true)
	{
		cout << "---------------��ӭ��������ԤԼϵͳ--------------" << endl;
		cout << "------------------�������������-----------------" << endl;
		cout << "---------------------------------------------" << endl;
		cout << "|                                           |\n";
		cout << "|               1.ѧ������                  |\n";
		cout << "|                                           |\n";
		cout << "|               2.��    ʦ                  |\n";
		cout << "|                                           |\n";
		cout << "|               3.�� �� Ա                  |\n";
		cout << "|                                           |\n";
		cout << "|               0.��    ��                  |\n";
		cout << "|                                           |\n";
		cout << "---------------------------------------------" << endl;
		cout << "------------------����������ѡ��---------------" << endl;
		cin >> select;
		switch (select)
		{
		case 1://ѧ��
			break;
		case 2://��ʦ
			break;
		case 3://����Ա
			break;
		case 0://�˳�
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	

	system("pause");
	return 0;
}