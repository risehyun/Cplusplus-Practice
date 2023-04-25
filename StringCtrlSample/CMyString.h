#pragma once
#include <iostream>
using namespace std;

class CMyString
{
public:
	CMyString();
	~CMyString();

private:

	// ���ڿ��� �����ϱ� ���� ���� �Ҵ��� �޸𸮸� ����Ű�� ������
	char* m_pszData;

	// ����� ���ڿ� ����
	int m_nLength;


public:
	int SetString(const char* pszParam);

	// �ܼ��� ��� �б⸸ �����ϴ� �޼����̹Ƿ� �޼��带 ���ȭ���ش�.
	const char* GetString() const;

	void Release();
};

