#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
void input(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
void solve(int a[][100], int n, int m)
{
    int row = n - 1, col = m - 1, r = 0, c = 0;
    while (ans.size() < m * n)
    {
        for (int i = c; i <= col; i++)
            ans.push_back(a[r][i]);
        for (int i = r + 1; i <= row; i++)
            ans.push_back(a[i][col]);
        for (int i = col - 1; i >= c; i--)
            ans.push_back(a[row][i]);
        for (int i = row - 1; i > r; i--)
            ans.push_back(a[i][c]);
        r++, c++, col--, row--;
    }
    for (int i = m * n - 1; i >= 0; i--)
        cout << ans[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a[100][100];
        cin >> n >> m;
        input(a, n, m);
        solve(a, n, m);
        ans.clear();
    }
}