#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // nếu mảng không có phần tử nào >=0 thì trả về -1
        long long sum = 0, summax = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (summax < sum)
                summax = sum;
            if (sum < 0)
                sum = 0;
        }
        cout << summax << endl;
    }
}