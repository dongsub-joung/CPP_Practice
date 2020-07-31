#pragma once

#include <string>
#include <map>
#include <array>

/* ####### 서버 용량 ####### */
struct ServerCapacity
{

	double m_storage_capacity; //MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding; //증설 가능 횟수

	//파일 이름 배열: 파일 삭제
	std::array<char> m_file_name;

	//파일크기 배열: 현재 용량 계산
	<array> m_file_volume;
	
	enum SverCapacity_value
	{
		Default_50G = 51200,
		Default_used = 0,
		Default_avaible= 0,
		Default_sharding_count=3
	};

	//기본 용량 50G, 용량 추가 3번
	ServerCapacity()
	{
		m_storage_capacity = Default_50G;;
		m_used_capacity = Default_used;
		m_avaible_capacity = Default_avaible;
		m_count_sharding = Default_sharding_count;
	};
	~ServerCapacity() {};

} ServerCapacity;
