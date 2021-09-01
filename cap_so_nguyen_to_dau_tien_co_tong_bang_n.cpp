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
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            if (nt[n - 2] == 0)
                cout << "2 " << n - 2 << endl;
            else
                cout << "-1\n";
        }
        else if (nt[n] == 0)
            cout << "-1\n";
        else
        {
            for (int i = 2; i <= n / 2; i++)
                if (nt[i] == 0 && nt[n - i] == 0)
                {
                    cout << i << " " << n - i << endl;
                    break;
                }
        }
    }
    return 0;
}