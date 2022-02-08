#include <bits/stdc++.h>
using namespace std;
 
int n, a[20][20], Time = 1000;
bool m[20] = {0};
vector <int> temp;
vector <vector <int> > ans;
 
void input() {
	cout << "Nhap so nguoi: ";
    cin >> n;
    cout << "Nhap ma tran chi phi:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
}
 
void solve() {
    int checkTime = 0;
    for (int i = 0; i < n; ++i)
        checkTime += a[i][temp[i]];
    if(checkTime < Time) {
        ans.clear();
        Time = checkTime;
        ans.push_back(temp);
    }
    else if(checkTime == Time)
        ans.push_back(temp);
}
 
void Try(int i) {
    for (int j = 0; j < n; ++j)
        if(!m[j]) {
            m[j] = true;
            temp.push_back(j);
            if(i == n) solve();
            else Try(i+1);
            m[j] = false;
            temp.pop_back();
        }
}
 
int main() {
    input();
    Try(1);
    for (int i = 0; i < ans.size(); ++i) {
    	cout << "Man: ";
    	for (int j = 0; j < n; ++j)
    		cout << j+1 << " ";
    	cout << endl;
    	cout << "Job: ";
        for (int j = 0; j < n; ++j)
            cout << ans[i][j]+1 << " ";
        cout << endl << endl;
    }
    return 0;
}