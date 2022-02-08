#include <iostream>
#include <set>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp;
    fp.open("DATA.in");
    int n, m;
    fp >> n >> m;
    int a[n + 2], b[m + 2];
    int mark_a[1005] = {0}, mark_b[1005] = {0};
    for (int i = 0; i < n; i++)
    {
        fp >> a[i];
        mark_a[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        fp >> b[i];
        mark_b[b[i]]++;
    }

    for (int i = 1; i <= 1000; i++)
    {
        if (mark_a[i] > 0 && mark_b[i] > 0)
            cout << i << " ";
    }
    cout << endl;
    fp.close();
    return 0;
}