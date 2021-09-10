#include <iostream>
using namespace std;
void input(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void solve(int *a, int n)
{
    long long sum0 = a[0], sum1 = a[1], max = 0;
    for (int i = 0; i <= n + 4; i++)
    {
        if (a[i + 2] + a[i + 4] >= a[i + 3])
        {
            sum0 += a[i + 2];
            i += 2;
        }
        else
        {
            sum0 += a[i + 3];
            i += 3;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i + 2] + a[i + 4] >= a[i + 3])
        {
            sum1 += a[i + 2];
            i += 2;
        }
        else
        {
            sum1 += a[i + 3];
            i += 3;
        }
    }
    max = (sum0 > sum1) ? sum0 : sum1;
    cout << max << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5] = {0};
        input(a, n);
        solve(a, n);
    }
}