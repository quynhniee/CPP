/* 
BCDAISY - Chú bò hư hỏng
https://www.spoj.com/PTIT/problems/BCDAISY/
*/

#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n, m;
vector<int> cow[251];
bool vs[251];
void init () {
    cin >> n >> m;
    int c1, c2;
    for (int i=0; i<m; i++) {
        cin >> c1 >> c2;
        cow[c1].push_back(c2);
        cow[c2].push_back(c1);
    }
}
void BFS (int s) { // đỉnh nguồn s
    fill_n(vs, n+1, false);
    queue <int> q;
    q.push(s);
    vs[s] = true;
    while (!q.empty())      
    {
        int val = q.front();
        q.pop();
        for (auto i : cow[val]) {
            if (!vs[i]) q.push(i);
            vs[i] = true;
        }
    }
    
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    BFS(1); // duyệt đồ thị với đỉnh là con bò số 1
    bool check = true;
    for (int i=1; i<=n; i++)
        if (vs[i] == 0)   {
            cout << i << endl;
            check = false;
        }
    if (check)  cout << "0\n";
    return 0;
}