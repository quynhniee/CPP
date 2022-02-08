#include <iostream>
#include <vector>
using namespace std;
bool check;
void solve(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        check = true;
        if ((a[i] + a[i + 1]) % 2 == 0)
        {
            a.erase(a.begin() + i, a.begin() + i + 2);
            check = false;
            solve(a);
        }
    }
    if (check)
        cout << a.size() << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    solve(a);
}