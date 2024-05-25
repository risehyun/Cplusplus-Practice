#include <iostream>

using namespace std;

class Warrior
{
private:
	int hp;
	int attackPoint;

public:
	void SetInfo(int _hp, int _att)
	{
		this->hp = _hp;
		this->attackPoint = _att;
	}

	int GetHp() const
	{
		return hp;
	}

	int GetAttackPoint() const
	{
		return attackPoint;
	}
};

class Magicion
{
private:
	int hp;
	int attackPoint;

public:
	void SetInfo(int _hp, int _att)
	{
		this->hp = _hp;
		this->attackPoint = _att;
	}

	int GetHp() const
	{
		return hp;
	}

	int GetAttackPoint() const
	{
		return attackPoint;
	}
}; 

class Archer
{
private:
	int hp;
	int attackPoint;

public:
	void SetInfo(int _hp, int _att)
	{
		this->hp = _hp;
		this->attackPoint = _att;
	}

	int GetHp() const
	{
		return hp;
	}

	int GetAttackPoint() const
	{
		return attackPoint;
	}
};

class Party
{
private:
	Warrior* pWarrior;
	Magicion* pMagicion;
	Archer* pArcher;

public:
	void SetInfo(Warrior* _pWarrior
		, Magicion* _pMagicion
		, Archer* _pArcher)
	{
		this->pWarrior = _pWarrior;
		this->pMagicion = _pMagicion;
		this->pArcher = _pArcher;
	}

	void printInfo()
	{
		cout << "Warrior : HP (" << pWarrior->GetHp() << ") " << "Att (" << pWarrior->GetAttackPoint() << ")" << endl;
		cout << "Magicion : HP (" << pMagicion->GetHp() << ") " << "Att (" << pMagicion->GetAttackPoint() << ")" << endl;
		cout << "Archer : HP (" << pArcher->GetHp() << ") " << "Att (" << pArcher->GetAttackPoint() << ")" << endl;
	}
};

int main()
{
	Warrior warrior;
	Magicion magicion;
	Archer archer;

	warrior.SetInfo(100, 20);
	magicion.SetInfo(100, 30);
	archer.SetInfo(100, 10);

	Party party;

	party.SetInfo(&warrior, &magicion, &archer);
	party.printInfo();

	return 0;
}