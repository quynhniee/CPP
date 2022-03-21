#include <iostream>
#include <map>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("DATA.in");
    map<int, int> ans;
    int n;
    while (fp >> n)
    {
        ans[n]++;
    }
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
    fp.close();
    return 0;
}