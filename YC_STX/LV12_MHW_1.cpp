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
			// �����Ҵ�� mArr�� �Ҹ��ڿ��� �޸� �������ش�.
			delete[] mArr;
		}

		// 1. n���� ���Ҹ� ������ ������ �����ϴ� �Լ� reserve�� �����Ѵ�.
		// �迭 ũ��� ������ �� �� �����Ƿ� size_t�� ����Ѵ�.
		// size_t�� unsigned int�̹Ƿ� ����� �����ϴ�
		void reserve(size_t size)
		{
			mArr = new T[size];
			mCapacity = size;
		}

		// 2. Ȯ��� ũ�⸸ŭ vector�� ũ�⸦ �����ϴ� resize �Լ��� �����Ѵ�.
		void resize(size_t size)
		{
			// ���� resize�� ���� ���� ������� �۴ٸ� ������ �߻��ϹǷ� ����ó�����ش�.
			if (size < mSize)
				return;

			// ���Ӱ� ����� size���� ������ Ȯ��� ���ɼ��� ����� �ణ �� ū ���� reserve�� �޸� ������ �����Ѵ�.
			reserve(size + (size/2));
			mSize = size;

			// �޸𸮸� �ʱ�ȭ ���ִ� �Լ�
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
			mSize = mSize > 0 ? mSize - 1/*mSize�� �ϳ� �ٿ��ְڴ�*/ : NULL /* NULL == �ƹ��͵� ���� �ʰڴ�*/;
		}

		void clear()
		{
			// mSize�� 0�̸� �ش� ��ġ�� ���� ������ �Ұ��������Ƿ� 0���� �ٲ��ش�.
			mSize = 0;
		}

		bool empty() const
		{
			return mSize == 0;
		}

		// ���� ���� �ٷ� ������ ���ؼ� ������ ����Ѵ�.
		T& operator[](size_t idx)
		{
			if (mSize <= idx)
			{
				// ���� ����� �� �ִ� �޸� ���� ũ�⺸�� ū �ε����� �����Ϸ��� ��� 
				// assert�� ����� �ǵ������� ���α׷��� ��Ʈ���ش�. 
				// (���ߴܰ� ����, ������ ��忡���� return; ���� �ϴ� ���α׷��� ��� �����Ų��)
				// return;
				assert(NULL);
			}

			return mArr[idx];
		}


		// �� ���Ͱ� ������ Ȯ��
		bool operator==(const vector& other) const
		{
			// 1. ����� ���� �ٸ��� ���ʿ� �ٸ� �����̴�
			if (this->size() != other.size())
				return false;

			// 2. ����� ���Ƶ� �ȿ� �����Ͱ� �ϳ��� �ٸ��� ���� �ٸ� �����̴�
			for (size_t i = 0; i < mSize; i++)
			{
				if (mArr[i] != other[i])
					return false;
			}
		}

	private:
		T* mArr;
		int mCapacity; // ���� �޸𸮿� �Ҵ�� �迭�� ũ�⸦ ��Ÿ��
		int mSize;	   // ����� �� �ִ� �迭�� �޸� ���� ũ�⸦ ��Ÿ��
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