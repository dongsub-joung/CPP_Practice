#pragma once
#include "stdafx.h"

//������ ǥ���ϱ� ���� �⺻ �ڷᱸ��
struct ServerInfo
{
public:



private:
    //user_data �ֹι�ȣ, pass
}ServerInfo;


/* ####### ���� ####### */
struct File
{
    std::string m_name;
    double m_volume;

    File() {};
    File(std::string input_name, double input_volume)
        : m_name(input_name), m_volume(input_volume) {};
    ~File() {};
} File;


/* ####### ���� �뷮 ####### */
struct ServerCapacity
{

    double m_storage_capacity; //MB`
    double m_used_capacity;
    double m_avaible_capacity;
    int m_count_sharding; //���� ���� Ƚ��

    //���� �̸� �迭: ���� ����
    ServerInfo::File* file = new File;

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