#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
int main()
{
    int n, m, Max = 0;
    cin >> n >> m;
    int a[n];
    map<int, int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans[a[i]]++;
        Max = max(Max, ans[a[i]]);
    }
    int pos = 0;
    for (int i = 1; i <= m; i++)
    {
        if (ans[i] > ans[pos] && ans[i] < Max)
            pos = i;
    }
    if (pos == 0)
        cout << "NONE\n";
    else
        cout << pos << endl;
    return 0;
}