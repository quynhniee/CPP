#include <iostream>
using namespace std;
const long long mod = 1e9 + 7;
long long a[1000];
void fibonacci()
{
    for (int i = 0; i <= 1000; i++)
    {
        if (i == 2 || i == 1)
            a[i] = 1;
        else
            a[i] = a[i - 1] + a[i - 2];
        a[i] %= mod;
    }
}
int main()
{
    fibonacci();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}