#include <iostream>
#include <queue>

using namespace std;

int main() 
{
    // n = �׽�Ʈ ���̽��� ���� ���� ����
    // m = �ñ��� ������ ���� ť���� �� ��°�� �����ִ���

    int tc = 0, n = 0, m = 0, count = 0, priority = 0;

    cin >> tc;

    for (int i = 0; i < tc; ++i)
    {
        count = 0;

        cin >> n >> m;

        queue<pair<int, int>> q;
        priority_queue<int> pq; // �켱���� ť
        
        for (int j = 0; j < n; ++j) 
        {
            cin >> priority;
            q.push({ j, priority });
            pq.push(priority);
        }

        while (!q.empty()) 
        {
            int index = q.front().first;
            int value = q.front().second;

            q.pop();

            if (pq.top() == value) 
            {
                pq.pop();
                ++count;
                if (index == m) 
                {
                    cout << count << endl;
                    break;
                }
            }
            else q.push({ index,value });
        }

    }

    return 0;
}