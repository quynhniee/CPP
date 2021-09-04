#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100][100];
        map<int, int> ans;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            set<int> s; // set lưu các phần tử KHÁC NHAU
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                s.insert(a[i][j]);
            }
            for (int x : s)
            {
                ans[x]++;
                if (ans[x] == n)
                    count++;
            }
        }
        cout << count << endl;
    }
}