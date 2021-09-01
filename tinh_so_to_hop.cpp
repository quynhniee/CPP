#include <iostream>
using namespace std;
const long long p = 1e9 + 7;
long long mu(int a, int b)
{
    long long s = 1;
    for (int i = 0; i < b; i++)
    {
        s *= a;
        s %= p;
    }
    return s;
}
void tu(int n, int *a, int *max)
{
    int i = 2;
    while (i <= n)
    {
        while (n % i == 0)
        {
            a[i]++;
            n /= i;
            if (*max < i)
                *max = i;
        }
        if (i == 2)
            i++;
        else
            i += 2;
    }
}
void mau(int n, int *a, int *max)
{
    int i = 2;
    while (i <= n)
    {
        while (n % i == 0)
        {
            a[i]--; // vi la mau nen can chia di -> so lan xuat hien gia tri giam (--)
            n /= i;
            if (*max < i)
                *max = i;
        }
        if (i == 2)
            i++;
        else
            i += 2;
    }
}
void solve(int n, int r, int *a, int *max)
{
    for (int i = 2; i <= n; i++)
        tu(i, a, max);
    for (int i = 2; i <= r; i++)
        mau(i, a, max);
    for (int i = 2; i <= n - r; i++)
        mau(i, a, max);
    long long s = 1;
    for (int i = 2; i <= *max; i++)
    {
        if (a[i] > 0)
        {
            s *= mu(i, a[i]);
            s %= p;
        }
    }
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        int a[100000] = {0}, max = 0;
        solve(n, r, a, &max); // 0.04s
    }
}

/*  cach 2 (0,02s)
#include<bits/stdc++.h>

using namespace std;

int main(){
	const long long mod=1e9+7;
	long long dp[1005][1005];
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(i==j||j==0) dp[i][j]=1;
			else dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
			dp[i][j]%=mod;
		}
	}
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<dp[n][k]<<endl;
	}
}

*/