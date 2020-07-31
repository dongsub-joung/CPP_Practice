#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
#include <map>

enum authority_level
{
    Read_only,
    Write_only,
    Both
};

struct UserInfo
{
    
private:
    /* ID: 최대 10자
    PW: 최소 8자,
    주민번호:  "-" 제외*/
    char* m_ID; //동적 할당
    char* m_password; //동적 할당
    char* m_userID_number; //동적할당

    //ID와 PW를 pair형태로 선언
    map<string, string> user_account;



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