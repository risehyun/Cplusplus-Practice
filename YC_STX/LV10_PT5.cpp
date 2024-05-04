 #include <iostream>

using namespace std;

int a = 0, b = 0;

int GOP()
{
	cin >> a >> b;

	return a * b;
}

int SUM()
{
	cin >> a >> b;

	return a + b;
}

int main()
{
	int resultMul = GOP();
	int resultSum = SUM();

	if (resultMul > resultSum)
	{
		cout << "GOP>SUM";
	}
	else if (resultMul < resultSum)
	{
		cout << "GOP<SUM";
	}
	else
	{
		cout << "GOP==SUM";
	}

	return 0;
}