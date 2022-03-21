#include<stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    long giaithua = 1, sum = 0;
    for(int i=1; i<=n; i++){
        giaithua *= i;
        sum += giaithua;
    }
    printf("%ld", sum);
}
