#include <iostream>
#include <algorithm>
#include <cstring>
typedef long long ll;
using std::cin;
using std::cout;
using std::endl;

void chuso(ll n, int *ans)
{
    while (n != 0)
    {
        ans[n % 10] = n % 10;
        n /= 10;
    }
}
void input(int n, ll *a, int *ans)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        chuso(a[i], ans);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0, ans[11] = {};
        std::memset(ans, -1, sizeof(ans));
        cin >> n;
        ll a[n];
        input(n, a, ans);
        for (int i = 0; i < 10; i++)
        {
            if (ans[i] != -1)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}