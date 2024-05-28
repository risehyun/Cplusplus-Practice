#include <iostream>

using namespace std;

class Person 
{
private:
	char mName[10];
	char mAddress[10];
	char mNumber[20];

	int mID;
	int mMileage;

public:
	void SetName(const char* _Name)
	{
		strcpy_s(mName, _Name);
	}

	void SetAddress(const char* _Address)
	{
		strcpy_s(mAddress, _Address);
	}

	void SetNumber(const char* _Number)
	{
		strcpy_s(mNumber, _Number);
	}

	void SetID(int _Id)
	{
		mID = _Id;
	}

	void SetMileage(int _Mileage)
	{
		mMileage = _Mileage;
	}

	const char* GetName() const
	{
		return mName;
	}

	const char* GetAddress() const
	{
		return mAddress;
	}

	const char* GetNumber() const
	{
		return mNumber;
	}

	int GetID() const
	{
		return mID;
	}

	int GetMileage() const
	{
		return mMileage;
	}

	void GetInfo()
	{
		cout << "----- 고객 정보 -----" << endl;
		cout << "이름 : " << this->GetName() << endl;
		cout << "주소 : " << this->GetAddress() << endl;
		cout << "연락처 : " << this->GetNumber() << endl;
		cout << "고객ID : " << this->GetID() << endl;
		cout << "마일리지 : " << this->GetMileage() << endl;
	}
};

int main()
{
	Person mimi;

	char name[10] = "";
	char address[10] = "";
	char number[20] = "";

	int id = 0;
	int mileage = 0;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	mimi.SetName(name);
	cout << endl;
	
	cout << "주소를 입력하세요 : "; 
	cin >> address;
	mimi.SetAddress(address);
	cout << endl;

	cout << "연락처를 입력하세요 : "; 
	cin >> number;
	mimi.SetNumber(number);
	cout << endl;

	cout << "ID를 입력하세요 : "; 
	cin >> id;
	mimi.SetID(id);
	cout << endl;

	cout << "마일리지를 입력하세요 : ";
	cin >> mileage;
	mimi.SetMileage(mileage);
	cout << endl;

	mimi.GetInfo();


	return 0;
}