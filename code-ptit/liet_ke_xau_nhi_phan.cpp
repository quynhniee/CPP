#include <iostream>
#include <vector>
using namespace std;
vector<int> a;
int mu(int n)
{
    int s = 1;
    for (int i = 0; i < n; i++)
        s *= 2;
    return s;
}
void gen(int n)
{
    ++a[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] > 1)
        {
            ++a[i - 1];
            a[i] -= 2;
        }
    }
}
void output(int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        a.resize(n, 0);
        for (int i = 0; i < mu(n); i++)
        {
            output(n);
            cout << " ";
            gen(n);
        }
        cout << endl;
        a.clear();
    }
}