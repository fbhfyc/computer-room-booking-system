#include "student.h"

	//Ĭ�Ϲ���
Student::Student()
{

}
	//�вι���
Student::Student(int id, string name, string pwd)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;
	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE,ios::in);
	ComputerRoom com;
	while ( ifs>>com.m_ComId && ifs>>com.m_MaxNum)
	{
		vCom.push_back(com);
	}
	ifs.close();

}
	//�˵�����
void Student::operMenu()
{
	cout << "��ӭѧ������" <<this->m_Name<<"��¼" << endl;
	cout << "1������ԤԼ" << endl;
	cout << "2���鿴�ҵ�ԤԼ" << endl;
	cout << "3���鿴����ԤԼ" << endl;
	cout << "4��ȡ��ԤԼ" << endl;
	cout << "0��ע����¼" << endl;
}

	//����ԤԼ
	void Student::applyOrder()
	{
		cout << "�������ŵ�ʱ��Ϊ��һ������" << endl;
		cout << "����������ԤԼ��ʱ�䣺" << endl;
		cout << "1����һ" << endl;
		cout << "1����2" << endl;
		cout << "1����3" << endl;
		cout << "1����4" << endl;
		cout << "1����5" << endl;
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
				cout << "����������������" << endl;
			}
		}
		cout << "����������ԤԼ��ʱ���" << endl;
		cout <<"1������" << endl;
		cout << "2������" << endl;
		while (1)
		{
			cin >> interval;
			if (interval >= 1 && interval <= 2)
				break;
			else
			{
				cout << "��������" << endl;
			}
		}
		cout<< "��ѡ�������" << endl;
		for (int i = 0; i < vCom.size(); i++)
		{
			cout << "vCom["<<i<<"].m_ComId" << "�Ż�������Ϊ��" << vCom[i].m_MaxNum << endl;
		}
		while (1)
		{
			cin >> room;
			if (room >= 1 && room <= 3)
				break;
			else
				cout << "��������" << endl;
		}

		cout << "ԤԼ�ɹ��������" << endl;
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
	//�鿴����ԤԼ
	void Student::showMyOrder()
	{
		OrderFile of;

	}
	//�鿴����ԤԼ
	void Student::showAllOrder()
	{

	}
	//ȡ��ԤԼ
	void Student::cancelOrder()
	{

	}
	