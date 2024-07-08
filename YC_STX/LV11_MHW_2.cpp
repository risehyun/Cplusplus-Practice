#include <iostream>

using namespace std;

struct Vector2
{
	int x;
	int y;

	// 1
	Vector2 operator+(Vector2 _other)
	{
		Vector2 newVector;
		
		newVector.x = this->x + _other.x;
		newVector.y = this->y + _other.y;

		return newVector;
	}

	// 2
	Vector2 operator-(Vector2 _other)
	{
		Vector2 newVector;

		newVector.x = this->x - _other.x;
		newVector.y = this->y - _other.y;

		return newVector;
	}

	// 3
	Vector2 operator*(Vector2 _other)
	{
		Vector2 newVector;

		newVector.x = this->x * _other.x;
		newVector.y = this->y * _other.y;

		return newVector;
	}

	// 4
	bool operator<(Vector2 _other)
	{
		return (this->x < _other.x && this->y < _other.y);
	}

	// 5
	bool operator>(Vector2 _other)
	{
		return (this->x > _other.x && this->y < _other.y);
	}

	// 6
	bool operator==(Vector2 _other)
	{
		return (this->x == _other.x && this->y == _other.y);
	}

	// 7
	bool operator!=(Vector2 _other)
	{
		return (this->x != _other.x && this->y != _other.y);
	}

	// 8
	Vector2 operator/(Vector2 _other)
	{
		Vector2 newVector;

		newVector.x = this->x / _other.x;
		newVector.y = this->y / _other.y;

		return newVector;
	}
	
	// 9
	Vector2 operator%(Vector2 _other)
	{
		Vector2 newVector;

		newVector.x = this->x % _other.x;
		newVector.y = this->y % _other.y;

		return newVector;
	}

	// 10
	Vector2 operator++(int) 
	{ 
		Vector2 temp = *this;
		this->x++;
		this->y++;
		return temp; 
	}

};

int main()
{
	Vector2 test;
	test.x = 3;
	test.y = 3;

	Vector2 test2;
	test2.x = 1;
	test2.y = 1;


	Vector2 result;
	result = test + test2;

	cout << result.x << ", " << result.y << endl;

	result = test - test2;
	cout << result.x << ", " << result.y << endl;

	result = test * test2;
	cout << result.x << ", " << result.y << endl;

	result = test / test2;
	cout << result.x << ", " << result.y << endl;

	result = test % test2;
	cout << result.x << ", " << result.y << endl;

	test++;
	cout << test.x << ", " << test.y << endl;

	bool resultBool = test > test2;
	resultBool = test < test2;

	resultBool = test > test2;

	resultBool = test == test2;

	resultBool = test != test2;

	return 0;
}