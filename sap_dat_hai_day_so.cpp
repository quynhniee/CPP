#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a1, a2;
    map<int, int> mark;
    a1.resize(n);
    a2.resize(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
        mark[a1[i]]++;
    }
    for (int i = 0; i < m; i++)
        cin >> a2[i];
    for (auto i : a2)
    {
        while (mark[i] != 0)
        {
            cout << i << " ";
            mark[i]--;
        }
    }
    for (auto i : mark)
        cout << i.first << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}