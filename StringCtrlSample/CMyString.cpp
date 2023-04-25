
/*
	문자열을 설정하면 내부적으로 필요한 메모리를 자동으로 동적 할당하고 문자열을 저장하는 클래스를 작성해보자.
	이를 활용하면 사용자는 메모리를 직접 다루는 코드를 작성하지 않아도 된다
*/

#include "CMyString.h"


CMyString::CMyString()
	: m_pszData(nullptr)
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
