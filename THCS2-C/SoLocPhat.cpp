#include<stdio.h>
int kt(long n){
    while(n!=0){
        int a = n%10;
        if(a!=0 && a!=8 && a!=6)    return 0;
        n /= 10;
    }
    return 1;
}
int main () {
    int t;
    scanf("%d", &t);
    while(t--){
        long n;
        scanf("%ld", &n);
        if(kt(n)==1)    printf("YES\n");
        else    printf("NO\n");
    }
}
