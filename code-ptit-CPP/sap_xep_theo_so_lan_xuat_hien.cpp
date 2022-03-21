#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int check[100000] = {0};
bool can_swap(int a, int b)
{
    if (check[a] > check[b])
        return true;
    else if (check[a] == check[b])
        return a < b;
    return false;
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
        {
            cin >> a[i];
            check[a[i]]++;
        }
        sort(a, a + n, can_swap);
        for (int i : a)
            cout << i << " ";
        cout << endl;
        memset(check, 0, 100000);
    }
}