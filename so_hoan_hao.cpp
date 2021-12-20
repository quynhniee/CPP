#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int check(long long n)
{
    if (n > (long long)1e12)
        return false;
    long long s = 1, k = sqrt(n);
    for (long long i = 2; i <= k; i++)
        if (n % i == 0)
            s += i + n / i;
    // if (k * k == n)  //  -> không cần vì số hoàn hảo không rơi vào scp
    //     s -= n;
    return (s == n) ? 1 : 0;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << check(n) << endl;
        perfecrNumber();
    }
}
// cách khác: số hoàn hảo có dạng 2^(p-1)*(2^p-1) với p là số nguyên tố
// 2 <= p <= 19 vì với p > 19 thì số vượt quá long long rồi
/*
bool prime (long long n) {
    if (n<2)    return 0;
    if (n%2 == 0 && n>2)    return 0;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i == 0)   return false;
    }
    return true;
}
void perfecrNumber () {
    vector<long long> pn;
    long long i1 = 2, i2 = 2;
    for (int i = 2; i <= 19; i++) {
        i2 *= 2;
        if (prime(i))   pn.push_back(i1*(i2-1));
        i1 *= 2;
    }
    for (auto i : pn) cout << i << " ";
}
*/