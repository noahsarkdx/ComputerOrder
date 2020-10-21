#include <iostream>
using namespace std;

int main()
{
	int select = 0;
	while (true)
	{
		cout << "---------------欢迎来到机房预约系统--------------" << endl;
		cout << "------------------请输入您的身份-----------------" << endl;
		cout << "---------------------------------------------" << endl;
		cout << "|                                           |\n";
		cout << "|               1.学生代表                  |\n";
		cout << "|                                           |\n";
		cout << "|               2.老    师                  |\n";
		cout << "|                                           |\n";
		cout << "|               3.管 理 员                  |\n";
		cout << "|                                           |\n";
		cout << "|               0.退    出                  |\n";
		cout << "|                                           |\n";
		cout << "---------------------------------------------" << endl;
		cout << "------------------请输入您的选择：---------------" << endl;
		cin >> select;
		switch (select)
		{
		case 1://学生
			break;
		case 2://老师
			break;
		case 3://管理员
			break;
		case 0://退出
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	

	system("pause");
	return 0;
}