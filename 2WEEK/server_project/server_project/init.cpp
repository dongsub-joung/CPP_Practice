#include "stdafx.h"
#include "Server.cpp"
#include "User.cpp"
#include "AdminMode.cpp"
#include "Join.cpp"
#include "Login.cpp"

using namespace std;

void main()
{
	cout << "1. 사용자 모드" << endl;
	cout << "2. 관리자 모드" << endl;
	cout << "3. 회원 가입 요청" << endl;
	
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

			cout << "서버 전체 용량: " <<  <<endl;
			cout << "현재 사용 용량: " <<  <<endl;
			cout << "사용 가능 용량: " <<  <<endl;

			cout << "1.파일 업로드 " <<  endl;
			cout << "2. 파일 삭제 " <<  endl;
			cout << "3. 파일 다운로드" <<  endl;

			cout << "이용하실 서비스 번호를 입력하세요." << endl;
			int selected_service_Num;
			
			// 저장 {01, 10, 11};
			switch (user_lvl)
			{
			case 1:
				//다운로드만
			case 2:
				//업로드만
			case 3:
				//둘다
			default:
				cout << "항목에 없는 숫자입니다." << endl
			}
		}

	case 2:
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

	case 3:
		cout << "회원가입을 진행합니다." << endl;
		Join();


	default:
		cout << "항목에 없는 숫자입니다." << endl;
	}
}