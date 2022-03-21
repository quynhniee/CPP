#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int x, mark[10005] = {0};
    vector<int> a;
    while (cin >> x)
    {
        if (mark[x] == 0)
            a.push_back(x);
        mark[x]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " " << mark[a[i]] << endl;
    }
    return 0;
}
