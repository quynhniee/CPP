#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
long long chia(ll a, ll b, ll c)
{
    if (b == 1)
        return a % c;
    if (b == 0)
        return 0;
    if (b % 2 == 0)
        return 2 * chia(a, b / 2, c) % c;
    else
        return (a % c + 2 * chia(a, (b - 1) / 2, c)) % c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << chia(a, b, c) << endl;
    }
}