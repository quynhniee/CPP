#include <sstream>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        vector<string> ans;
        while (ss >> token)
            ans.push_back(token);
        for (int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i] << " ";
        cout << endl;
    }
}