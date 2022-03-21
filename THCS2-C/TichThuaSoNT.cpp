#include<stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    while (t--){
        long n, dem=0;
        scanf("%ld", &n);
        long m=n;
        long tich=1, x;
        for(long i=2; i<=n; i++){
        	while(n%i == 0){
        		x = i;
        		dem++;
        		n /= i;
        	}
        	if(dem>0)	tich *= x;
        	dem = 0;
        }
        printf("%ld\n", tich);
    }
}


