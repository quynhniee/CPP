#include <iostream>
#include <fstream>
#include <climits>
#include <string.h>
#include <sstream>
using namespace std;
bool check(string s)
{
    if (s.size() > 9)
        return false;
    for (int i = 0; i < s.size(); i++)
        if (!isdigit(s[i]))
            return false;
    return true;
}
int main()
{
    ifstream fp("DATA.in");
    long long sum = 0;
    string s;
    while (fp >> s)
    {
        if (check(s) && stoi(s) <= INT_MAX)
            sum += stoi(s);
    }
    cout << sum << endl;
    return 0;
}