/*
	5.4 �迭 ������

	�迭 ������ ���� �ٸ� ������ó�� ���� ���Ǹ� �� �� �ִ�.

	C���� ������ ������ �迭 �������� �ٷ�� ���� ���ϴ�.
	�׷��� ó�� C�� ��� ���� �迭�� �����͸� ȥ���ϴ� ��찡 ������, 
	���θ� ���� �迭�� ������ �� �� �ٺ������� ���������� �� �� �ִ�.
	������ ��¾�� �����Ͷ���ϸ� ���� �����غ��̰�, �迭�̶�� ��������� ���� ���δ�.
	
	�׷��ٸ� �����Ϳ� �迭�� �ϳ��� �����ָ� ���?
	������ �� �޸� ���� �Ҵ��� �����ϸ鼭 ���ÿ� ����ڿ��� �迭�� �ٷ�� ��ó�� 
	������ �����ϸ� ���� ����̳� ��� Ȯ���̶�� �� ���� �䳢�� ���� �� ���� ������?

	�Ʒ��� �������� CintArray Ŭ������ ����ڰ� int �迭�� ����ϴ� �Ͱ� ������ ������ �����Ѵ�.
	�׷��� Ŭ���� ���ο� �޸𸮸� ���� �����ϴ� �ڵ尡 ����.

	�迭 ������ �Լ��� �Ű������� int �ڷ��� ���� �ϳ����ε�, �̰��� �迭�� �ε����� Ȱ��ȴ�.
	�׸��� '����� ������ ���� ����'�� ������ �Ʒ��� �� ���� ���·� ������ �� �ִ�.

	int& operator[] (int nIndex); 
	=> int&�� ��ȯ�ϴ� ������ l-value�� ���Ǵ� ��츦 ����ؾ� �ϱ� �����̴�.
	   �Ϲ����� ��� �迭 ������ l-value�� �ǵ� r-value�� �ǵ� ù ��° �迭 ������ �Լ��� ���ȴ�.
	  
	int operator[] (int nIndex) const;
	=>  ����� �޼����� �� �ι�° ������ �����(const) �̹Ƿ� ����� ������ ���ؼ��� ȣ���� �� ������ ������ r-value�θ� ���ȴ�.

*/

#include <iostream>
using namespace std;

// ������ �ڵ�
class CIntArray
{
public:
	CIntArray(int nSize)
	{
		// ���޵� ������ŭ int �ڷḦ ���� �� �ִ� �޸𸮸� Ȯ���Ѵ�.
		m_pnData = new int[nSize];
		memset(m_pnData, 0, sizeof(int) * nSize);
	}

	~CIntArray() 
	{ 
		delete m_pnData; 
	}

	// ����� ������ ����� �迭 ������
	int operator[](int nIndex) const
	{
		cout << "operator[] const" << endl;
		return m_pnData[nIndex];
	}

	int& operator[](int nIndex)
	{
		cout << "operator[]" << endl;
		return m_pnData[nIndex];
	}

private:
	// �迭 �޸�
	int* m_pnData;

	// �迭 ����� ����
	int m_nSize;
};

// ����� �ڵ�
void TestFunc(const CIntArray &arParam)
{
	cout << "TestFunc()" << endl;

	// ����� �����̹Ƿ� 'operator[](int nIndex) const'�� ȣ���Ѵ�.
	cout << arParam[3] << endl;
}

int main()
{
	CIntArray arr(5);
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = i * 10;
	}

	// �Լ��� �Ű����� ������ ����� �����̹Ƿ� const CIntArray &arParam�� ����ȴ�.
	TestFunc(arr);

	return 0;
}