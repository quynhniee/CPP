#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5], Max = 0, mark[1000000] = {0}, pos = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        mark[a[i]]++;
        while (mark[a[i]] > 1)
        {
            mark[a[pos]]--;
            ++pos;
        }
        Max = (Max > i - pos + 1) ? Max : i - pos + 1;
    }
    printf("%d", Max);
    return 0;
}
