#include <iostream>
using namespace std;
void input(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}
void solve(int a[][100], int n, int b[][100], int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] *= b[i % m][j % m];
        }
    }
}
void output(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int n, m, a[100][100], b[100][100];
    cin >> n;
    input(a, n);
    cin >> m;
    input(b, m);
    solve(a, n, b, m);
    output(a, n);
}