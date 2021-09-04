#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(string s1, string s2)
{
    vector<int> s;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    s1.resize(s2.size(), '0');
    int du = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        int k = s1[i] - '0' + s2[i] - '0' + du;
        du = 0;
        if (k < 10)
            s.push_back(k);
        else
        {
            du = 1;
            k -= 10;
            s.push_back(k);
        }
    }
    if (du == 1)
        s.push_back(1);
    reverse(s.begin(), s.end());
    for (int i : s)
        cout << i;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() > s2.size())
            swap(s1, s2);
        solve(s1, s2);
    }
}