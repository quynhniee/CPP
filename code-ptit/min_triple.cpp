#include<bits/stdc++.h>
 
using namespace std;
 
#define endl '\n'
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int n, x;
    while(t--)
    {
        cin >> n;
        int min1, min2, min3;
        min1 = min2 = min3 = INT_MAX;
        while(n--)
        {
            cin >> x;
            if(x < min1)
            {
                min3 = min2;
                min2 = min1;
                min1 = x;
            }
            else if(x < min2)
            {
                min3 = min2;
                min2 = x;
            }
            else min3 = min(min3, x);
        }
        cout << min1 + min2 + min3 << endl;
    }
    return 0;
}