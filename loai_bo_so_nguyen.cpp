#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
bool check(string s)
{
    if (s.length() <= 9)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                continue;
            else
                return false;
        }
    }
    else
        return false;
    return true;
}
int main()
{
    ifstream in;
    in.open("DATA.in");
    string a[10000];
    int k = 0;
    while (!in.eof())
    {
        string s;
        in >> s;
        if (!check(s))
        {
            a[k] = s;
            k++;
        }
    }
    sort(a, a + k);
    for (int i = 0; i < k; i++)
        if (a[k] != " ")
            cout << a[i] << " ";
    in.close();
}