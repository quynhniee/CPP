#include <iostream>
#include <fstream>
#include <string.h>
#include <set>
using namespace std;
void solve(string &s)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
}
int main()
{
    ifstream input("VANBAN.in");
    string s;
    set<string> ans;
    while (input >> s)
    {
        solve(s);
        ans.insert(s);
    }
    input.close();
    for (auto i : ans)
        cout << i << endl;
    return 0;
}