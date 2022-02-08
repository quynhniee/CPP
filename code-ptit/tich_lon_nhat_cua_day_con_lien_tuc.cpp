#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long max = -100000;
        for (int i = 0; i < n; i++)
        {
            long long s = 1;
            for (int j = i; j < n; j++)
            {
                s *= a[j];
                if (max < s)
                    max = s;
            }
        }
        cout << max << endl;
    }
}