#include <bits/stdc++.h>
using namespace std;

int n, b, Fopt;
vector<int> m, v, np;
vector<vector<int>> ans;

void Input()
{
    m.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> m[i];
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
}

void solve()
{
    int g = 0, f = 0;
    for (int i = 0; i < n; ++i)
    {
        g += np[i] * m[i];
        f += np[i] * v[i];
        cout << np[i] << " ";
    }
    cout << "\t" << g << "\t";
    if (g <= b)
    {
        if (Fopt < f)
        {
            ans.clear();
            Fopt = f;
            ans.push_back(np);
        }
        else if (Fopt == f)
            ans.push_back(np);
        cout << "Yes\t" << f << "\t";
        if (Fopt == f)
            cout << Fopt;
        else
            cout << "-";
    }
    else
        cout << "No\t-\t-";
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j < 2; ++j)
    {
        np.push_back(j);
        if (i == n)
            solve();
        else
            Try(i + 1);
        np.pop_back();
    }
}

int main()
{
    // n là số ẩn - b là giới hạn KL g(x) <= b
    cin >> n >> b;
    // nhập khối lượng trước rồi đến nhập giá trị
    Input();
    cout << "X\t\tg(X)\tg(X)<=b\tf(X)\tFotp\n";
    Try(1);
    cout << "Max value = " << Fopt << endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}