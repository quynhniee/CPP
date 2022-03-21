#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
vector <string> pass;
int t;
void init () {
    cin >> t;
    pass.resize(t);
    for (auto &i : pass) 
        cin >> i;
}
bool cmp (string a, string b) {
    return a.size() < b.size();
}
int count () {
    int k = 0;
    sort (pass.begin(), pass.end(), cmp);
    for (int i=1; i<t; i++) {
        for (int j=0; j<i; j++) {
            if (pass[i] == pass[j]) k+=2;
            else if ( pass[i].find(pass[j]) != string::npos)
                k++;
        }
    }
    return k;
}
int main () {
    init ();
    cout << count();
    pass.clear();
    return 0;
}
