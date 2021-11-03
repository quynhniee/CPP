#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, k0 = 0;
        cin >> n >> k;
        int a[n];
        multiset<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans.insert(a[i]);
        }
        multiset<int>::reverse_iterator it;
        for (it = ans.rbegin(); it != ans.rend(); it++)
            if (k0 < k)
            {
                cout << *it << " ";
                k0++;
            }
        cout << endl;
    }
    return 0;
}