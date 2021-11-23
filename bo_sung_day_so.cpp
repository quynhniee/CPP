#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 5], mark[250] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mark[a[i]]++;
    }
    bool check = true;
    int Max = *max_element(a, a + n);
    for (int i = 1; i <= Max; i++)
    {
        if (mark[i] == 0)
        {
            cout << i << endl;
            check = false;
        }
    }
    if (check)
        cout << "Excellent!";
    return 0;
}