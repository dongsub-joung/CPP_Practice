//typedef ����, �ʱ�ȭ
struct UserInfo
{
    //m_arrary_index= id�� �迭�� ũ�⸦ ������ ���̴�.
    char ID[20];
    char PassWord[20];
    char UserIDNumber[13];	//�ֹι�ȣ, ""-""����
    int Authoritylevel;	//���� ���� Read=1, Write=2,both RW=3

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
    }

}UserInfo;


class UserMode : public UserInfo
{

public:
    //�ʿ��� ����Լ�

       /*
    ���� �����ϴ� ���� ���� ����
    �ٸ� ���� �迭�� index�� ��������
    �����ڿ��� ���� ���� ���� ��,
    */
    vector.size(arrary_ID)
    {
        this.arrary_index;
        return;
    }

    //���� ���Ե� ������ �´��� Ȯ���ϴ� �Լ�
    CheckUserId(char input_id)
    {
        arrary_id

    }

    if (check_passed == 0)
    {

    }


private:
    struct UserInfo user
    {
        //���� ���� ����
        define_authority() {}

        //���� ���� �޾ƿ���
        take_authority_level() {}
    };
};
//UserMode

