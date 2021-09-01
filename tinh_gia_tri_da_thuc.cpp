#include <iostream>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = n - 1; i >= 0; i--)
            cin >> a[i];
        long long s = 0, index = 1;
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
                index *= x;
            index %= mod;
            s += index * a[i];
            s %= mod;
        }
        cout << s << endl;
    }
}