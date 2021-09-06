#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, index = -1;
        long long s = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        long long s0 = 0;
        for (int i = 1; i < n; i++)
        {
            s0 += a[i - 1];
            if (s0 * 2 == (s - a[i]))
            {
                index = i + 1;
                break;
            }
        }
        cout << index << endl;
    }
}