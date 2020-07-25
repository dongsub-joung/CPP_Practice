#include <iostream>
#include <string>

//������ ǥ���ϱ� ���� �⺻ �ڷᱸ��
struct ServerInfo
{
public:

//���� ������ 
    struct File
    {
        std::string m_name; //���� ��
        double m_volume;

        File() {};
        File(std::string input_name, double input_volume)
            : m_name(input_name), m_volume(input_volume) {};
        ~File() {};
    } File;


//���� ������
    struct ServerCapacity
    {
    //���� ��ü�뷮
    double m_storage_capacity = 51200; //MB;
    //���� ���뷮
    double m_used_capacity;
    //��밡�� �뷮
    double m_avaible_capacity;
    //���� ���� Ƚ��
    int m_count_sharding;

    //���� �̸� �迭: ���� ����
    <array> m_file_name;
    //����ũ�� �迭: ���� �뷮 ���
    <array> m_file_volume;

    //�⺻ �뷮 50G, �뷮 �߰� 3��
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
    //user_data �ֹι�ȣ, pass
}ServerInfo;


class Server
{
public:

    
    /* ####### �뷮 ####### */
   
    //���� ��ü �뷮 ���
    void SendStorageCapacity()
    {
        std::cout << server_capacity.m_storage_capacity << std::endl;
    }

    //���� �뷮 ���
    void CalculateCapacity()
    {
        double used_capacity;


        //�� ������ �뷮�� ��
        for (int i = 0; i > <array> file_volume.sizeof; i++)
        {
            used_capacity += <array> file_volume[i];
        }

        //���� �뷮 �ʱ�ȭ
        server_capacity.m_used_capacity = used_capacity;

        //��ü �뷮-���� �뷮 = ���� �뷮
        server_capacity.m_avaible_capacity = server_capacity.m_storage_capacity - used_capacity;

    }

    //���� �뷮 ���
    void ShowUsedCapacity()
    {
        std::cout << server_capacity.m_used_capacity << std::endl;
    }


    //��� ���� �뷮 ���
    void ShowAvaibleCapacity()
    {
         std::cout << server_capacity.m_avaible_capacity << std::endl;
    }



    /* ####### ���� ####### */

    //���� ���ε�
    void UploadFile()
    {
        //string �迭 path_file�� 
        std::string ID_file;
        double file_volume;

        std::cout << "���� �̸��� �Է��ϼ���." << std::endl;
        std::cin >> ID_file;
        std::cout << "���� ũ�⸦ �Է��ϼ���.(���� MB)" << std::endl;
        std::cin >> file_volume;

        new File[0];
        File.m_name = ID_file;
        File.m_volume = file_volume;
        //���� �̸��� ũ�⸦ ������ ������
        (ID_file, file_volume);
        
        //this.m_user_capacity = AddingAllFileVlume(); //���� ���� ũ���� �迭�� sum���� ����
    }

    //���� �ٿ�ε�, ���� �ϱ� -> ���� ��� ��Ÿ����
    void ShowFileList()
    {
        for (int i; i > m_file_name.sizeof; i++)
        {
            char file_name = m_file_name[i];
            std::cout << file_name << std::endl;
        }
    }

    //���� �ٿ�ε�
    void DownroadFile()
    {
        ShowFileList();
        std::cout << "�ٿ�ε��� ���� �̸��� �Է����ּ���." << std::endl;
        //���� ��Ͽ��� ������ ���� �̸��� ���� obj ����
    }

    //���� ����
    void DeleteFile(char input_name)
    {
        ShowFileList();
        std::cout << "������ ���� �̸��� �Է����ּ���." << std::endl;

        <array>m_file_name;
        for (int i; i > m_file_name.sizeof; i++)
        {
            //stcmp,stnmcmp �̿� 
            if (m_file_name[i] == input_name)
            {
            //���� �̸� �迭 �ȿ��� ����ڰ� ������ ������ �̸��� ���ؼ� ������ �迭���� ����
            }
        }
    }


    //�ϵ� �뷮 ����
    void Sharding()
    {
        double present_capacity = server.m_storage_capacity;
        std::cout << "��ü �ý��� �뷮�� �����մϴ�." << std::endl;
        std::cout << "���� ��ü �뷮: "<< present_capacity << std::endl;

    }



    //������ ���� ���� �� ����

    //��ȣȭ

    //ȸ������
    void JoinUser()
    {
        string id, password, user_id_number;
        int authority_level;

        std::cout << "ID�� �Է����ּ���." << endl;
        std::cin >> id; 
        std::cout << "PassWord�� �Է����ּ���." << endl;
        std::cin >> password;
        std::cout << "�ֹ� ��ȣ�� �Է����ּ���." << endl;
        std::cin >> user_id_number;
        std::cout << "�б⸸ ���ϸ� 1��, ���⸸ ���ϸ� 2��, �Ѵٸ� 3�� �Է����ּ���." << endl;
        std::cin >> authority_level;

        UserInfo person_A{ id,password,user_id_number,authority_level; };
        // ��ü person_A ���� �� serverInfo�� server�� arrary�� ����? ���۷���?
        //server.UserArray = person_A
    }

private:
    struct ServerInfo::ServerCapacity server_capacity;
    struct ServerInfo::File File;

};
//Server
