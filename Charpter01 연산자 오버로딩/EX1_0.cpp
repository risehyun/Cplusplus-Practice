#include <iostream>
#include <map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, string, greater<>> m;
    int n = 0;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        string name, EorL;

        cin >> name >> EorL;
        m[name] = EorL;
    }

    map<string, string>::iterator it;

    for (it = m.begin(); it != m.end(); it++) 
    {
        if (it->second == "enter") 
        {
            cout << it->first << "\n";
        }
    }

    return 0;
}