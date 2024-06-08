//#include <iostream>
//
//using namespace std;
//int main()
//{
//	char str[4][3] = { };
//
//	int aYindex = 0, aXindex = 0;
//	int bYindex = 0, bXindex = 0;
//	int xResult = 0, yResult = 0;
//
//	for (int y = 0; y < 4; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			cin >> str[y][x];
//		}
//	}
//
//	for (int y = 0; y < 4; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (str[y][x] == 'A')
//			{
//				aYindex = y;
//				aXindex = x;
//			}
//			else if (str[y][x] == 'B')
//			{
//				bYindex = y;
//				bXindex = x;
//			}
//		}
//	}
//
//	if (bYindex > aYindex)
//	{
//		xResult = bXindex - aXindex;
//		yResult = bYindex - aYindex;
//	}
//	else
//	{
//		xResult = aXindex - bXindex;
//		yResult = aYindex - bYindex;
//	}
//
//	int result = xResult + yResult;
//
//	cout << result << endl;
//
//	return 0;
//}