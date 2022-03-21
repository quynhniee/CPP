#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<int, int> ans;
bool solve(int *a, int n, int x)
{
    for (int i = 0; i < n; i++)
        if (ans[a[i] + x] != 0)
            return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans[a[i]]++;
        }
        if (solve(a, n, x))
            cout << "1\n";
        else
            cout << "-1\n";
        ans.clear();
    }
}