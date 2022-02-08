#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        map<char, int> ans;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            ans[s[i]]++;
            if (s[i] != s[i + 1])
                cout << s[i] << ans[s[i]];
        }
        cout << endl;
    }
}