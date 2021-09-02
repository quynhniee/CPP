#include <iostream>
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
        int a[n];
        vector<long long> ans(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ans.front() = a[0] * a[1];
        ans.back() = a[n - 1] * a[n - 2];
        for (int i = 1; i < n - 1; i++)
            ans[i] = a[i - 1] * a[i + 1];
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}