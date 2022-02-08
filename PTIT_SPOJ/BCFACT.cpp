
#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
ll Fac (int n) {
    if (n==0)   return 1;
    return Fac(n-1)*n;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    while (cin >> n) {
        if (n==0)   break;
        else 
            cout << Fac(n) << endl;
    }
    return 0;
}