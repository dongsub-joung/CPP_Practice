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
    /* ID: �ִ� 10��
    PW: �ּ� 8��,
    �ֹι�ȣ:  "-" ����*/
    char* m_ID; //���� �Ҵ�
    char* m_password; //���� �Ҵ�
    char* m_userID_number; //�����Ҵ�

    //ID�� PW�� pair���·� ����
    map<string, string> user_account;



    int list_index = 0;
    //���� ��������� �ε������� �ʿ����.

    bool login_state = false;
    //�α��� ���� Ȯ��

    vector<string> WriteHead = vector<string>();
    vector<string> WriteBody = vector<string>();
    
    //������ �α���
    const string m_admin_ID = "0000";
    bool m_admin_login_state = false;
} UserInfo;