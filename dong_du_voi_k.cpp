#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int solve(int *a, int n)
{
    vector<int> uc;
    int x;
    for (int i = 1; i < n; i++)
        if (a[i] != a[0])
        {
            x = abs(a[i] - a[0]);
            break;
        }
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            uc.push_back(i);
            if (i * i != x)
                uc.push_back(x / i);
        }
    }
    int count = 0;
    for (int i : uc)
    {
        int du = a[0] % i;
        bool check = true;
        for (int j = 1; j < n; j++)
        {
            if (a[j] % i != du)
            {
                check = false;
                break;
            }
        }
        if (check)
            count++;
    }
    return count;
}
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
        cout << solve(a, n) << endl;
    }
    return 0;
}

/*
mảng số a đồng dư với k <->  a[i] - a[j] % k == 0
với i , j là 2 vị trí bất kì
*/