#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <set>
#include <fstream>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
void solve (string &s) {
    for (int i=0; i<s.size(); i++) {
        if (s[i] >='A' && s[i] <= 'Z')  s[i] += 32;
    }
}
void solution (char *f) {
    ifstream fp;
    fp.open(f);
    string token;
    set<string> ans;
    while (getline(fp, token)) {
        solve(token);
        ans.insert(token);
    }
    for (auto i:ans) 
        cout << i << endl;
}
int main () {
    solution ("CONTACT.in");
    return 0;
}