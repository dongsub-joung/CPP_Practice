
//관리자를 표현하기 위한 기본 자료구조
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
    //필요한 멤버함수

    //USER_INFO.check_passed를 수정할 수 있는 함수

    //관리자 코드 변경 ,기본 0000
    AdminMode(int input)
        :m_admin_code(input) {}

private:

    struct AdminInfo admin;

};
//AdminMode