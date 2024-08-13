//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n = 0, m = 0, i = 0, j = 0, k = 0;
//    int bucket[101] = { 0 };
//
//    cin >> n >> m;
//
//    for (int index = 0; index < m; index++)
//    {
//        cin >> i >> j >> k;
//
//        for (int start = i; start <= j; start++)
//        {
//            bucket[start] = k;
//        }
//    }
//
//    for (int start = 1; start <= n; start++)
//    {
//        cout << bucket[start] << " ";
//    }
//
//    return 0;
//}