#include <iostream>
#include <set>
using namespace std;
void input(int a[][505], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
bool check(int a[][505], int r, int c, int size)
{
    for (int i = r; i < r + size; i++)
        for (int j = c; j < c + size; j++)
            if (a[i][j] != 1)
                return false;
    return true;
}
int solve(int a[][505], int n, int m)
{
    int size = (n < m) ? n : m;
    int k = size + 1;
    while (k--)
    {
        for (int i = 0; i <= n - k; i++)
            for (int j = 0; j <= m - k; j++)
                if (check(a, i, j, k))
                    return k;
    }
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
        cout << solve(a, n, m) << endl;
    }
}