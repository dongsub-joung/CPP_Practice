#include "stdafx.h"
#include "Login.cpp"

using namespace std;

enum authority_level
{
	Read_only,
	Write_only,
	Both
};

int m_authority_level = Read_only;	//���� ���� Read=1, Write=1,1,,both RW=1,1,1

void main()
{
	cout << "1. ����� ���" << endl;
	cout << "2. ������ ���" << endl;
	cout << "3. ȸ�� ���� ��û" << endl;
	
	enum ModeSelection
	{
		UserMode,
		AdminMode,
		JoinMode
	};

	int select_mode;
	cin >> select_mode;


	switch (select_mode)
	{
	case UserMode:
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
			enum UserModeSelection
			{
				Download_only = 1,
				Upload_only = 2,
				Both = 3
			};

			// ���� {01, 10, 11};
			switch (user_lvl)
			{
			case Download_only:
				//�ٿ�ε常
			case Upload_only:
				//���ε常
			case Both:
				//�Ѵ�
			default:
				cout << "�׸� ���� �����Դϴ�." << endl
			}
		}
		break;

	case AdminMode:
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
		break;

	case JoinMode:
		cout << "ȸ�������� �����մϴ�." << endl;

		char id, char password, char user_id_number;
		cout << "ID�� �Է����ּ���." << endl;
		cin >> id;
		cout << "PassWord�� �Է����ּ���." << endl;
		cin >> password;
		cout << "�ֹ� ��ȣ�� �Է����ּ���." << endl;
		cin >> user_id_number;
		
		break;

	default:
		cout << "�׸� ���� �����Դϴ�." << endl;
		break;
	}
}