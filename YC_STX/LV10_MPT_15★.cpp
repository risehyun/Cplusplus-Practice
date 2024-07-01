#include <iostream>

using namespace std;

class Array
{
private:
	int* arr_;
	int cnt_;

public:
	Array(int num) : cnt_(num)
	{
		arr_ = new int[cnt_];
		for (int i = 0; i < cnt_; i++)
		{
			arr_[i] = i;
		}
	};

	Array(const Array& copy)
		:cnt_(copy.cnt_)
	{
		arr_ = new int[cnt_];
		
		for (int i = 0; i < cnt_; i++)
		{
			arr_[i] = i;
		}
	}

	~Array() 
	{ 
		if(arr_ != nullptr)
		{
			delete[] arr_;
		}
	};

	Array &Set(int num, int a)
	{
		arr_[num] = a;
		return *this;
	}

	void Print()
	{
		for (int i = 0; i < cnt_; i++)
		{
			cout << arr_[i] << " ";
		}
		cout << endl;
	}

};

int main()
{
	Array ary1(5);
	Array ary2(7);
	Array ary3(ary1);

	ary2.Set(0, 11).Set(1, 12).Set(2, 13);

	ary1.Print();
	ary2.Print();
	ary3.Print();

	return 0;
}