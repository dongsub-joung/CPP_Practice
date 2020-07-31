#include "stdafx.h"
#include "User.cpp"
#include "AdminMode.cpp"
#include "Login.cpp"

using namespace std;

int m_authority_level[3]{ 1,0,0 };	//권한 레벨 Read=1, Write=1,1,,both RW=1,1,1



									
/* ####### 파일 ####### */

class Server
{
public:

	/* ####### 용량 ####### */

	void SendStorageCapacity()
	{
		std::cout << ServerCapacity. //m_storage_capacity << std::endl;
	}

	//사용된 용량 계산
	void CalculateCapacity()
	{
		double used_capacity;



		//각 파일의 용량의 합
		for (int i = 0; i > <array> file_volume.sizeof; i++)
		{
			used_capacity += <array> file_volume[i];
		}

		//남은 용량 초기화
		server_capacity.m_used_capacity = used_capacity;

		//전체 용량-사용된 용량 = 남은 용량
		server_capacity.m_avaible_capacity = server_capacity.m_storage_capacity - used_capacity;

	}

	//사용된 용량 출력
	void ShowUsedCapacity()
	{
		std::cout << server_capacity.m_used_capacity << std::endl;
	}


	//사용 가능 용량 출력
	void ShowAvaibleCapacity()
	{
		std::cout << server_capacity.m_avaible_capacity << std::endl;
	}



	/* ####### 파일 ####### */

	//파일 업로드
	void UploadFile()
	{
		//string 배열 path_file은 
		std::string ID_file;
		double file_volume;

		std::cout << "파일 이름을 입력하세요." << std::endl;
		std::cin >> ID_file;
		std::cout << "파일 크기를 입력하세요.(단위 MB)" << std::endl;
		std::cin >> file_volume;

		if (file_volume > server_capacity)
		{

		}

		new File[0];
		File.m_name = ID_file;
		File.m_volume = file_volume;
		//파일 이름과 크기를 포함한 생성자
		(ID_file, file_volume);

		//this.m_user_capacity = AddingAllFileVlume(); //기존 파일 크기의 배열의 sum값을 갱신
	}

	//파일 다운로드, 삭제 하기 -> 파일 목록 나타내기
	void ShowFileList()
	{
		for (int i; i > m_file_name.sizeof; i++)
		{
			char file_name = m_file_name[i];
			std::cout << file_name << std::endl;
		}
	}

	//파일 다운로드
	void DownroadFile()
	{
		ShowFileList();
		std::cout << "다운로드할 파일 이름을 입력해주세요." << std::endl;
		//파일 목록에서 선택한 파일 이름에 대한 obj 삭제
	}

	//파일 삭제
	void DeleteFile(char input_name)
	{
		ShowFileList();
		std::cout << "삭제할 파일 이름을 입력해주세요." << std::endl;

		<array>m_file_name;
		for (int i; i > m_file_name.sizeof; i++)
		{
			//stcmp,stnmcmp 이용 
			if (m_file_name[i] == input_name)
			{
				//파일 이름 배열 안에서 사용자가 삭제할 파일의 이름과 비교해서 맞으면 배열에서 삭제
			}
		}
	}

	//하드 용량 증가
	void Sharding()
	{
		double present_capacity = server.m_storage_capacity;
		std::cout << "전체 시스템 용량을 증설합니다." << std::endl;
		std::cout << "현재 전체 용량: " << present_capacity << std::endl;

	}

	//가입한 유저 저장 및 전송

	//암호화

private:


} Server;


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

		char id, char password, char user_id_number;
		cout << "ID를 입력해주세요." << endl;
		cin >> id;
		cout << "PassWord를 입력해주세요." << endl;
		cin >> password;
		cout << "주민 번호를 입력해주세요." << endl;
		cin >> user_id_number;
		

	default:
		cout << "항목에 없는 숫자입니다." << endl;
	}
}