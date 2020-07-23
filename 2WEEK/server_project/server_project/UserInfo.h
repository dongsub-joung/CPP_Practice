#pragma once

#include <iostream>
#include <stdio.h>
#include <string>


struct UserInfo	// **사용자를 표현하기 위한 기본 자료구조
{

	UserInfo() {};

	//유저 정보 입력
	UserInfo(int id, int password, int authority_level, int dormant_account)
		:m_id(id), m_password(password), m_authority_level(authority_level), m_dormant_account(dormant_account) {}
	~UserInfo() {};

	//로그인 후 유저 정보 리턴
	int ReturnUserInfo(m_idid, int password, int authority_level, int dormant_account)
	{
		return ReturnUserInfo(this->m_id, this->m_password, this->m_authority_level, this->m_dormant_account);
	}

protected:

	int m_id;	//일단 int형
	int m_password;
	int m_authority_level;
	int m_dormant_account; //휴먼계정
};
//UserInfo;