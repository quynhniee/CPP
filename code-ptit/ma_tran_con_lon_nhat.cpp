#include <iostream>
#include <algorithm>
using namespace std;
void input(int a[][505], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
int MIN(int a, int b, int c)
{
    return (a < b && a < c) ? a : ((b < c) ? b : c);
}
void solve(int a[][505], int n, int m)
{
    int dp[500][500] = {0}, MAX = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i * j == 0)
                dp[i][j] = a[i][j];
            else if (a[i][j] == 1 && a[i - 1][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j - 1] == 1)
            {
                dp[i][j] = MIN(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1;
                MAX = max(MAX, dp[i][j]);
            }
            else
                dp[i][j] = a[i][j];
        }
    }
    cout << MAX << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a[505][505] = {};
        cin >> n >> m;
        input(a, n, m);
        solve(a, n, m);
    }
}