#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
bool thuannghich(string s)
{
    for (int i=0; i<=s.size()/2; i++)
        if (s[i] != s[s.size()-1-i])    return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
            if (s[i] >= 'a' && s[i] <= 'c')
                s0.push_back('2');
            if (s[i] >= 'd' && s[i] <= 'f')
                s0.push_back('3');
            if (s[i] >= 'g' && s[i] <= 'i')
                s0.push_back('4');
            if (s[i] >= 'j' && s[i] <= 'l')
                s0.push_back('5');
            if (s[i] >= 'm' && s[i] <= 'o')
                s0.push_back('6');
            if (s[i] >= 'p' && s[i] <= 's')
                s0.push_back('7');
            if (s[i] >= 't' && s[i] <= 'v')
                s0.push_back('8');
            if (s[i] >= 'w' && s[i] <= 'z')
                s0.push_back('9');
        }
        if (thuannghich(s0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}