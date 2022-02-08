
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

string Sum (string a, string b) {
    int len = max(a.size(), b.size());
    while (a.size() < len) a = '0' + a;
    while (b.size() < len) b = '0' + b;
    string res = {};
    int rem = 0;
    while (len--) {
        int digit = (a[len] - '0') + (b[len] - '0') + rem;
        res = char(digit % 10 + '0') + res;
        rem = digit / 10;
    }
    if (rem > 0)    res = char(rem + '0') + res;
    return res;
}

string Subtract (string a, string b) {
    bool negative = false;
    if (a == b) return "0";
    else if (a.size() < b.size() || (a.size() == b.size() && a < b)) {
        swap (a, b);
        negative = true;
    } 
    int len = a.size();
    while (b.size() < len) b = '0' + b;
    string res = {};
    int rem = 0;
    while (len--)
    {
        int digit = (a[len] - '0') - (b[len] - '0') - rem;
        if (digit < 0) {
            rem = 1;
            digit += 10;
        }
        else    rem = 0;
        res = char(digit + '0') + res;
    }
    while (res[0] == '0')  res.erase(0, 1);
    if (negative)   res = '-' + res;
    return res;
}

string Multiply (string a, string b) {
    if (a == "0" || b == "0")   return "0";
    int alen = a.size();
    string res = "0";
    while (alen--) {
        int suffix = a.size() - 1 - alen;
        string mul (suffix, '0');
        int rem = 0, blen = b.size();
        while (blen--) {
            int digit = (a[alen] - '0') * (b[blen] - '0') + rem;
            rem = digit / 10;
            mul = char(digit % 10 + '0') + mul;
        }
        if (rem > 0)    mul = char(rem + '0') + mul;
        res = Sum (mul, res);
    }
    while (res[0] == '0')   res.erase(0, 1);
    return res;
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    cout << Sum(a, b) << endl << Subtract(a, b) << endl << Multiply(a, b) << endl;
    
    return 0;
}