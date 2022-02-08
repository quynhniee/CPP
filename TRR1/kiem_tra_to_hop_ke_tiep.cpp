
#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n, k, c[100000], k1 = 4, k2 = 4;
vector<int> th, kq;
bool stop;
void init()
{
    cout << "Nhap n va k:\t";
    cin >> n >> k;
    cout << "Nhap to hop xuat phat: ";
    for (int i = 1; i <= k; i++)
        cin >> c[i];
    stop = false;
}

// sinh tổ hợp
void result()
{
    for (int i = 1; i <= k; i++) {
        th.push_back(c[i]);
    }
}
void next()
{
    int i = k;
    while (i > 0 && c[i] == n - k + i)
        i--;
    if (i > 0)
    {
        c[i] += 1;
        for (int j = i + 1; j <= k; j++)
        {
            c[j] = c[i] + j - i;
        }
    }
    else
        stop = true;
}
void combination()
{
    while (k1--)
    {
        next();
        result();
    }
}
// kiểm tra đáp số
bool digit (string s) {
    for (auto i:s)
        if (!isdigit(i))    return false;
    return true;
}
bool check () {
    for (int i=0; i<k*4; i++)
        if (th[i] != kq[i])   return false;
    return true;
}
void dap_an () {
    cout << "Nhap dap an can kiem tra: ";
    string s, token;
    scanf ("\n");
    getline(cin, s);
    stringstream ss(s);
    while (ss >> token) 
        if (digit(token)) kq.push_back(stoi(token));
    (check()) ? cout << "\t=>\tTrue\n" : cout << "\t=>\tFalse\n";
    kq.clear();
}
int main () {
    init();
    combination();
    while (k2--)
        dap_an();
    return 0;
}