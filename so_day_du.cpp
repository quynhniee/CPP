#include <iostream>
#include <vector>
#include <string.h>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> ans;
        int check = 1;
        for (int i = 0; i < s.size(); i++)
        {
            ans.insert(s[i]);
            if (s[0] == '0' || s[i] < '0' || s[i] > '9')
            {
                check = 0;
                break;
            }
        }
        if (check == 0)
            cout << "INVALID\n";
        else if (ans.size() == 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}