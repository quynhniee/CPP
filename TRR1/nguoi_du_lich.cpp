#include <bits/stdc++.h>
using namespace std;

int n, cp[50][50], Fopt = INT_MAX;
vector<int> hv;
vector<vector<int>> Xopt;
bool ok = true;

void solve()
{
    int f = 0;
    for (int i = 1; i < n; ++i)
    {
        cout << hv[i - 1] + 1 << " ";
        f += cp[hv[i - 1]][hv[i]];
    }
    f += cp[hv[n - 1]][0];
    cout << hv[n - 1] + 1 << "\t" << f << "\t";
    if (Fopt > f)
    {
        Xopt.clear();
        Xopt.push_back(hv);
        Fopt = f;
    }
    else if (Fopt == f)
        Xopt.push_back(hv);
    if (Fopt == f)
        cout << Fopt;
    else
        cout << "-";
    cout << endl;
}

void sinh()
{
    int i = n - 2;
    while (i >= 1 && hv[i] > hv[i + 1])
        --i;
    if (i == 0)
        ok = false;
    else
    {
        int j = n - 1;
        while (hv[j] < hv[i])
            --j;
        swap(hv[i], hv[j]);
        int l = i + 1, r = n - 1;
        while (l <= r)
            swap(hv[l++], hv[r--]);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> cp[i][j];
    for (int i = 0; i < n; ++i)
        hv.push_back(i);
    while (ok)
    {
        solve();
        sinh();
    }
    cout << "Min cost = " << Fopt << endl;
    for (int i = 0; i < Xopt.size(); ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << Xopt[i][j] + 1 << " ";
        cout << endl;
    }
    return 0;
}