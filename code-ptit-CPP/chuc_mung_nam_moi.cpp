#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    map<string, int> ans;
    int n;
    cin >> n;
    //    cin.ignore();
    while (n--)
    {
        scanf("\n");
        string s;
        getline(cin, s);
        ans[s]++;
    }
    cout << ans.size() << endl;
}