
//�����ڸ� ǥ���ϱ� ���� �⺻ �ڷᱸ��
struct AdminInfo
{
    AdminInfo() {}



private:
    std::string m_admin_code;

};
//AdminInfo


class AdminMode : public AdminInfo
{

public:
    //�ʿ��� ����Լ�

    //USER_INFO.check_passed�� ������ �� �ִ� �Լ�

    //������ �ڵ� ���� ,�⺻ 0000
    AdminMode(int input)
        :m_admin_code(input) {}

private:

    struct AdminInfo admin;

};
//AdminMode