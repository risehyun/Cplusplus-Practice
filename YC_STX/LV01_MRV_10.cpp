#include <iostream>

using namespace std;

class Player
{
private:
	int hp = 0;
	char name[10];
	char weapon[10];

public:
	void SetInfo(const char* _name, const char* _weapon, int _hp)
	{
		strcpy_s(name, _name);
		hp = _hp;
		strcpy_s(weapon, _weapon);
	}

	void PrintInfo()
	{
		cout << this->name << endl;
		cout << "hp : " << this->hp << endl;
		cout << "weapon : " << this->weapon << endl;
	}
};

int main()
{
	Player warrior;
	Player archer;

	warrior.SetInfo("warrior", "sword", 200);
	warrior.PrintInfo();

	archer.SetInfo("archer", "bow", 100);
	archer.PrintInfo();

	return 0;
}