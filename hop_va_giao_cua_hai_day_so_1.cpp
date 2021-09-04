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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        set<int> ans;
        set<int> trung;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (ans.find(b[i]) != ans.end()) // tìm phần tử của b[i] bị trùng với a[i]
                trung.insert(b[i]);
            ans.insert(b[i]);
        }
        for (int x : ans)
            cout << x << " ";
        cout << endl;
        for (int x : trung)
            cout << x << " ";
        cout << endl;
    }
}

/*   cách dùng map

#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<int, int> ans;
map<int, int>::iterator it;
void input(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans[a[i]]++;
    }
}
void Union()
{
    for (it = ans.begin(); it != ans.end(); it++)
    {
        if (it->second > 1)
            cout << it->first << " ";
    }
    cout << endl;
}
void Intersection()
{
    for (it = ans.begin(); it != ans.end(); it++)
        cout << it->first << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        input(a, n);
        input(b, m);
        Intersection();
        Union();
        ans.clear();
    }
}

*/