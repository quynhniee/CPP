
#include<stdio.h>
void tonggiaithua(long n){
	long tich , tong = 0, m=n;
	while (n!=0){
		tich = 1;
		long a = n%10;
		for(long i=1; i<=a; i++){
			tich *= i;
		}
		tong += tich;
		n /=10;
	}
	if(tong == m)	printf("%ld ", m);
}
int main () {
	long n;
	scanf("%ld", &n);
	for(long i=1; i<=n; i++){
		tonggiaithua(i);
	}
    return 0;
}

