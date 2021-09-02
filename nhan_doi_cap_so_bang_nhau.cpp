#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
void nhap(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == a[i - 1])
        {
            a[i - 1] *= 2;
            a[i] = 0;
        }
    }
}
void solve(int *a, int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] != 0)
            ans.push_back(a[i]);
    ans.resize(n, 0);
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        nhap(a, n);
        solve(a, n);
        ans.clear();
    }
}