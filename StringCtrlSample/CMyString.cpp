#include "CMyString.h"

// 변환 생성자
CMyString::CMyString(const char* pszParam)
	: m_pszData(NULL)
	, m_nLength(0)
{
	SetString(pszParam);
}

// 복사 생성자
CMyString::CMyString(const CMyString& rhs)
	: m_pszData(NULL)
	, m_nLength(0)
{
	this->SetString(rhs.GetString());
}

// 이동 생성자
CMyString::CMyString(CMyString&& rhs)
	: m_pszData(NULL)
	, m_nLength(0)
{
	cout << "CMyString 이동 생성자 호출" << endl;

	// 얕은 복사를 사용해도 상관 없다. 어차피 원본이 곧 소멸될 것이기 때문이다.
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	// 원본 임시 객체의 멤버들은 초기화한다. 절대로 해제하면 안된다.
	// 여기서 원본값을 변경해 NULL로 초기화 해주므로 두 포인터가 동시에 한 대상을 가리키는 일이 발생하지 않는다.
	// 따라서 바로 위에서 얕은 복사를 수행해도 문제가 되지 않는다.
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
	// 객체가 소멸하기 전에 메모리를 해제한다.
	Release();
}


int CMyString::SetString(const char* pszParam)
{
	// 새로운 문자열 할당에 앞서 기존 정보를 해제한다.
	Release();

	// NULL을 인수로 함수를 호출했다는 것은 메모리를 해제하고 NULL로 초기화하는 것으로 볼 수 있다.
	if (pszParam == nullptr)
	{
		return 0;
	}

	// 문자열의 길이가 0인 경우에도 사용자가 초기화를 하려는 의도라고 인식하고 처리한다.
	int nLength = strlen(pszParam);

	if (nLength == 0)
	{
		return 0;
	}

	// 문자열의 끝인 NULL 문자를 고려해 메모리를 총 길이에서 +1 한 만큼 할당한다.
	m_pszData = new char[m_nLength + 1];

	// 새로 할당한 메모리에 문자열을 저장한다.
	strcpy_s(m_pszData, sizeof(char) * (nLength + 1), pszParam);
	m_nLength = nLength;

	// 문자열의 길이를 반환한다.
	return nLength;
}

const char* CMyString::GetString(void) const
{
	return m_pszData;
}

void CMyString::Release()
{
	// 이 함수가 여러 번 호출 될 경우를 대비하여 주요 멤버를 초기화해준다.
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
	// 자기 자신에 대한 대입이면 아무것도 하지 않는다.
	if (this != &rhs)
	{
		this->SetString(rhs.GetString());
	}

	return *this;
}


int CMyString::Append(const char* pszParam)
{
	// <방어코드>
	// 포인터, 클래스를 매개변수로 받을 때는 매개변수가 유효한지 검사해줘야 합니다. 이런 방어코드를 습관화합시다.
	if (m_pszData == NULL)
	{
		return 0;
	}

	int nLenParam = strlen(pszParam);
	
	// 혹시나 길이가 0인 상황이 있을 수 있으므로 이를 위한 방어코드를 작성합니다.
	if (nLenParam == 0)
	{
		return 0;
	}


	// <1차 작업 : 무작정 Append를 하지 않고 가장 기본적인 상황부터 차근차근 코딩한다.>
	// 세트된 문자열이 없다면 새로 문자열을 할당한 것과 동일하게 처리한다.
	if (m_pszData == NULL)
	{
		SetString(pszParam);

		return m_nLength;
	}

	// 현재 문자열의 길이 백업
	int nLenCur = m_nLength;

	// 두 문자열을 합쳐서 저장할 수 있는 메모리를 새로 할당함
	char* pszResult = new char[nLenCur + nLenParam + 1];

	// 문자열 조합
	strcpy_s(pszResult, sizeof(char) * (nLenCur + 1), m_pszData);
	strcpy_s(pszResult + (sizeof(char) * nLenCur),
		sizeof(char) * (nLenParam + 1), pszParam);

	// 기존 문자열 삭제 및 멤버 정보 갱신
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