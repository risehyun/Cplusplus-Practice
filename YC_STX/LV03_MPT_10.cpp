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
		cout << "----- �� ���� -----" << endl;
		cout << "�̸� : " << this->GetName() << endl;
		cout << "�ּ� : " << this->GetAddress() << endl;
		cout << "����ó : " << this->GetNumber() << endl;
		cout << "��ID : " << this->GetID() << endl;
		cout << "���ϸ��� : " << this->GetMileage() << endl;
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

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	mimi.SetName(name);
	cout << endl;
	
	cout << "�ּҸ� �Է��ϼ��� : "; 
	cin >> address;
	mimi.SetAddress(address);
	cout << endl;

	cout << "����ó�� �Է��ϼ��� : "; 
	cin >> number;
	mimi.SetNumber(number);
	cout << endl;

	cout << "ID�� �Է��ϼ��� : "; 
	cin >> id;
	mimi.SetID(id);
	cout << endl;

	cout << "���ϸ����� �Է��ϼ��� : ";
	cin >> mileage;
	mimi.SetMileage(mileage);
	cout << endl;

	mimi.GetInfo();


	return 0;
}