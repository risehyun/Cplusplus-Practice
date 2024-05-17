#include <iostream>

using namespace std;

class wheel
{
private:
	int size;
	int radius;

public:
	void SetData(int _size, int _radius)
	{
		this->size = _size;
		this->radius = _radius;
	}
	
	void printData()
	{
		cout << "size " << this->size << "inch radius " << this->radius << "cm" << endl;
	}
};

class Car
{
private:
	char name[10];
	int speed;
	int fuel;

	wheel wheel[4];

public:
	void SetData(const char* _name, int _speed, int _fuel, int _wheelSize, int _wheelRadius)
	{
		strcpy_s(name, _name);

		this->speed = _speed;

		this->fuel = _fuel;

		for (int i = 0; i < 4; i++)
		{
			wheel[i].SetData(_wheelSize, _wheelRadius);
		}
	}

	void PrintData()
	{
		cout << this->name << endl;
		cout << "speed : " << this->speed << "km" << endl;
		cout << "fuel : " << this->fuel << "L" << endl;

		for (int i = 0; i < 4; i++)
		{
			cout << "wheel[" << i << "] : ";
			wheel[i].printData();
		}
	}
};


int main()
{
	Car feraril, avante;

	feraril.SetData("feraril", 200, 100, 5, 20);
	feraril.PrintData();

	avante.SetData("avante", 100, 50, 3, 20);
	avante.PrintData();

	return 0;
}