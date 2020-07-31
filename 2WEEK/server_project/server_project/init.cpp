#include "stdafx.h"
#include "User.cpp"
#include "AdminMode.cpp"
#include "Login.cpp"

using namespace std;

int m_authority_level[3]{ 1,0,0 };	//���� ���� Read=1, Write=1,1,,both RW=1,1,1



									
/* ####### ���� ####### */

class Server
{
public:

	/* ####### �뷮 ####### */

	void SendStorageCapacity()
	{
		std::cout << ServerCapacity. //m_storage_capacity << std::endl;
	}

	//���� �뷮 ���
	void CalculateCapacity()
	{
		double used_capacity;



		//�� ������ �뷮�� ��
		for (int i = 0; i > <array> file_volume.sizeof; i++)
		{
			used_capacity += <array> file_volume[i];
		}

		//���� �뷮 �ʱ�ȭ
		server_capacity.m_used_capacity = used_capacity;

		//��ü �뷮-���� �뷮 = ���� �뷮
		server_capacity.m_avaible_capacity = server_capacity.m_storage_capacity - used_capacity;

	}

	//���� �뷮 ���
	void ShowUsedCapacity()
	{
		std::cout << server_capacity.m_used_capacity << std::endl;
	}


	//��� ���� �뷮 ���
	void ShowAvaibleCapacity()
	{
		std::cout << server_capacity.m_avaible_capacity << std::endl;
	}



	/* ####### ���� ####### */

	//���� ���ε�
	void UploadFile()
	{
		//string �迭 path_file�� 
		std::string ID_file;
		double file_volume;

		std::cout << "���� �̸��� �Է��ϼ���." << std::endl;
		std::cin >> ID_file;
		std::cout << "���� ũ�⸦ �Է��ϼ���.(���� MB)" << std::endl;
		std::cin >> file_volume;

		if (file_volume > server_capacity)
		{

		}

		new File[0];
		File.m_name = ID_file;
		File.m_volume = file_volume;
		//���� �̸��� ũ�⸦ ������ ������
		(ID_file, file_volume);

		//this.m_user_capacity = AddingAllFileVlume(); //���� ���� ũ���� �迭�� sum���� ����
	}

	//���� �ٿ�ε�, ���� �ϱ� -> ���� ��� ��Ÿ����
	void ShowFileList()
	{
		for (int i; i > m_file_name.sizeof; i++)
		{
			char file_name = m_file_name[i];
			std::cout << file_name << std::endl;
		}
	}

	//���� �ٿ�ε�
	void DownroadFile()
	{
		ShowFileList();
		std::cout << "�ٿ�ε��� ���� �̸��� �Է����ּ���." << std::endl;
		//���� ��Ͽ��� ������ ���� �̸��� ���� obj ����
	}

	//���� ����
	void DeleteFile(char input_name)
	{
		ShowFileList();
		std::cout << "������ ���� �̸��� �Է����ּ���." << std::endl;

		<array>m_file_name;
		for (int i; i > m_file_name.sizeof; i++)
		{
			//stcmp,stnmcmp �̿� 
			if (m_file_name[i] == input_name)
			{
				//���� �̸� �迭 �ȿ��� ����ڰ� ������ ������ �̸��� ���ؼ� ������ �迭���� ����
			}
		}
	}

	//�ϵ� �뷮 ����
	void Sharding()
	{
		double present_capacity = server.m_storage_capacity;
		std::cout << "��ü �ý��� �뷮�� �����մϴ�." << std::endl;
		std::cout << "���� ��ü �뷮: " << present_capacity << std::endl;

	}

	//������ ���� ���� �� ����

	//��ȣȭ

private:


} Server;


void main()
{
	cout << "1. ����� ���" << endl;
	cout << "2. ������ ���" << endl;
	cout << "3. ȸ�� ���� ��û" << endl;
	
	int select_mode;
	cin >> select_mode;

	switch (select_mode)
	{
	case 1:
		cout << "id :" << endl;
		int inputedID;
		string inputedPassword;
		cin >> inputedID;
		cin >> inputedPassword;

		Login(inputedID, inputedPassword);

		if (success)
		{
			Read_ServerInfo();

			cout << "���� ��ü �뷮: " <<  <<endl;
			cout << "���� ��� �뷮: " <<  <<endl;
			cout << "��� ���� �뷮: " <<  <<endl;

			cout << "1.���� ���ε� " <<  endl;
			cout << "2. ���� ���� " <<  endl;
			cout << "3. ���� �ٿ�ε�" <<  endl;

			cout << "�̿��Ͻ� ���� ��ȣ�� �Է��ϼ���." << endl;
			int selected_service_Num;
			
			// ���� {01, 10, 11};
			switch (user_lvl)
			{
			case 1:
				//�ٿ�ε常
			case 2:
				//���ε常
			case 3:
				//�Ѵ�
			default:
				cout << "�׸� ���� �����Դϴ�." << endl
			}
		}

	case 2:
		cout << "Code: " << endl;
		string inputed;
		cin >> inputed;

		//�ڵ尡 true��
		if (CheckCode(inputed))
		{
			cout << "1. ������ �ڵ� ����" << endl;
			cout << "2. ������ ���� ���� " << endl;
			cout << "3. �ϵ�뷮 �߰�" << endl;
			cout << "4. ������� ��������" << endl;
			cout << "5. ���� ���ε� " << endl;
			cout << "6. ���� ���� " << endl;
			cout << "7. ���� �ٿ�ε�" << endl;
			int selected_admin_opt;
			cin >> selected_admin_opt;
			switch (selected_admin_opt)
			{
			case 1:
				ChangeAdminCode();
				break;
			case 2:
				ShowUserInfo();
				break;
			case 3:
				Sharding();
				break;
			case 4:
				WaitingUserInfo();
				break;
			case 5:
				UploadFile();
				break;
			case 6:
				DeleteFile();
			case 7:
				DownloadFile();
				break;
			default:
				cout << "�׸� ���� �����Դϴ�." << endl;
			}
		}

	case 3:
		cout << "ȸ�������� �����մϴ�." << endl;

		char id, char password, char user_id_number;
		cout << "ID�� �Է����ּ���." << endl;
		cin >> id;
		cout << "PassWord�� �Է����ּ���." << endl;
		cin >> password;
		cout << "�ֹ� ��ȣ�� �Է����ּ���." << endl;
		cin >> user_id_number;
		

	default:
		cout << "�׸� ���� �����Դϴ�." << endl;
	}
}