#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define max 1e6 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, dem = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (x == a[i])
                dem++;
        }
        cout << dem << endl;
    }
    return 0;
}