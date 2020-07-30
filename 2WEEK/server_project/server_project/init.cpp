#include "stdafx.h"
#include "Server.cpp"
#include "User.cpp"
#include "AdminMode.cpp"
#include "Join.cpp"
#include "Login.cpp"

using namespace std;

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
		Join();


	default:
		cout << "�׸� ���� �����Դϴ�." << endl;
	}
}