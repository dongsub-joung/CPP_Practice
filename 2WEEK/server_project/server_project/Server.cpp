#include <iostream>
#include <string>

//������ ǥ���ϱ� ���� �⺻ �ڷᱸ��
class ServerInfo
{
public:

    //���� ��ü�뷮
    double m_storage_capacity = 51200; //MB;
    //���� ���뷮
    double m_used_capacity;
    //��밡�� �뷮
    double m_avaible_capacity;

    //���� �̸� �迭: ���� ����
    <array> m_file_name;
    //����ũ�� �迭: ���� �뷮 ���
    <array> m_file_volume;


    ServerInfo() {};
    
    //���� ���ε� �� ������ ���� ũ�� �迭�� �ʱ�ȭ
    ServerInfo(double file_volume)
    {
        <array> m_file_volume = file_volume;
    }
    ~ ServerInfo() {};


private:
    //user_data �ֹι�ȣ, pass
};
//ServerInfo


class Server
{
public:

    //���� ��ü �뷮 ���
    void SendStorageCapacity()
    {
        std::cout << m_storage_capacity << std::endl;
    }

    //��� ���� �뷮 ���
    void CalculateCapacity()
    {
        //��ü ���뷮 - ���� ũ���� ������ �� ���� ��
        m_storage_capacity - array file_volume;
    }

    //��� �뷮 ���
    double AddingAllFileVlume()
    {
        double sum
            for(int i = 0; i > <array> file_volume.sizeof; i++)
            {
                sum += <array> file_volume[i];
            }

        return sum;
    }

    /*
    ���� ���� ����
    file_volume
    */
    //���� ���ε�
    void UploadFile(double file_volume)
    {
        //string �迭 path_file�� 
        string ID_file;
        string path_file;

        std::cout << "���� ��θ� �Է��ϼ���." << std::endl;
        std::cin >> path_file;
        std::cout << "���� �̸��� �Է��ϼ���." << std::endl;
        std::cin >> ID_file;
        std::cout << "���� ũ�⸦ �Է��ϼ���.(���� MB)" << std::endl;
        std::cin >> file_volume;

        ServerInfo* server = new ServerInfo(file_volume); //���� ũ�� �迭�� �߰�
        
        this.m_user_capacity = AddingAllFileVlume(); //���� ���� ũ���� �迭�� sum���� ����
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
    struct ServerInfo server
    {

    };

};
//Server
