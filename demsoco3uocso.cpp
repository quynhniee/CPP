#include <iostream>
#include <math.h>
using std::cin;
using std::cout;

int nt[100000] = {0};
void sieveprime()
{
    nt[0] = 1, nt[1] = 1;
    for (int i = 0; i <= sqrt(100000); i++)
    {
        if (nt[i] == 0)
            for (int j = i * i; j <= 100000; j += i)
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
        long long n;
        cin >> n;
        int count = 0;
        for (int i = 0; i <= sqrt(n); i++)
            if (nt[i] == 0)
                count++;
        cout << count << std::endl;
    }
}