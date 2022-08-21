#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#include <utility>
#include <list>
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n;
void test () {
    cin >> n;
    int index;
    map<int, int> a;
    while (n--) {
        cin >> index;
        a[index]++;
        if (a[index] == 1)  cout << index << " ";
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    test();
    return 0;
}