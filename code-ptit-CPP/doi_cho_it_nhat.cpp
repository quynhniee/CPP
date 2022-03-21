#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    vector<bool> b(n, false);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    stable_sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
// khi mà giá trị a[i] khác với vị trí i của nó thì cần tìm giá trị phù hợp để đổi chỗ
        while (a[i].second != i)
        {
            swap (a[i], a[a[i].second]);
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return 0;
}