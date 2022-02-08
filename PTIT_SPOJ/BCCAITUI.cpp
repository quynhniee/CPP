/*
https://www.spoj.com/PTIT/problems/BCCAITUI/
BCCAITUI - Cái túi
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

typedef struct {
    int w, v;
} tui;

vector<tui> bag;
int n, max_w;

void init () {
    cin >> n >> max_w;
    bag.resize(n);
    for (int i=0; i<n; i++) 
        cin >> bag[i].w >> bag[i].v;
}
bool condition (tui a, tui b) {
    return (1.0 * a.v / a.w) > (1.0 * b.v / b.w);
}
int calculate (int i, int w, int v) {
    if (w > max_w)
        return 0;
    else if (i == n)    return v;
    int get = calculate(i+1, w + bag[i].w, v + bag[i].v);  // tổng giá trị khi lấy vật thứ i
    int _get = calculate(i+1, w, v);  // tổng giá trị khi không lấy vật thứ i
    return max(get, _get);
}  

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    cout << calculate(0, 0, 0);
    return 0;
}