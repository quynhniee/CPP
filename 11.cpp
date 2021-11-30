#include <stdio.h>
#include <string.h>
// ITPTIT - Mai la anh em
int count = 0;
int check(char *a, char *b)
{
    for (int i = 0; i < strlen(b); i++)
    {
        int size = strlen(a);
        if (b[i] == a[0])
        {
            for (int j = 0; j < strlen(a); j++)
            {
                if (b[i + j] == a[j])
                    size--;
            }
            if (size == 0)
                count++;
        }
    }
    return count;
}
int main()
{
    char a[1000], b[1000];
    gets(a);
    gets(b);
    printf("%d", check(a, b));
    return 0;
}
