#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    int a[n], check[10000] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        check[a[i]]++;
        if (check[a[i]] == 1)
            ans.push_back(a[i]);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}