#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n, k, a[100000];
bool check[100000] = {0};
void out_put()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}
void backtracking(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        if (!check[j])
        {
            a[i] = j;
            check[j] = true;
            if (i == k)
                out_put();
            else
                backtracking(i + 1);
            check[j] = false;
        }
    }
}
int main()
{
    cin >> n >> k;
    backtracking(1);

    return 0;
}
