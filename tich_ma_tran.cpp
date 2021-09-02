#include <iostream>
using namespace std;
void input(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
void solve(int a[][100], int b[][100], int n, int m, int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int s = 0;
            for (int k = 0; k < m; k++)
            {
                s += a[i][k] * b[k][j];
            }
            cout << s << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int a[100][100], b[100][100];
    input(a, n, m);
    input(b, m, p);
    solve(a, b, n, m, p);
}