#include <iostream>
#include <string.h>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    map<string, int> email;
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, token, mail;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        stringstream ss(s);
        vector<string> ans;
        while (ss >> token)
        {
            ans.push_back(token);
        }
        mail += ans.back();
        for (int i = 0; i < ans.size() - 1; i++)
            mail.push_back(ans[i][0]);
        email[mail]++;
        if (email[mail] == 1)
            cout << mail << "@ptit.edu.vn\n";
        else
            cout << mail << email[mail] << "@ptit.edu.vn\n";
    }
    email.clear();
    return 0;
}