#include<math.h>
#include<stdio.h>
int snt(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)  return 0;
    }
    return 1;
}
int main () {
    int n;
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if(snt(i)==1)   printf("%d\n", i);
    }
}
