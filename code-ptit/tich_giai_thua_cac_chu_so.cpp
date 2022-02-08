#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
void solve(string a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '7')
            ans[a[i] - '0']++;
        if (a[i] == '4')
            ans[2] += 2, ans[3]++;
        if (a[i] == '6')
            ans[5]++, ans[3]++;
        if (a[i] == '8')
            ans[7]++, ans[2] += 3;
        if (a[i] == '9')
            ans[7]++, ans[3] += 2, ans[2]++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a;
        cin >> n >> a;
        ans.resize(10, 0);
        solve(a, n);
        for (int i = 9; i > 1; i--)
            while (ans[i] > 0)
            {
                cout << i;
                ans[i]--;
            }
        cout << endl;
        ans.clear();
    }
}