#include <iostream>
#include <math.h>
using namespace std;
int nt[10000] = {0};
void sieveprime()
{
    nt[0] = 1, nt[1] = 1;
    for (int i = 0; i <= sqrt(10000); i++)
    {
        if (nt[i] == 0)
            for (int j = i * i; j <= 10000; j += i)
                nt[j] = 1;
    }
}
int min(int n)
{
    for (int i = 3; i <= sqrt(n); i += 2)
        if (nt[i] == 0 && n % i == 0)
            return i;
    return n;
}
int main()
{
    sieveprime();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                cout << "1 ";
            else if (i % 2 == 0)
                cout << "2 ";
            else
                cout << min(i) << " ";
        }
        cout << endl;
    }
    return 0;
}