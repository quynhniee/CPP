#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        long long s = 1, x = 0;
        for (int i = 2; i <= n; i++)
        {
            int j = i;
            while (j % p == 0)
            {
                ++x;
                j /= p;
            }
        }
        cout << x << endl;
    }
}
