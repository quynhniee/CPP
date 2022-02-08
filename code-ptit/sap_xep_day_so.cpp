#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    a.resize(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    a.insert(max_element(a.begin(), a.end()), m);
    for (int i : a)
        if (i < 0)
            b.push_back(i);
    for (int i : a)
        if (i >= 0)
            b.push_back(i);
    for (int i : b)
        cout << i << " ";
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