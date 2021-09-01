#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;
        int k = __gcd(x, y);
        for (int i = 0; i < k; i++)
            cout << a;
        cout << endl;
    }
    return 0;
}