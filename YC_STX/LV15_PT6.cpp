#include <iostream>

using namespace std;
int main()
{
	int arr[6] = {};

	int result[5] = {};

	int flag = 1;
	int index = 0;

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{

		if (arr[i] > arr[i+1])
		{
			if (arr[i] - arr[i + 1] < 3)
			{
				result[index] = 1;
				cout << "결과 : " << arr[i] - arr[i + 1] << "," << flag << endl;
			}
			else
			{

				result[index] = 0;
				cout << "결과 : " << arr[i] - arr[i + 1] << "," << flag << endl;
			}

			index++;
		}
		else
		{
			if (arr[i + 1] - arr[i] < 3)
			{
				result[index] = 1;
				cout << "결과 : " << arr[i + 1] - arr[i] << "," << flag << endl;

			}
			else
			{
				result[index] = 0;
				cout << "결과 : " << arr[i + 1] - arr[i] << "," << flag << endl;
			}
		
			index++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (result[i] == 0)
		{
			flag = 0;
			break;
		}
	}

	if (flag == 0)
	{
		cout << "재배치필요";
	}
	else if (flag == 1)
	{
		cout << "완벽한배치";
	}




	return 0;
}