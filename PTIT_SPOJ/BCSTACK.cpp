
#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
#include <stack>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
stack<ll> a;

void solve (string s) {
    if (s == "init") {
        while (!a.empty())
            a.pop();
    }
    else if (s == "push") {
        ll x;
        cin >> x;
        a.push(x);
    }
    else if (s == "pop") {
        if (!a.empty()) {
            a.pop();
        }
    } 
    else if (s == "top") {
        if (a.empty())  cout << "-1\n";
        else    cout << a.top() << endl;
    }
    else if (s == "size")   {
        cout << a.size() << endl;
    }
    else if (s == "empty")  {
        (a.empty()) ? cout << "1\n" : cout << "0\n"; 
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end") break;
        else 
            solve(s);
    }
    
    return 0;
}