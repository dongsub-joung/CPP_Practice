
/* ####### 파일 ####### */


class Server
{
public:
    Serverinfo;

    /* ####### 용량 ####### */
   
    void SendStorageCapacity()
    {
        std::cout << ServerCapacity. //m_storage_capacity << std::endl;
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

        if (file_volume > server_capacity)
        {

        }

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


private:


};
//Server
