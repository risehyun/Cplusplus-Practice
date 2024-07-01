#include <iostream>
#include <ctime>

using namespace std;

class Array
{
private:
	int count_;
	int* ary_;

public:
	Array& operator=(const Array& ary) {
		delete[] ary_;
		count_ = ary.count_;
		ary_ = new int[count_];

		for (int i = 0; i < count_; i++)
			ary_[i] = ary.ary_[i];

		return (*this);
	}

	friend ostream& operator<<(ostream& out, const Array& ary);

	Array(int cnt) {
		count_ = cnt;
		ary_ = new int[cnt];

		for (int i = 0; i < count_; i++)
			ary_[i] = rand() % 10;
	}

	~Array() {
		delete[] ary_;
	}
};

ostream& operator<<(ostream& out, const Array& ary) {
	for (int i = 0; i < ary.count_; i++)
		out << ary.ary_[i] << "     ";
	return out;
}

int main()
{
	srand((unsigned)time(NULL));

	Array ary1(3);
	Array ary2(5);

	cout << ary1 << endl;
	cout << ary2 << endl;
	
	ary1 = ary2;

	cout << ary1 << endl;
	cout << ary2 << endl;


	return 0;
}