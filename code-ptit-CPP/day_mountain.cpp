#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> ans;
void input(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
bool solve(int *a, int l, int r)
{
    int i = l;
    while (i < r && a[i] <= a[i + 1])
        ++i;
    if (i == r)
        return true;
    else
    {
        while (i < r && a[i] > a[i + 1])
            ++i;
        if (i < r)
            return false;
        else
            return true;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n;
        int a[n];
        input(a, n);
        cin >> l >> r;
        if (solve(a, l, r))
            cout << "Yes\n";
        else
            cout << "No\n";
        ans.clear();
    }
}