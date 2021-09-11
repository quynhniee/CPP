#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    vector<string> ans;
    string s;
    bool check = false;
    while (cin >> s)
    {
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        if (check)
        {
            s[0] -= 32;
            check = false;
        }
        if (s.back() == '.' || s.back() == '!' || s.back() == '?')
        {
            s.back() = '\n';
            check = true;
        }
        ans.push_back(s);
    }
    ans[0][0] -= 32;
    for (auto &it : ans)
    {
        cout << it;
        if (it.back() != '\n')
            cout << " ";
    }
    return 0;
}