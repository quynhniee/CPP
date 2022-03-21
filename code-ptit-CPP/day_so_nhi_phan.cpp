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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            long long suma = 0, sumb = 0;
            int size = 0;
            for (int j = i; j < n; j++)
            {
                suma += a[j];
                sumb += b[j];
                if (suma == sumb)
                {
                    size = j - i + 1;
                }
            }
            if (max < size)
                max = size;
        }
        cout << max << endl;
    }
}