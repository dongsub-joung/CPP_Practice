#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

struct UserInfo
{
    
    
private:
    //�ִ� 10��
    //�ּ� 8��, �ִ� 12��
    //�ֹι�ȣ, ""-""����
    char* m_ID;
    char* m_password;
    char* m_userID_number;

    map<string, string> user_account;
    map<string, string>::iterator it;

    char* input_head;
    char* input_body;
    //������ ������ ���� �����ϱ� ���ؼ� ������ ����
    //�α��� ���İ��� ����Ǹ� �ȵǹǷ� costnȭ
    //�α��� ���θ� üũ���� ����

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