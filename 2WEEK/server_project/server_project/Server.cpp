
/* ####### ���� ####### */


class Server
{
public:
    Serverinfo;

    /* ####### �뷮 ####### */
   
    void SendStorageCapacity()
    {
        std::cout << ServerCapacity. //m_storage_capacity << std::endl;
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

        if (file_volume > server_capacity)
        {

        }

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


private:


};
//Server
