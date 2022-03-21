#include <iostream>
using namespace std;
void input(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
void solve(int a[][100], int b[][100], int n, int m)
{
    for (int k = 0; k < m / 2; k++)
    {
        for (int i = k + 1; i < m - k; i++)
            b[k][i] = a[k][i - 1];
        for (int i = k + 1; i < n - k; i++)
            b[i][m - k - 1] = a[i - 1][m - k - 1];
        for (int i = m - k - 2; i >= k; i--)
            b[n - k - 1][i] = a[n - k - 1][i + 1];
        for (int i = n - k - 2; i >= k; i--)
            b[i][k] = a[i + 1][k];
    }
}
void output(int a[][100], int b[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] == 0)
                b[i][j] = a[i][j];
            cout << b[i][j] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a[100][100], b[100][100] = {0};
        cin >> n >> m;
        input(a, n, m);
        solve(a, b, n, m);
        output(a, b, n, m);
    }
}