#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> ans;
        vector<int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans.push_back(a[i]);
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < n; i++)
        {
            it = upper_bound(ans.begin(), ans.end(), a[i]);
            if (it == ans.end())
                cout << "_ ";
            else
                cout << *it << " ";
        }
        cout << endl;
    }
}