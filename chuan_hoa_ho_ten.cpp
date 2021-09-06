#include <iostream>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        scanf("\n");
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        stringstream ss(s);
        string token;
        vector<string> ans;
        while (ss >> token)
        {
            token[0] -= 32;
            ans.push_back(token);
        }
        switch (k)
        {
        case 1:
            cout << ans.back() << " ";
            for (int i = 0; i < ans.size() - 1; i++)
                cout << ans[i] << " ";
            cout << endl;
            break;

        default:
            for (int i = 1; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << ans[0] << endl;
            break;
        }
    }
    return 0;
}