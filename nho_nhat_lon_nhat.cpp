#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> amax;
vector<int> amin;
int m, s;
void solve()
{
    if (s < 10)
    {
        amax[0] = s;
        amin[0] = 1;
        amin.back() = s - 1;
    }
}
int main()
{
    cin >> m >> s;
    amax.resize(m, 0);
    amin.resize(m, 0);

    amin.clear();
    amax.clear();
}