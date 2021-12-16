#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;
typedef long long ll;
typedef double db;
void solution () {
    int count = 0;
    string s1, s2;
    cin >> s1 >> s2;
    int minPos = s1.size(), maxPos = -1;
    for (auto i : s2) {
        if (s1.find(i) != string::npos) {
            count++;
            int pos = s1.find(i);
            minPos = min (minPos, pos);
            maxPos = max (maxPos, pos);
        }
    }
    if (count < s2.size())  cout << "-1\n";
    else {
        for (int i = minPos; i <= maxPos; i++) 
            cout << s1[i];
        cout << endl;
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}