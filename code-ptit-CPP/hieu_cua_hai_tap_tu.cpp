#include <iostream>
#include <string.h>
#include <sstream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        set<string> ans;
        set<string>::iterator it;
        stringstream ss(s1);
        string token;
        while (ss >> token)
        {
            ans.insert(token);
        }
        stringstream ss2(s2);
        while (ss2 >> token)
        {
            ans.erase(token);
        }
        for (it = ans.begin(); it != ans.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
}
