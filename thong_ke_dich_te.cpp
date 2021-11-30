#include <bits/stdc++.h>

using namespace std;

int x[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool dd[105][105];
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 2][m + 2];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int k = 0; k < 8; k++)
                if (a[i][j] == -1)
                {
                    int new_i = i + x[k];
                    int new_j = j + y[k];
                    if (new_i <= 0 || new_i > n || new_j <= 0 || new_j > m)
                        continue;
                    if (dd[new_i][new_j])
                        continue;
                    dd[new_i][new_j] = true;
                    cnt += a[new_i][new_j];
                }

    cout << cnt;
}