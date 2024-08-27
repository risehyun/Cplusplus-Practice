#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int N; // B���� �� N
	int B; // B����
	string result = "";

	cin >> N >> B;

	while (N != 0)
	{
		int temp = N % B;

		// ���ڶ�� �ش� ���ڿ��� '0'�� ���� �� ���ڿ� �ش��ϴ� ���ڷ� ����
		if (0 <= temp && temp <= 9)
		{
			result += (temp + '0');
		}
		// ���� 10 �̻��� ������ ��� ���ĺ����� ��� �Ǿ� �Ѵ�.
		// ���� - 10 + 'A'�� �ؼ� ���ڷ� ����
		// ���� ��� 10�� ��� ���� A�� ��Ÿ���� ������
		// 10�� A�� �ش��ϴ� 65�� ����� ��� �Ѵ�.
		// ���� 10�� -10�� ���� 0���� ����� �� ���� �ٽ� 'A'�� ���ؼ�
		// 10 == 'A'�� �ǵ��� �Ѵ�.
		else
		{
			result += (temp - 10 + 'A');
		}

		N /= B;
	}

	int endIndex = result.length() - 1;

	// �ڿ������� ���� ��ȯ ����� �ϳ��� ����Ѵ�
	// reverse�� �Ἥ �ƿ� result�� ����� ����ϴ� ����� ����
	for (int i = endIndex; i >= 0; i--)
	{
		cout << result[i];
	}

	return 0;
}