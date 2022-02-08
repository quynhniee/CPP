/*
AVERSEQ - Dãy con trung bình cộng
https://www.spoj.com/PTIT/problems/AVERSEQ/
*/

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
int n, k;
vector<ll> a, sum;
void init () {
    cin >> n >> k;
    a.resize(n);
    /*
    Trung bình cộng cả đoạn >= k    
    => trừ tất cả phần tử cho k  => tìm đoạn dài nhất có tổng >= 0
    */
    sum.push_back(0);
    for (auto &i:a) {
        cin >> i;
        i -= k;
        sum.push_back(sum.back() + i);
    }
}
int solution () {
    int r = n+1, size = 0;
    while (--r && r > 0)
    {
        int l = 0; 
        while (l < r) 
        {
            if (sum[l] <= sum[r]) {  // tức là tổng các phần tử từ l + 1 đến r không âm
                size = max (size, r - l);
                break;
            }
            l++;
        }
    }
    return size;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    cout << solution();
    return 0;
}