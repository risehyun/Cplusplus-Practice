#include <iostream>

using namespace std;

class Time 
{
private:
	int mHour;
	int mMinite;
	int mSecond;

public:
	Time(int hour_, int minite_, int second_)
		: mHour(hour_), mMinite(minite_), mSecond(second_) {}

	void Print()
	{
		cout << mHour << "�� " << mMinite << "�� " << mSecond << "��" << endl;
	}

	// ���� �����ϵ��� �����ε�
	Time operator+(Time& other)
	{
		return Time(mHour + other.mHour, mMinite + other.mMinite, mSecond + other.mSecond);
	}

};

int main()
{
	
	Time time1(4, 50, 40);
	Time time2(3, 40, 30);

	Time time3 = time1 + time2;

	time1.Print();
	time2.Print();
	time3.Print();

	return 0;
}