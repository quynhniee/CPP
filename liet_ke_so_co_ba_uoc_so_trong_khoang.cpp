#include <iostream>
#include <math.h>
using namespace std;
int nt[1000000] = {0};
void sieveprime()
{
    nt[0] = 1, nt[1] = 1;
    for (int i = 0; i <= sqrt(1000000); i++)
    {
        if (nt[i] == 0)
            for (int j = i * i; j <= 1000000; j += i)
                nt[j] = 1;
    }
}
int main()
{
    sieveprime();
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r, count = 0;
        cin >> l >> r;
        for (int i = sqrt(l); i <= sqrt(r); i++)
            if (nt[i] == 0)
                count++;
        cout << count << endl;
    }
}