#pragma once

/* ####### ���� �뷮 ####### */
struct ServerCapacity
{

	double m_storage_capacity; //MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding; //���� ���� Ƚ��

	//���� �̸� �迭: ���� ����

	//����ũ�� �迭: ���� �뷮 ���
	<array> m_file_volume;

	//�⺻ �뷮 50G, �뷮 �߰� 3��
	ServerCapacity()
	{
		m_storage_capacity = 51200;;
		m_used_capacity = 0;
		m_avaible_capacity = 0;
		m_count_sharding = 3;
	};
	~ServerCapacity() {};

} ServerCapacity;
