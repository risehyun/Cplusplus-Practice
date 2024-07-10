#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

namespace rise
{
	template <typename T>
	class vector
	{
	public:
		vector()
			: mArr(nullptr)
			, mSize(0)
			, mCapacity(0)
		{
			
		}

		~vector()
		{
			// 동적할당된 mArr를 소멸자에서 메모리 해제해준다.
			delete[] mArr;
		}

		// 1. n개의 원소를 저장할 공간을 예약하는 함수 reserve를 구현한다.
		// 배열 크기는 음수가 될 수 없으므로 size_t를 사용한다.
		// size_t는 unsigned int이므로 양수만 가능하다
		void reserve(size_t size)
		{
			mArr = new T[size];
			mCapacity = size;
		}

		// 2. 확장된 크기만큼 vector의 크기를 조절하는 resize 함수를 구현한다.
		void resize(size_t size)
		{
			// 만약 resize할 값이 현재 사이즈보다 작다면 오류가 발생하므로 예외처리해준다.
			if (size < mSize)
				return;

			// 새롭게 사용할 size에서 앞으로 확장된 가능성을 고려해 약간 더 큰 값을 reserve해 메모리 공간을 예약한다.
			reserve(size + (size/2));
			mSize = size;

			// 메모리를 초기화 해주는 함수
			memset(mArr, NULL, mCapacity);
			
		}

		void push_back(T data)
		{
			mCapacity++;
			vector* newVector = new T[mCapacity];

			newVector[mCapacity] = data;

		}

		int size() const
		{
			return mSize;
		}

		int capacity() const
		{
			return mCapacity;
		}

		void push_back(T& value)
		{
			if (mSize > mCapacity)
			{
				mCapacity *= 2;

				T* newArr = new T[mCapacity];

				for (size_t i = 0; i < mSize; i++)
				{
					newArr[i] = mArr[i];
				}

				delete[] mArr;

				newArr[mSize++] = value;
				mArr = newArr;
			}
		}

		void pop_back()
		{
			mSize = mSize > 0 ? mSize - 1/*mSize를 하나 줄여주겠다*/ : NULL /* NULL == 아무것도 하지 않겠다*/;
		}

		void clear()
		{
			// mSize가 0이면 해당 위치에 대해 접근이 불가능해지므로 0으로 바꿔준다.
			mSize = 0;
		}

		bool empty() const
		{
			return mSize == 0;
		}

		// 원본 값을 바로 보내기 위해서 참조를 사용한다.
		T& operator[](size_t idx)
		{
			if (mSize <= idx)
			{
				// 현재 사용할 수 있는 메모리 공간 크기보다 큰 인덱스에 접근하려는 경우 
				// assert를 사용해 의도적으로 프로그램을 터트려준다. 
				// (개발단계 한정, 릴리즈 모드에서는 return; 으로 일단 프로그램을 계속 실행시킨다)
				// return;
				assert(NULL);
			}

			return mArr[idx];
		}


		// 두 벡터가 같은지 확인
		bool operator==(const vector& other) const
		{
			// 1. 사이즈가 서로 다르면 애초에 다른 벡터이다
			if (this->size() != other.size())
				return false;

			// 2. 사이즈가 같아도 안에 데이터가 하나라도 다르면 서로 다른 벡터이다
			for (size_t i = 0; i < mSize; i++)
			{
				if (mArr[i] != other[i])
					return false;
			}
		}

	private:
		T* mArr;
		int mCapacity; // 실제 메모리에 할당된 배열의 크기를 나타냄
		int mSize;	   // 사용할 수 있는 배열의 메모리 공간 크기를 나타냄
	};

}

int main()
{
	rise::vector<int> vector;
	std::vector<int> stdVector;

	stdVector.resize(11);
	stdVector.reserve(15);
	stdVector[10] = 100;
	stdVector.push_back(2000);

	int cap = stdVector.capacity();

	vector.resize(10);
	vector[0] = 100;
	vector[1] = 200;
	vector[9] = 200;
	vector.pop_back();

	cout << vector[0] << ", " << vector[1];
	return 0;
}