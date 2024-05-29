#include <iostream>

using namespace std;
int main()
{
	int bucket[256] = {};
	char input[11] = "";

	cin >> input;

	for (int i = 0; i < 11; i++)
	{
		bucket[input[i]]++;
	}

	for (int i = 1; i < 256; i++)
	{
		if (bucket[i] != 0)
		{
			cout << (char)i << ":" << bucket[i] << endl;
		}
	}



	return 0;
}