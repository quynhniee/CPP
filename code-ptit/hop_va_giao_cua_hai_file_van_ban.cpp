#include <iostream>
#include <fstream>
#include <string.h>
#include <set>
using namespace std;
void solve(string &s)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
}
int main()
{
    ifstream fp1("DATA1.in");
    ifstream fp2("DATA2.in");
    string s;
    set<string> hop, giao, trung;
    while (!fp1.eof())
    {
        fp1 >> s;
        solve(s);
        hop.insert(s);
    }
    while (!fp2.eof())
    {
        fp2 >> s;
        int size = hop.size();
        int k = trung.size();
        solve(s);
        hop.insert(s);
        trung.insert(s);
        if (hop.size() == size && trung.size() != k)
            giao.insert(s);
    }
    fp1.close(), fp2.close();
    for (auto i : hop)
        cout << i << " ";
    cout << endl;
    for (auto i : giao)
        cout << i << " ";
    return 0;
}