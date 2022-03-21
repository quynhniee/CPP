#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> q;
        for (int i = 0; i <= s.size(); i++)
        {
            if (s[i] != 'D' || i == s.size())
            {
                cout << i + 1;
                while (!q.empty())
                {
                    cout << q.top();
                    q.pop();
                }
            }
            else if (s[i] == 'D')
                q.push(i + 1);
        }
        cout << endl;
    }
    return 0;
}