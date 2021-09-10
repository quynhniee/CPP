#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            map<char, int> ans;
            for (int j = i; j < s.size(); j++)
            {
                ans[s[j]]++;
                if (ans.size() == k)
                    count++;
                if (ans.size() > k)
                    break;
            }
        }
        cout << count << endl;
    }
}