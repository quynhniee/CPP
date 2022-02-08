#include <iostream>
#include <string.h>
#include <sstream>
#include <vector>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    std::getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if (s[i] != ' ' && s[i - 1] == ' ')
            s[i] -= 32;
        if (s[0] != ' ' && s[0] >= 'a' && s[0] <= 'z')
            s[0] -= 32;
    }
    std::stringstream ss(s);
    std::vector<string> ans;
    string token;
    while (ss >> token)
        ans.push_back(token);
    int k = ans.size() - 1;
    for (int i = 1; i < ans[k].size(); i++)
        ans[k][i] -= 32;
    for (int i = 0; i < k; i++)
    {
        cout << ans[i];
        if (i != k - 1)
            cout << " ";
    }
    cout << ", " << ans[k] << std::endl;
    return 0;
}