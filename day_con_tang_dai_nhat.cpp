#include <iostream>
using namespace std;
void input(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void solve(int *a, int n, int *b)
{
    int max = -1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                b[i] = (b[i] > b[j] + 1) ? b[i] : b[j] + 1;
                if (max < b[i])
                    max = b[i];
            }
        }
    }
    cout << max + 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n] = {0};
        input(a, n);
        solve(a, n, b);
    }
}