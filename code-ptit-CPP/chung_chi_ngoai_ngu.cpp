#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 450)
            cout << "-1";
        if (n >= 450 && n <= 520)
            cout << "7";
        if (n >= 525 && n <= 595)
            cout << "8";
        if (n >= 600 && n <= 725)
            cout << "9";
        if (n >= 730)
            cout << "10";
        cout << endl;
    }
}
