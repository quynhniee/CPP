#include <iostream>
using namespace std;
int n, k;
int a[10000];
void sinhToHop(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int l = 1; l <= k; l++)
                cout << a[l];
            cout << " ";
        }
        else
            sinhToHop(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        sinhToHop(1);
        cout << endl;
    }
}