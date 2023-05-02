#pragma once
#include <iostream>
using namespace std;

class CMyString
{
public:
	// 기본 생성자
	CMyString();

	// 변환 생성자
	explicit CMyString(const char* pszParam);

	// 복사 생성자
	CMyString(const CMyString& rhs);

	// 이동 생성자
	CMyString(CMyString &&rhs);

	~CMyString();

	int SetString(const char* pszParam);

	// 단순히 멤버 읽기만 수행하는 메서드이므로 메서드를 상수화해준다.
	const char* GetString() const;

	void Release();

	CMyString& operator=(const CMyString& rhs);

	operator char* () const
	{
		return m_pszData;
	}


private:
	// 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
	char* m_pszData;

	// 저장된 문자열 길이
	int m_nLength;


};