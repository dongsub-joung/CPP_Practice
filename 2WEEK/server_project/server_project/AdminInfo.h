#pragma once

#include <iostream>
#include <stdio.h>
#include <string>

struct AdminInfo	//**관리자를 표현하기 위한 기본 자료구조 
{
	AdminInfo() {};




private:

	std::string code;	//code는 4byte
	bool pass_admin;
	int sharding_count;
};
//AdminInfo