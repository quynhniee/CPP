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
int a[(int)1e6 + 1] = {0};
vector<int> prime;
void sievePrime () {
    a[0]=1, a[1]=1;
    for (long long i=2; i<=sqrt(100000); i++)
        for (long long j=i*i; j<=100000; j+=i)
            if (a[i]==0)
                a[j] = 1;
    for (int i=2; i<=(int)1e6; i++)
        if (!a[i])  prime.push_back(i);
}
void count () {
    int n, k = 0;
    cin >> n;
    int size = prime.size();
    for (int i=0; i<=size; i++) {
        int sum = 0;
        for (int j=i; j<=size; j++) {
            sum += prime[j];
            if (sum == n)   k++;
            else if (sum > n)   break;
        }
    }
    cout << k << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    sievePrime();
    int t;
    cin >> t;
    while (t--)
        count();
    return 0;
}