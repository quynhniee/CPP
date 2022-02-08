
#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n, a[100000], k1 = 4, k2 = 4;
vector<int> hv, kq;
bool check () {
    for (int i=0; i<n*4; i++)
        if (hv[i] != kq[i])   return false;
    return true;
}
void input () {
    cout << "Nhập n: ";
    cin >> n;
    cout << "Nhập hoán vị bắt đầu: ";
    for (int i=0; i<n; i++)
        cin >> a[i];
}
void sinh_hoan_vi () {
    do {
        next_permutation(a, a+n);
        for (int i=0; i<n; i++)
            hv.push_back(a[i]);
    }
    while (--k1);
    // for (auto i : hv)   cout << i << " ";
    // cout << endl;
}
bool digit (string s) {
    for (auto i:s)
        if (!isdigit(i))    return false;
    return true;
}
void dap_an () {
    cout << "Nhập đáp án cần kiểm tra: ";
    string s, token;
    scanf ("\n");
    getline(cin, s);
    stringstream ss(s);
    while (ss >> token) 
        if (digit(token)) kq.push_back(stoi(token));
    (check()) ? cout << "\t=>\tĐúng\n" : cout << "\t=>\tSai\n";
    kq.clear();
}
int main () {
    input();
    sinh_hoan_vi();
    while (k2--)
        dap_an();
    return 0;
}