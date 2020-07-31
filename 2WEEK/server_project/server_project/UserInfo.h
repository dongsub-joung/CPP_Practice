#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

struct UserInfo
{
    
    
private:
    //최대 10자
    //최소 8자, 최대 12자
    //주민번호, ""-""제외
    char* m_ID;
    char* m_password;
    char* m_userID_number;

    map<string, string> user_account;
    map<string, string>::iterator it;

    char* input_head;
    char* input_body;
    //생성자 내에서 값을 저장하기 위해서 생성한 변수
    //로그인 계쩡값은 변경되면 안되므로 costn화
    //로그인 여부를 체크해줄 변수

    int list_index = 0;
    //값을 지우기위해 인덱스값을 필요로함.

    bool login_state = false;
    //로그인 상태 확인

    vector<string> WriteHead = vector<string>();
    vector<string> WriteBody = vector<string>();
    
    //관리자 로그인
    const string m_admin_ID = "0000";
    bool m_admin_login_state = false;
} UserInfo;