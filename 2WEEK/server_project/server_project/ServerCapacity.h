#pragma once

/* ####### 서버 용량 ####### */
struct ServerCapacity
{

	double m_storage_capacity; //MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding; //증설 가능 횟수

	//파일 이름 배열: 파일 삭제

	//파일크기 배열: 현재 용량 계산
	<array> m_file_volume;

	//기본 용량 50G, 용량 추가 3번
	ServerCapacity()
	{
		m_storage_capacity = 51200;;
		m_used_capacity = 0;
		m_avaible_capacity = 0;
		m_count_sharding = 3;
	};
	~ServerCapacity() {};

} ServerCapacity;
