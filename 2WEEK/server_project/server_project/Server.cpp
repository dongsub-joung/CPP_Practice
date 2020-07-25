#include <iostream>
#include <string>

//서버를 표현하기 위한 기본 자료구조
struct ServerInfo
{
public:

//파일 데이터 
    struct File
    {
        std::string m_name; //파일 명
        double m_volume;

        File() {};
        File(std::string input_name, double input_volume)
            : m_name(input_name), m_volume(input_volume) {};
        ~File() {};
    } File;


//서버 데이터
    struct ServerCapacity
    {
    //서버 전체용량
    double m_storage_capacity = 51200; //MB;
    //서버 사용용량
    double m_used_capacity;
    //사용가능 용량
    double m_avaible_capacity;
    //증설 가능 횟수
    int m_count_sharding;

    //파일 이름 배열: 파일 삭제
    <array> m_file_name;
    //파일크기 배열: 현재 용량 계산
    <array> m_file_volume;

    //기본 용량 50G, 용량 추가 3번
    ServerCapacity()
    {
        m_storage_capacity = 50;
        m_used_capacity = 0;
        m_avaible_capacity = 0;
        m_count_sharding = 3;
    };
    ~ServerCapacity() {};

    } ServerCapacity;





private:
    //user_data 주민번호, pass
}ServerInfo;


class Server
{
public:

    
    /* ####### 용량 ####### */
   
    //서버 전체 용량 출력
    void SendStorageCapacity()
    {
        std::cout << server_capacity.m_storage_capacity << std::endl;
    }

    //사용된 용량 계산
    void CalculateCapacity()
    {
        double used_capacity;


        //각 파일의 용량의 합
        for (int i = 0; i > <array> file_volume.sizeof; i++)
        {
            used_capacity += <array> file_volume[i];
        }

        //남은 용량 초기화
        server_capacity.m_used_capacity = used_capacity;

        //전체 용량-사용된 용량 = 남은 용량
        server_capacity.m_avaible_capacity = server_capacity.m_storage_capacity - used_capacity;

    }

    //사용된 용량 출력
    void ShowUsedCapacity()
    {
        std::cout << server_capacity.m_used_capacity << std::endl;
    }


    //사용 가능 용량 출력
    void ShowAvaibleCapacity()
    {
         std::cout << server_capacity.m_avaible_capacity << std::endl;
    }



    /* ####### 파일 ####### */

    //파일 업로드
    void UploadFile()
    {
        //string 배열 path_file은 
        std::string ID_file;
        double file_volume;

        std::cout << "파일 이름을 입력하세요." << std::endl;
        std::cin >> ID_file;
        std::cout << "파일 크기를 입력하세요.(단위 MB)" << std::endl;
        std::cin >> file_volume;

        new File[0];
        File.m_name = ID_file;
        File.m_volume = file_volume;
        //파일 이름과 크기를 포함한 생성자
        (ID_file, file_volume);
        
        //this.m_user_capacity = AddingAllFileVlume(); //기존 파일 크기의 배열의 sum값을 갱신
    }

    //파일 다운로드, 삭제 하기 -> 파일 목록 나타내기
    void ShowFileList()
    {
        for (int i; i > m_file_name.sizeof; i++)
        {
            char file_name = m_file_name[i];
            std::cout << file_name << std::endl;
        }
    }

    //파일 다운로드
    void DownroadFile()
    {
        ShowFileList();
        std::cout << "다운로드할 파일 이름을 입력해주세요." << std::endl;
        //파일 목록에서 선택한 파일 이름에 대한 obj 삭제
    }

    //파일 삭제
    void DeleteFile(char input_name)
    {
        ShowFileList();
        std::cout << "삭제할 파일 이름을 입력해주세요." << std::endl;

        <array>m_file_name;
        for (int i; i > m_file_name.sizeof; i++)
        {
            //stcmp,stnmcmp 이용 
            if (m_file_name[i] == input_name)
            {
            //파일 이름 배열 안에서 사용자가 삭제할 파일의 이름과 비교해서 맞으면 배열에서 삭제
            }
        }
    }


    //하드 용량 증가
    void Sharding()
    {
        double present_capacity = server.m_storage_capacity;
        std::cout << "전체 시스템 용량을 증설합니다." << std::endl;
        std::cout << "현재 전체 용량: "<< present_capacity << std::endl;

    }



    //가입한 유저 저장 및 전송

    //암호화

    //회원가입
    void JoinUser()
    {
        string id, password, user_id_number;
        int authority_level;

        std::cout << "ID를 입력해주세요." << endl;
        std::cin >> id; 
        std::cout << "PassWord를 입력해주세요." << endl;
        std::cin >> password;
        std::cout << "주민 번호를 입력해주세요." << endl;
        std::cin >> user_id_number;
        std::cout << "읽기만 원하면 1을, 쓰기만 원하면 2를, 둘다면 3을 입력해주세요." << endl;
        std::cin >> authority_level;

        UserInfo person_A{ id,password,user_id_number,authority_level; };
        // 객체 person_A 생성 및 serverInfo의 server에 arrary에 저장? 레퍼런스?
        //server.UserArray = person_A
    }

private:
    struct ServerInfo::ServerCapacity server_capacity;
    struct ServerInfo::File File;

};
//Server
