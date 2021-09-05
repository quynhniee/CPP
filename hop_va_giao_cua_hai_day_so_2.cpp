#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        set<int> hop;
        set<int> giao;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            hop.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int truoc = hop.size();
            cin >> x;
            hop.insert(x);
            int sau = hop.size();
            if (truoc == sau)
                giao.insert(x);
        }
        for (int i : hop)
            cout << i << " ";
        cout << endl;
        for (int i : giao)
            cout << i << " ";
        cout << endl;
    }
}