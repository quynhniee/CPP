#include <iostream>
using namespace std;
int tonguoc(int n)
{
    int i = 2, s = 0;
    while (i <= n)
    {
        while (n % i == 0)
        {
            s += i;
            n /= i;
        }
        i++;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += tonguoc(a[i]);
    }
    cout << sum << endl;
    return 0;
}