#include <bits/stdc++.h>
using namespace std;
 
int n, m, a[50][50], date = 0;
vector <int> temp;
vector <vector <int> > ans;
 
void input() {
	cout << "Nhap so khach hang: ";
    cin >> n;
    cout <<"Nhap so ngay: ";
    cin >> m;
    cout << "Nhap ma tran don hang:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
}
 
void solve() {
    int mark[m] = {0};
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        if(temp[i] == 1)    
            for (int j = 0; j < m; ++j)
                if(a[i][j]) {
                    if(mark[j])
                        return ;
                    else {
                        mark[j] = 1;
                        ++cnt;
                    }
                }
    if(cnt > date) {
        date = cnt;
        ans.clear();
        ans.push_back(temp);
    }
    else if(cnt == date)
        ans.push_back(temp);
}
 
void Try(int i) {
    for (int j = 0; j < 2; ++j) {
        temp.push_back(j);
        if(i == n) solve();
        else Try(i+1);
        temp.pop_back();
    }
}
 
int main() {
    input();
    Try(1);
    cout << "Cac phuong an toi uu la:\n";
    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < n; ++j)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}