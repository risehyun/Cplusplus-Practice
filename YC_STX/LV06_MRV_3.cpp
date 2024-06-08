//#include <iostream>
//
//using namespace std;
//int main()
//{
//	char str[10] = "";
//
//	char aInput = ' ';
//	char bInput = ' ';
//
//	cin >> str >> aInput >> bInput;
//
//	int length = strlen(str);
//
//	for (int i = 0; i < length; i++)
//	{
//		if (str[i] == aInput || str[i] == bInput)
//		{
//			if (i > 0 && i < length)
//			{
//				str[i - 1] = '#';
//				str[i + 1] = '#';
//			}
//		}
//	}
//
//	cout << str;
//
//	return 0;
//}