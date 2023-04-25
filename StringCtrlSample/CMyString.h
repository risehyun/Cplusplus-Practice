#pragma once
#include <iostream>
using namespace std;

class CMyString
{
public:
	CMyString();
	~CMyString();

private:

	// 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
	char* m_pszData;

	// 저장된 문자열 길이
	int m_nLength;


public:
	int SetString(const char* pszParam);

	// 단순히 멤버 읽기만 수행하는 메서드이므로 메서드를 상수화해준다.
	const char* GetString() const;

	void Release();
};

