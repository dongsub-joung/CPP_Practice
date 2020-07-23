#include <iostream>

class Marine
{
	int hp;
	int is_dead;

	const int default_damage;

public:                     // 데미지를 리턴한다.
	Marine& be_attacked(int damage_earn);  // 입는 데미지

	
};

	Marine& Marine::be_attacked(int damage_earn) 
	{
		hp -= damage_earn;
		if (hp <= 0) is_dead = true;

		return *this;
	}

int main()
{
	
}