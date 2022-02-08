/*
CLUMSYCO - Clumsy Cows
https://www.spoj.com/PTIT/problems/CLUMSYCO/
*/

#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
#include <stack>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
stack<char> a;
string s;
void solution () {
    cin >> s;
    for (auto i : s) {
        if (!a.empty() && a.top() == '(' && i == ')')
            a.pop();
        else    a.push(i);
    }
// những dấu còn lại trong a đều không tạo thành 1 cặp () nào thỏa mãn
// VD   ))(((((   --> ()()()(
// ** số lượng dấu mở ngoặc đơn ‘(‘ >= dấu đóng ngoặc đơn ‘)’ **
    int close = 0, size = a.size();
    while (!a.empty()) {
        if (a.top() == ')')  
            close++;
        a.pop();
    }
// cần xoay 1 nửa stack a để tạo thành các cặp
// nếu còn lẻ dấu ) thì xoay thêm 1 lần
    cout << size / 2 + close % 2;

}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}