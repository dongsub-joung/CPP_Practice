#include <iostream>

class Marine
{
	int hp;
	int is_dead;

	const int default_damage;

public:                     // �������� �����Ѵ�.
	Marine& be_attacked(int damage_earn);  // �Դ� ������

	
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