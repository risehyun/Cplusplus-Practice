#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    string command = "";
    int n = 0, input = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> command;

        if (command == "push")
        {
            cin >> input;
            q.push(input);
        }
		else if (command == "pop") 
		{
			if (q.empty()) 
			{
				cout << "-1" << '\n';
			}
			else 
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (command == "front") 
		{
			if (q.empty()) 
			{
				cout << "-1" << '\n';
			}
			else 
			{
				cout << q.front() << '\n';
			}
		}
		else if (command == "back") 
		{
			if (q.empty()) 
			{
				cout << "-1" << '\n';
			}
			else 
			{
				cout << q.back() << '\n';
			}
		}
		else if (command == "size")
		{
			cout << q.size() << '\n';
		}
		else if (command == "empty")
		{
			cout << q.empty() << '\n';
		}
		else if (command == "top") 
		{
			if (q.empty()) 
			{
				cout << "-1" << '\n';
			}
			else 
			{
				cout << q.front() << '\n';
			}
		}
    }

    return 0;
}