#include <iostream>
#include <map>
#include <vector>
using namespace std;
void input(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
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
        map<int, int> m;
        input(a, n);
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
            if (m[a[i]] == 2)
            {
                k = 1;
                cout << a[i] << endl;
                break;
            }
        }
        if (k == 0)
            cout << "-1\n";
    }
    return 0;
}