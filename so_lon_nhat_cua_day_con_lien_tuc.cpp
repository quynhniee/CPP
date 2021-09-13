#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   // tìm số lớn nhất trên dãy con k phần tử liên tiếp
        // câu này dùng deque dễ hơn huhu
        int n, k;
        cin >> n >> k;
        multiset<int> ans;
        int a[n], index;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
            ans.insert(a[i]);
        cout << *ans.rbegin() << " ";
        for (int i = 1; i < n - k + 1; i++)
        {
            ans.erase(ans.find(a[i - 1]));
            ans.insert(a[i + k - 1]);
            cout << *ans.rbegin() << " ";
        }
        cout << endl;
    }
}