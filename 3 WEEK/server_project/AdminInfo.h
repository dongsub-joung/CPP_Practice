#pragma once

#include <iostream>
#include <stdio.h>
#include <string>

struct AdminInfo	//**�����ڸ� ǥ���ϱ� ���� �⺻ �ڷᱸ�� 
{
	AdminInfo() {};




private:

	std::string code;	//code�� 4byte
	bool pass_admin;
	int sharding_count;
};
//AdminInfo