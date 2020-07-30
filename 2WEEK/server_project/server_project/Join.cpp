#include "stdafx.h"
using namespace std;

//typedef 선언, 초기화
struct UserInfo
{
    char m_ID[20];
    char m_password[20];
    char m_userID_number[13];	//주민번호, ""-""제외
    int m_authority_level[3]{1,0,0};	//권한 레벨 Read=1, Write=1,1,,both RW=1,1,1

    UserInfo() {};
    ~UserInfo() {};

    //m_arrary_index= id값 배열의 크기를 리턴한 값이다.
} UserInfo;

class Join
{
public:

    //회원가입
    void JoinUser()
    {
        
        char id;
        char password;
        char user_id_number;

        cout << "ID를 입력해주세요." << endl;
        cin >> id;
        cout << "PassWord를 입력해주세요." << endl;
        cin >> password;
        cout << "주민 번호를 입력해주세요." << endl;
        cin >> user_id_number;

    }
};