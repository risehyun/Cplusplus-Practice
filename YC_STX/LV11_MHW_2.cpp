#include <iostream>

using namespace std;

struct Vector2
{
	int x;
	int y;

	Vector2 operator+(Vector2 _other)
	{
		Vector2 newVector;
		
		newVector.x = this->x + _other.x;
		newVector.y = this->y + _other.y;

		return newVector;
	}

	Vector2 operator-(Vector2 _other)
	{
		Vector2 newVector;

		newVector.x = this->x - _other.x;
		newVector.y = this->y - _other.y;

		return newVector;
	}

	
};