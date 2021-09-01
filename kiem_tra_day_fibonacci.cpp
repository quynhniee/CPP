#include <iostream>
#include <algorithm>
using namespace std;
int fibo[105] = {0};
void fibonacci()
{
    fibo[0] = 1, fibo[1] = 1;
    int a0 = 0, a1 = 1, a = a0 + a1;
    while (a < 1000)
    {
        a = a0 + a1;
        a0 = a1;
        a1 = a;
        fibo[a] = 1;
    }
}
int main()
{
    fibonacci();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        int a[1005], b[1005] = {0};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            if (fibo[a[i]] == 1)
                cout << a[i] << " ";
        cout << endl;
    }
}
