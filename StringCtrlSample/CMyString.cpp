#include "CMyString.h"

// ��ȯ ������
CMyString::CMyString(const char* pszParam)
	: m_pszData(NULL)
	, m_nLength(0)
{
	SetString(pszParam);
}

// ���� ������
CMyString::CMyString(const CMyString& rhs)
	: m_pszData(NULL)
	, m_nLength(0)
{
	this->SetString(rhs.GetString());
}

// �̵� ������
CMyString::CMyString(CMyString&& rhs)
	: m_pszData(NULL)
	, m_nLength(0)
{
	cout << "CMyString �̵� ������ ȣ��" << endl;

	// ���� ���縦 ����ص� ��� ����. ������ ������ �� �Ҹ�� ���̱� �����̴�.
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	// ���� �ӽ� ��ü�� ������� �ʱ�ȭ�Ѵ�. ����� �����ϸ� �ȵȴ�.
	// ���⼭ �������� ������ NULL�� �ʱ�ȭ ���ֹǷ� �� �����Ͱ� ���ÿ� �� ����� ����Ű�� ���� �߻����� �ʴ´�.
	// ���� �ٷ� ������ ���� ���縦 �����ص� ������ ���� �ʴ´�.
	rhs.m_pszData = NULL;
	rhs.m_nLength = 0;
}

CMyString::CMyString()
	: m_pszData(NULL)
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

	// ���ڿ��� ���� NULL ���ڸ� ����� �޸𸮸� �� ���̿��� +1 �� ��ŭ �Ҵ��Ѵ�.
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

int CMyString::GetLength() const
{
	return m_nLength;
}


CMyString& CMyString::operator=(const CMyString& rhs)
{
	// �ڱ� �ڽſ� ���� �����̸� �ƹ��͵� ���� �ʴ´�.
	if (this != &rhs)
	{
		this->SetString(rhs.GetString());
	}

	return *this;
}


int CMyString::Append(const char* pszParam)
{
	// <����ڵ�>
	// ������, Ŭ������ �Ű������� ���� ���� �Ű������� ��ȿ���� �˻������ �մϴ�. �̷� ����ڵ带 ����ȭ�սô�.
	if (m_pszData == NULL)
	{
		return 0;
	}

	int nLenParam = strlen(pszParam);
	
	// Ȥ�ó� ���̰� 0�� ��Ȳ�� ���� �� �����Ƿ� �̸� ���� ����ڵ带 �ۼ��մϴ�.
	if (nLenParam == 0)
	{
		return 0;
	}


	// <1�� �۾� : ������ Append�� ���� �ʰ� ���� �⺻���� ��Ȳ���� �������� �ڵ��Ѵ�.>
	// ��Ʈ�� ���ڿ��� ���ٸ� ���� ���ڿ��� �Ҵ��� �Ͱ� �����ϰ� ó���Ѵ�.
	if (m_pszData == NULL)
	{
		SetString(pszParam);

		return m_nLength;
	}

	// ���� ���ڿ��� ���� ���
	int nLenCur = m_nLength;

	// �� ���ڿ��� ���ļ� ������ �� �ִ� �޸𸮸� ���� �Ҵ���
	char* pszResult = new char[nLenCur + nLenParam + 1];

	// ���ڿ� ����
	strcpy_s(pszResult, sizeof(char) * (nLenCur + 1), m_pszData);
	strcpy_s(pszResult + (sizeof(char) * nLenCur),
		sizeof(char) * (nLenParam + 1), pszParam);

	// ���� ���ڿ� ���� �� ��� ���� ����
	Release();
	m_pszData = pszResult;
	m_nLength = nLenCur + nLenParam;

	return m_nLength;
}


CMyString CMyString::operator+(const CMyString& rhs)
{
	CMyString strResult(m_pszData);
	strResult.Append(rhs.GetString());

	return strResult;
}


CMyString& CMyString::operator+=(const CMyString& rhs)
{
	Append(rhs.GetString());
	return *this;
}