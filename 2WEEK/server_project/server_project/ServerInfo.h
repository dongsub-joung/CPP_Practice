#pragma once
#include "stdafx.h"

//서버를 표현하기 위한 기본 자료구조
struct ServerInfo
{
public:



private:
    //user_data 주민번호, pass
}ServerInfo;


/* ####### 파일 ####### */
struct File
{
    std::string m_name;
    double m_volume;

    File() {};
    File(std::string input_name, double input_volume)
        : m_name(input_name), m_volume(input_volume) {};
    ~File() {};
} File;


/* ####### 서버 용량 ####### */
struct ServerCapacity
{

    double m_storage_capacity; //MB`
    double m_used_capacity;
    double m_avaible_capacity;
    int m_count_sharding; //증설 가능 횟수

    //파일 이름 배열: 파일 삭제
    ServerInfo::File* file = new File;

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