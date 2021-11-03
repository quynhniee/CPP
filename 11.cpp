#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cin >> s >> k;
    int dem = 0;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            m[s[j]]++;
            if (m[s[j]] == k)
                dem++;
            if (m[s[j]] > k)
                break;
        }
    }
    for (map<char, int>::iterator it = m.begin(); it != m.end(); it++)
        cout << it->first << " ";
    cout << dem << endl;
}