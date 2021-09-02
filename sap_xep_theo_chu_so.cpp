#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> ans(n);
        for (int i = 0; i < n; i++)
            cin >> ans[i];
        sort(ans.begin(), ans.end(), greater<string>());
        for (int i = 0; i < n - 1; i++)
            if (ans[i].size() != ans[i + 1].size() && ans[i][0] == ans[i + 1][0] && ans[i].back() < ans[i + 1].front())
                swap(ans[i], ans[i + 1]);
        for (int i = 0; i < n; i++)
            cout << ans[i];
        cout << endl;
    }
}