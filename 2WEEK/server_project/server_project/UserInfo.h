#pragma once

#include <iostream>
#include <stdio.h>
#include <string>


struct UserInfo	// **����ڸ� ǥ���ϱ� ���� �⺻ �ڷᱸ��
{

	UserInfo() {};

	//���� ���� �Է�
	UserInfo(int id, int password, int authority_level, int dormant_account)
		:m_id(id), m_password(password), m_authority_level(authority_level), m_dormant_account(dormant_account) {}
	~UserInfo() {};

	//�α��� �� ���� ���� ����
	int ReturnUserInfo(m_idid, int password, int authority_level, int dormant_account)
	{
		return ReturnUserInfo(this->m_id, this->m_password, this->m_authority_level, this->m_dormant_account);
	}

protected:

	int m_id;	//�ϴ� int��
	int m_password;
	int m_authority_level;
	int m_dormant_account; //�޸հ���
};
//UserInfo;