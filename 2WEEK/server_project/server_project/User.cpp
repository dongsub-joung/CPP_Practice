//typedef 선언, 초기화
struct UserInfo
{
    //m_arrary_index= id값 배열의 크기를 리턴한 값이다.
    char ID[20];
    char PassWord[20];
    char UserIDNumber[13];	//주민번호, ""-""제외
    int Authoritylevel;	//권한 레벨 Read=1, Write=2,both RW=3

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
    }

}UserInfo;


class UserMode : public UserInfo
{

public:
    //필요한 멤버함수

       /*
    현재 존재하는 유저 수를 제공
    다른 정보 배열에 index의 기준제공
    관리자에게 유저 수를 보낼 때,
    */
    vector.size(arrary_ID)
    {
        this.arrary_index;
        return;
    }

    //현재 가입된 유저가 맞는지 확인하는 함수
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
        //유저 권한 정의
        define_authority() {}

        //유저 권한 받아오기
        take_authority_level() {}
    };
};
//UserMode

