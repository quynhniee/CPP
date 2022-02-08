#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
string ans[10000];
bool can_swap(string a, string b)
{
    if (a + b > b + a)
        return true;
    else
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
        for (int i = 0; i < n; i++)
            cin >> ans[i];
        sort(ans, ans + n, can_swap);
        for (int i = 0; i < n; i++)
            cout << ans[i];
        cout << endl;
    }
}