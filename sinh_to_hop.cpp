#include <iostream>
using namespace std;
int count;
bool stop;
int n, k;
int c[100000];
void init()
{
    for (int i = 1; i <= n; i++)
        c[i] = i;
    count = 0, stop = false;
}
void result()
{
    count++;
    cout << "\nTo hop thu " << count << " la:\t";
    for (int i = 1; i <= k; i++)
        cout << c[i] << " ";
}
void next()
{
    int i = k;
    while (i > 0 && c[i] == n - k + i)
        i--;
    if (i > 0)
    {
        c[i] += 1;
        for (int j = i + 1; j <= k; j++)
        {
            c[j] = c[i] + j - i;
        }
    }
    else
        stop = true;
}
void combination()
{
    while (!stop)
    {
        result();
        next();
    }
}
int main()
{
    cin >> n >> k;
    init();
    combination();
    return 0;
}