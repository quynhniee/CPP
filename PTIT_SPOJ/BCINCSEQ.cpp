/*
BCINCSEQ - Đoạn tăng
https://www.spoj.com/PTIT/problems/BCINCSEQ/
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
int n;
vector<int> a, Rank;

void init () {
    cin >> n;
    a.resize(n);
    Rank.resize(n, 1);
    for (auto &i:a) 
        cin >> i;
}
void increasingSubsequence () {
    for (int i=1; i<n; i++) {
        if (a[i] >= a[i-1]) {
            Rank[i] = max(Rank[i], Rank[i-1] + 1);
        }
    }
    cout << *max_element(Rank.begin(), Rank.end()) << endl;
    a.clear();
    Rank.clear();
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    increasingSubsequence();
    return 0;
}