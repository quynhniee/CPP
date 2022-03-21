#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
            ans.push_back(s[i]);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << "." << ans[i];
    cout << endl;
}