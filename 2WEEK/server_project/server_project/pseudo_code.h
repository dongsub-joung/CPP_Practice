struct USER_INFO	// **����ڸ� ǥ���ϱ� ���� �⺻ �ڷᱸ��
{
	UserInfo() {};

	UserInfo(auto m_id)
		:

	//���� ���� �ʱ�ȭ
	UserInfo(auto id, auto password, int authority_level, int dormant_account)
		:m_id(id), m_password(password), m_authority_level(authority_level), m_dormant_account(dormant_account) {}
	~UserInfo() {};


protected:

	m_id;// User ID
	m_password;// User Password
	int m_authority_level;	//���� ����
	bool m_dormant_account; //�޸հ���
};
//USER_INFO


//�����ڸ� ǥ���ϱ� ���� �⺻ �ڷᱸ��
struct ADMIN_INFO
{
	
};
//ADMIN_INFO


//������ ǥ���ϱ� ���� �⺻ �ڷᱸ��
class Server_Info
{
	
};
//Server_Info


class UserMode
{

public:
	//�ʿ��� ����Լ�


private:
	struct UserInfo_user
	{
		//���� ���� ����
		define_authority() {}

		//���� ���� �޾ƿ���
		take_authority_level() {}
	};
};
//UserMode


class AdminMode
{

public:
	//�ʿ��� ����Լ�


private:
	struct AdminInfo admin;
};
//AdminMode


class Server
{
public:
	//�ʿ��� ����Լ�


private:
	struct ServerInfo server;
};
//Server