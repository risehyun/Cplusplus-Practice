#include <iostream>
#include <queue>

using namespace std;

int main() 
{
    // n = 테스트 케이스를 돌릴 문서 개수
    // m = 궁금한 문서가 현재 큐에서 몇 번째에 놓여있는지

    int tc = 0, n = 0, m = 0, count = 0, priority = 0;

    cin >> tc;

    for (int i = 0; i < tc; ++i)
    {
        count = 0;

        cin >> n >> m;

        queue<pair<int, int>> q;
        priority_queue<int> pq; // 우선순위 큐
        
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