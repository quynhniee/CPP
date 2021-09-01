#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void input(int n, int *a)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void output(int q, int *sum)
{
    for (int i = 0; i < q; i++)
        cout << sum[i] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n], sum[q] = {0};
        input(n, a);
        for (int k = 0; k < q; k++)
        {
            int l, r;
            cin >> l >> r;
            for (int i = l - 1; i <= r - 1; i++)
                sum[k] += a[i];
        }
        output(q, sum);
    }
}