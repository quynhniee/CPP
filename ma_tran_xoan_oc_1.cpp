#include <iostream>
using namespace std;
void solve(int *a, int n, int m)
{
    int hang = n - 1, cot = m - 1, d = 0, c = 0, k = 0;
    while (k < m * n)
    {
        for (int i = d; i <= cot; i++)
        {
            cout << a[c][i] << " ";
            k++;
            if (k == m * n)
                break;
        }
        c++;
        for (int i = d + 1; i <= hang; i++)
        {
            cout << a[i][hang] << " ";
            k++;
            if (k == m * n)
                break;
        }
        cot--;
        for (int i = cot - 1; i >= 0; i--)
        {
            cout << a[hang][i] << " ";
            k++;
            if (k == m * n)
                break;
        }
        hang--;
        for (int i = cot - 1; i >= d; i--)
        {
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n * m];
        for (int i = 0; i < n * m; i++)
            cin >> a[i];
    }
}