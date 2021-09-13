#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long sum = 0, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum < x)
            cout << "-1\n";
        else
        {
            deque<int> ans;
            long long s = 0;
            int min = __INT_MAX__;
            for (int i = 0; i < n; i++)
            {
                ans.push_back(a[i]);
                s += a[i];
                if (s > x)
                {
                    while (s - ans.front() > x)
                    {
                        s -= ans.front();
                        ans.pop_front();
                    }
                    min = (min > ans.size()) ? ans.size() : min;
                }
            }
            cout << min << endl;
        }
    }
    return 0;
}
