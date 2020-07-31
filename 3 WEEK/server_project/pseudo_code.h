#include <iostream>


	//m_arrary_index= id값 배열의 크기를 리턴한 값이다.

struct UserInfo	// **사용자를 표현하기 위한 기본 자료구조
{

	UserInfo() {};

	//입력 받은 id가 배열에 존재하지 않으면 배열에 추가
	UserInfo(input)
	{
		if (input != arrary_id) array_id = input
	}

	//유저 정보 초기화
	UserInfo(int id, int password, int authority_level, int dormant_account)
		:m_id(id),
		m_password(password),
		m_authority_level(authority_level),
		m_dormant_account(dormant_account) {}
	~UserInfo() {};



	char m_id;	//user ID
	vectory* arrary_id;// user ID 배열 

	char m_password;// user Password
	vectory* array_password; // User Password 배열

	int user_id_number;	//주민번호
	int m_authority_level;	//권한 레벨
	bool m_dormant_account; //휴먼계정
	bool check_passed; //가입 대기 상태에 있는 유저 수
};
//UserInfo


//관리자를 표현하기 위한 기본 자료구조
struct AdminInfo
{
	AdminInfo(){}



private:
	std::string m_admin_code;

};
//AdminInfo


//서버를 표현하기 위한 기본 자료구조
class ServerInfo
{
public:

	ServerInfo() {};
	~ServerInfo() {};

	//서버 전체용량
	int m_storage_capacity;
	//서버 사용용량
	double m_used_capacity;
	//사용가능 용량
	double m_avaible_capacity;
	//파일크기
	double file_vlume;

private:
	//user_data 주민번호, pass
};
//ServerInfo


class UserMode : public UserInfo
{

public:
	//필요한 멤버함수

		/*
	현재 존재하는 유저 수를 제공
	다른 정보 배열에 index의 기준제공
	관리자에게 유저 수를 보낼 때,
	*/
	vector.size(arrary_ID)
	{
		this.arrary_index;
		return;
	}

	//현재 가입된 유저가 맞는지 확인하는 함수
	CheckUserId(char input_id)
	{
		arrary_id

	}

	if(check_passed == 0)
	{

	}


private:
	struct UserInfo user
	{
		//유저 권한 정의
		define_authority() {}

		//유저 권한 받아오기
		take_authority_level() {}
	};
};
//UserMode


class AdminMode : public AdminInfo
{

public:
	//필요한 멤버함수

	//USER_INFO.check_passed를 수정할 수 있는 함수

	//관리자 코드 변경 ,기본 0000
	AdminMode(int input)
		:m_admin_code(input) {}

private:

	struct AdminInfo admin;

};
//AdminMode


class Server :public ServerInfo
{
public:
	//필요한 멤버함수

	//파일 업로드

	//파일 삭제

	//파일 다운로드

	//하드 용량 증가

	//가입한 유저 저장 및 전송

	//암호화

private:
	struct ServerInfo server;

};
//Server