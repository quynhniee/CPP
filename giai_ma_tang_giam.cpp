#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
void solve(string s)
{
    vector<int> ans;
    int count = 0;
    while (count <= s.size())
    {
        int k = 0;
        while (s[count] != 'I')
        {
            count++;
            k++;
        }
        for (int i = 0; i < k; i++)
            ans.push_back(count - i + 1);
        ans.push_back(count - k + 1);
        count++;
        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}