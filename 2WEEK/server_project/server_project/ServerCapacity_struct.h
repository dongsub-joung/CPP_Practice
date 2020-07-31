#pragma once

#include <string>
#include <map>
#include <array>

/* ####### ���� �뷮 ####### */
struct ServerCapacity
{

	double m_storage_capacity; //MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding; //���� ���� Ƚ��

	//���� �̸� �迭: ���� ����
	std::array<char> m_file_name;

	//����ũ�� �迭: ���� �뷮 ���
	<array> m_file_volume;
	
	enum SverCapacity_value
	{
		Default_50G = 51200,
		Default_used = 0,
		Default_avaible= 0,
		Default_sharding_count=3
	};

	//�⺻ �뷮 50G, �뷮 �߰� 3��
	ServerCapacity()
	{
		m_storage_capacity = Default_50G;;
		m_used_capacity = Default_used;
		m_avaible_capacity = Default_avaible;
		m_count_sharding = Default_sharding_count;
	};
	~ServerCapacity() {};

} ServerCapacity;
