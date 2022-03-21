#include <iostream>
#include <vector>
using namespace std;

void solve(int *a, int n)
{
    long long count = 0, chia_max = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int chia = 0;
        while (a[i] != 0)
        {
            if (a[i] % 2 == 0)
            {
                a[i] /= 2;
                chia++;
            }
            else
            {
                a[i]--;
                count++;
            }
        }
        chia_max = (chia > chia_max) ? chia : chia_max;
    }
    cout << chia_max + count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        solve(a, n);
    }
}