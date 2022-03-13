#include "student.h"

	//默认构造
Student::Student()
{

}
	//有参构造
Student::Student(int id, string name, string pwd)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;
	//初始化机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE,ios::in);
	ComputerRoom com;
	while ( ifs>>com.m_ComId && ifs>>com.m_MaxNum)
	{
		vCom.push_back(com);
	}
	ifs.close();

}
	//菜单界面
void Student::operMenu()
{
	cout << "欢迎学生代表" <<this->m_Name<<"登录" << endl;
	cout << "1、申请预约" << endl;
	cout << "2、查看我的预约" << endl;
	cout << "3、查看所有预约" << endl;
	cout << "4、取消预约" << endl;
	cout << "0、注销登录" << endl;
}

	//申请预约
	void Student::applyOrder()
	{
		cout << "机房开放的时间为周一至周五" << endl;
		cout << "请输入申请预约的时间：" << endl;
		cout << "1、周一" << endl;
		cout << "1、周2" << endl;
		cout << "1、周3" << endl;
		cout << "1、周4" << endl;
		cout << "1、周5" << endl;
		int date = 0;
		int interval = 0;
		int room = 0;
		while (1)
		{
			cin >> date;
			if (date >= 1 && date <= 5)
			{
				break;
			}
			else
			{
				cout << "输入有误，重新输入" << endl;
			}
		}
		cout << "请输入申请预约的时间段" << endl;
		cout <<"1、上午" << endl;
		cout << "2、下午" << endl;
		while (1)
		{
			cin >> interval;
			if (interval >= 1 && interval <= 2)
				break;
			else
			{
				cout << "输入有误" << endl;
			}
		}
		cout<< "请选择机房：" << endl;
		for (int i = 0; i < vCom.size(); i++)
		{
			cout << "vCom["<<i<<"].m_ComId" << "号机房容量为：" << vCom[i].m_MaxNum << endl;
		}
		while (1)
		{
			cin >> room;
			if (room >= 1 && room <= 3)
				break;
			else
				cout << "输入有误" << endl;
		}

		cout << "预约成功，审核中" << endl;
		ofstream ofs;
		ofs.open(ORDER_FILE, ios::app);
		ofs << "date:" << date << " " 
			<< "interval:" << interval<< " " 
			<<"stuid:" << this->m_Id << " "
			<< "stuName" << this->m_Name << " "
			<< "roomid:" << room << " "
			<< "status:"<< 1<<endl;
			ofs.close();
			system("pause");
			system("cls");
	}
	//查看自身预约
	void Student::showMyOrder()
	{
		OrderFile of;

	}
	//查看所有预约
	void Student::showAllOrder()
	{

	}
	//取消预约
	void Student::cancelOrder()
	{

	}
	