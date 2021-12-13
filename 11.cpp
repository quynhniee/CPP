#include <stdio.h>
#include <string.h>
int main()
{
    char a[10005];
    scanf("%s", &a);

    if (strlen(a) > 5)
    {
        int vitri = 0;
        for (int i = 0; i < strlen(a) - 4; i++)
        {
            if (a[vitri] <= a[i])
            {
                vitri = i;
            }
        }
        for (int i = vitri; i < vitri + 5; i++)
        {
            if (a[vitri] != '0')
            {
                printf("%c", a[i]);
            }
        }
    }

    return 0;
}