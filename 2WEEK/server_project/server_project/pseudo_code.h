struct USER_INFO	// **사용자를 표현하기 위한 기본 자료구조
{
	UserInfo() {};

	UserInfo(auto m_id)
		:

	//유저 정보 초기화
	UserInfo(auto id, auto password, int authority_level, int dormant_account)
		:m_id(id), m_password(password), m_authority_level(authority_level), m_dormant_account(dormant_account) {}
	~UserInfo() {};


protected:

	m_id;// User ID
	m_password;// User Password
	int m_authority_level;	//권한 레벨
	bool m_dormant_account; //휴먼계정
};
//USER_INFO


//관리자를 표현하기 위한 기본 자료구조
struct ADMIN_INFO
{
	
};
//ADMIN_INFO


//서버를 표현하기 위한 기본 자료구조
class Server_Info
{
	
};
//Server_Info


class UserMode
{

public:
	//필요한 멤버함수


private:
	struct UserInfo_user
	{
		//유저 권한 정의
		define_authority() {}

		//유저 권한 받아오기
		take_authority_level() {}
	};
};
//UserMode


class AdminMode
{

public:
	//필요한 멤버함수


private:
	struct AdminInfo admin;
};
//AdminMode


class Server
{
public:
	//필요한 멤버함수


private:
	struct ServerInfo server;
};
//Server