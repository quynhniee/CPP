#include <iostream>
using namespace std;

bool stop;
int count;
void Init(int *Bin, int n)
{
    for (int i = 1; i <= n; i++)
        Bin[i] = 0;
    count = 0, stop = false;
}
void result(int *Bin, int n)
{
    count++;
    cout << "\nXau nhi phan thu " << count << ":\t";
    for (int i = 1; i <= n; i++)
        cout << Bin[i];
}
void next_bits_string(int *Bin, int n)
{
    int i = n;
    while (i > 0 && Bin[i] != 0)
    {
        Bin[i] = 0;
        i--;
    }
    if (i == 0)
        stop = true;
    else
    {
        Bin[i] = 1;
    }
}
void generate(int *Bin, int n)
{
    while (!stop)
    {
        result(Bin, n);
        next_bits_string(Bin, n);
    }
}
int main()
{
    int n;
    cin >> n;
    int Bin[n];
    Init(Bin, n);
    generate(Bin, n);
    return 0;
}