#include <sstream>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        vector<string> ans;
        while (ss >> token)
            ans.push_back(token);
        cout << ans.size() << endl;
    }
}