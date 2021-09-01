#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    std::getline(cin, s);
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    std::stringstream ss(s);
    string token;
    std::vector<string> ans;
    while (ss >> token)
    {
        ans.push_back(token);
    }
    cout << ans[ans.size() - 1];
    for (int i = 0; i < ans.size() - 1; i++)
        cout << ans[i][0];
    cout << "@ptit.edu.vn\n";
}