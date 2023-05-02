#pragma once
#include <iostream>
using namespace std;

class CMyString
{
public:
	// �⺻ ������
	CMyString();

	// ��ȯ ������
	explicit CMyString(const char* pszParam);

	// ���� ������
	CMyString(const CMyString& rhs);

	// �̵� ������
	CMyString(CMyString &&rhs);

	~CMyString();

	int SetString(const char* pszParam);

	// �ܼ��� ��� �б⸸ �����ϴ� �޼����̹Ƿ� �޼��带 ���ȭ���ش�.
	const char* GetString() const;

	void Release();

	CMyString& operator=(const CMyString& rhs);

	operator char* () const
	{
		return m_pszData;
	}


private:
	// ���ڿ��� �����ϱ� ���� ���� �Ҵ��� �޸𸮸� ����Ű�� ������
	char* m_pszData;

	// ����� ���ڿ� ����
	int m_nLength;


};