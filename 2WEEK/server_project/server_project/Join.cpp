#include "stdafx.h"
using namespace std;

//typedef ����, �ʱ�ȭ
struct UserInfo
{
    char m_ID[20];
    char m_password[20];
    char m_userID_number[13];	//�ֹι�ȣ, ""-""����
    int m_authority_level[3]{1,0,0};	//���� ���� Read=1, Write=1,1,,both RW=1,1,1

    UserInfo() {};
    ~UserInfo() {};

    UserInfo(char id, char password, char user_id_number)
    {
        cout << "ID�� �Է����ּ���." << endl;
        cin >> id;
        cout << "PassWord�� �Է����ּ���." << endl;
        cin >> password;
        cout << "�ֹ� ��ȣ�� �Է����ּ���." << endl;
        cin >> user_id_number;
        m_ID = id;
            
    }


    //m_arrary_index= id�� �迭�� ũ�⸦ ������ ���̴�.
} UserInfo;

