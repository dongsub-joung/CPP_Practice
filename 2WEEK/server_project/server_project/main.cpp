#include "stdafx.h"
#include "Login.cpp"

using namespace std;

enum authority_level
{
	Read_only,
	Write_only,
	Both
};

int m_authority_level = Read_only;	//권한 레벨 Read=1, Write=1,1,,both RW=1,1,1

void main()
{
	cout << "1. 사용자 모드" << endl;
	cout << "2. 관리자 모드" << endl;
	cout << "3. 회원 가입 요청" << endl;
	
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

			cout << "서버 전체 용량: " <<  <<endl;
			cout << "현재 사용 용량: " <<  <<endl;
			cout << "사용 가능 용량: " <<  <<endl;

			cout << "1.파일 업로드 " <<  endl;
			cout << "2. 파일 삭제 " <<  endl;
			cout << "3. 파일 다운로드" <<  endl;

			cout << "이용하실 서비스 번호를 입력하세요." << endl;
			int selected_service_Num;
			enum UserModeSelection
			{
				Download_only = 1,
				Upload_only = 2,
				Both = 3
			};

			// 저장 {01, 10, 11};
			switch (user_lvl)
			{
			case Download_only:
				//다운로드만
			case Upload_only:
				//업로드만
			case Both:
				//둘다
			default:
				cout << "항목에 없는 숫자입니다." << endl
			}
		}
		break;

	case AdminMode:
		cout << "Code: " << endl;
		string inputed;
		cin >> inputed;

		//코드가 true면
		if (CheckCode(inputed))
		{
			cout << "1. 관리자 코드 변경" << endl;
			cout << "2. 가입한 유저 정보 " << endl;
			cout << "3. 하드용량 추가" << endl;
			cout << "4. 대기중인 유저정보" << endl;
			cout << "5. 파일 업로드 " << endl;
			cout << "6. 파일 삭제 " << endl;
			cout << "7. 파일 다운로드" << endl;
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
				cout << "항목에 없는 숫자입니다." << endl;
			}
		}
		break;

	case JoinMode:
		cout << "회원가입을 진행합니다." << endl;

		char id, char password, char user_id_number;
		cout << "ID를 입력해주세요." << endl;
		cin >> id;
		cout << "PassWord를 입력해주세요." << endl;
		cin >> password;
		cout << "주민 번호를 입력해주세요." << endl;
		cin >> user_id_number;
		
		break;

	default:
		cout << "항목에 없는 숫자입니다." << endl;
		break;
	}
}