#include <stdio.h>
#include <math.h>
#include <string.h>
int prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void nhap(int a[][100], int n, int m, int *k)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if (prime(a[i][j]) && a[i][j] > *k)
                *k = a[i][j];
        }
    }
}
void tim(int a[][100], int n, int m, int *k)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == *k)
                printf("Vi tri [%d][%d]\n", i, j);
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[100][100];
    int k = 2;
    nhap(a, n, m, &k);
    tim(a, n, m, &k);
    return 0;
}