#include <iostream>
using namespace std;

int main()
{
    int n, m, a[105][105] = {0};
    cin >> n >> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == -1)
            {
                int k = i, l = j;
                if (a[k][l - 1] >= 0)
                {
                    sum++;
                    a[k][l - 1] = -2;
                }
                if (a[k][l + 1] >= 0)
                {
                    sum++;
                    a[k][l + 1] = -2;
                }
                if (a[k - 1][l] >= 0)
                {
                    sum++;
                    a[k - 1][l] = -2;
                }
                if (a[k + 1][l] >= 0)
                {
                    sum++;
                    a[k + 1][l] = -2;
                }
                if (a[k - 1][l - 1] >= 0)
                {
                    sum++;
                    a[k - 1][l - 1] = -2;
                }
                if (a[k - 1][l + 1] >= 0)
                {
                    sum++;
                    a[k - 1][l + 1] = -2;
                }
                if (a[k + 1][l - 1] >= 0)
                {
                    sum++;
                    a[k + 1][l - 1] = -2;
                }
                if (a[k + 1][l + 1] >= 0)
                {
                    sum++;
                    a[k + 1][l + 1] = -2;
                }
            }
    cout << sum << endl;
    return 0;
}