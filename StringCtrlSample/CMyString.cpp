
/*
	���ڿ��� �����ϸ� ���������� �ʿ��� �޸𸮸� �ڵ����� ���� �Ҵ��ϰ� ���ڿ��� �����ϴ� Ŭ������ �ۼ��غ���.
	�̸� Ȱ���ϸ� ����ڴ� �޸𸮸� ���� �ٷ�� �ڵ带 �ۼ����� �ʾƵ� �ȴ�
*/

#include "CMyString.h"


CMyString::CMyString()
	: m_pszData(nullptr)
	, m_nLength(0)
{

}

CMyString::~CMyString()
{
	// ��ü�� �Ҹ��ϱ� ���� �޸𸮸� �����Ѵ�.
	Release();
}

int CMyString::SetString(const char* pszParam)
{
	// ���ο� ���ڿ� �Ҵ翡 �ռ� ���� ������ �����Ѵ�.
	Release();

	// NULL�� �μ��� �Լ��� ȣ���ߴٴ� ���� �޸𸮸� �����ϰ� NULL�� �ʱ�ȭ�ϴ� ������ �� �� �ִ�.
	if (pszParam == nullptr)
	{
		return 0;
	}

	// ���ڿ��� ���̰� 0�� ��쿡�� ����ڰ� �ʱ�ȭ�� �Ϸ��� �ǵ���� �ν��ϰ� ó���Ѵ�.
	int nLength = strlen(pszParam);

	if (nLength == 0)
	{
		return 0;
	}

	// ���ڿ��� ���� NULL ���ڸ� ������ �޸𸮸� �� ���̿��� +1 �� ��ŭ �Ҵ��Ѵ�.
	m_pszData = new char[m_nLength + 1];

	// ���� �Ҵ��� �޸𸮿� ���ڿ��� �����Ѵ�.
	strcpy_s(m_pszData, sizeof(char) * (nLength + 1), pszParam);
	m_nLength = nLength;

	// ���ڿ��� ���̸� ��ȯ�Ѵ�.
	return nLength;
}

const char* CMyString::GetString(void) const
{
	return m_pszData;
}

void CMyString::Release()
{
	// �� �Լ��� ���� �� ȣ�� �� ��츦 ����Ͽ� �ֿ� ����� �ʱ�ȭ���ش�.
	if (m_pszData != nullptr)
	{
		delete[] m_pszData;
	}

	m_pszData = nullptr;
	m_nLength = 0;
}