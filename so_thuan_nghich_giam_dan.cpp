#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <string.h>
using namespace std;
bool thuan_nghich(string s)
{
    if (s.size() == 1)
        return false;
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}
bool can_swap(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first.size() > b.first.size())
        return true;
    else if (a.first.size() == b.first.size())
        return a > b;
    return false;
}
int main()
{
    map<string, int> a;
    vector<pair<string, int>> ans;
    string s;
    while (cin >> s)
        if (thuan_nghich(s))
            a[s]++;
    for (auto &it : a) // đẩy từng cặp giá trị pair của map vào vector
        ans.push_back(it);
    sort(ans.begin(), ans.end(), can_swap);
    for (auto &it : ans)
        cout << it.first << " " << it.second << endl;
}