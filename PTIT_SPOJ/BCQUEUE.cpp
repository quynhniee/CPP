#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
queue<int> a;
int n, x;
void solution () {
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 1) 
            cout << a.size() << endl;
        else if (x == 2) 
            (!a.empty()) ? cout << "NO\n" : cout << "YES\n";
        else if (x == 3) 
        {
            ll val;
            cin >> val;
            a.push(val);
        }
        else if (x == 4 && !a.empty())  
            a.pop();
        else if (x == 5)
            (!a.empty()) ?   cout << a.front() << endl : cout << "-1\n";
        else if (x == 6)
            (!a.empty()) ?   cout << a.back() << endl : cout << "-1\n";
    }
    
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}