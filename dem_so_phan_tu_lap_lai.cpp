#include <iostream>
#include <cstring>
using namespace std;
int a[1000000], b[1000000] = {0}, check[1000000] = {0};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a[1000000] = {};
        memset(b, 0, (int)1e6);
        memset(check, 0, (int)1e6);
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] > 1 && check[a[i]] == 0)
            {
                sum += b[a[i]];
                check[a[i]] = 1;
            }
        }
        cout << sum << endl;
    }
}