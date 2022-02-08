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
    int vay = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        int k = s2[i] - s1[i] - vay;
        vay = 0;
        if (k >= 0)
            s.push_back(k);
        else
        {
            vay = 1;
            k += 10;
            s.push_back(k);
        }
    }
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
        if (s1.size() == s2.size() && s1 > s2)
            swap(s1, s2);
        solve(s1, s2);
    }
}