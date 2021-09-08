#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve(int a[][100], int n)
{
    vector<int> b;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b.push_back(a[i][j]);
        }
    sort(b.begin(), b.end());
    int d = 0, row = n - 1, col = n - 1, k = 0;
    while (d <= n / 2)
    {
        for (int i = d; i <= col; i++)
            a[d][i] = b[k++];
        for (int i = d + 1; i <= row; i++)
            a[i][col] = b[k++];
        for (int i = col - 1; i >= d; i--)
            a[row][i] = b[k++];
        for (int i = row - 1; i > d; i--)
            a[i][d] = b[k++];
        row--;
        col--;
        d++;
    }
}
void output(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[100][100];
    solve(a, n);
    output(a, n);
}