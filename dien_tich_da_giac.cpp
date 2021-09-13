#include <iostream>
#include <utility>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++)
            cin >> a[i] >> b[i];
        a[n] = a[0], b[n] = b[0];
        long long s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            s1 += a[i] * b[i + 1];
            s2 += b[i] * a[i + 1];
        }
        cout << fixed << setprecision(3) << (double)(s1 - s2) / 2 << endl;
    }
}