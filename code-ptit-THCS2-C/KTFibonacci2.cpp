
#include<stdio.h>

void ktra(long long n){
	long long a0=1, a1=1, a=a0+a1;
	while(a<n){
		a0 = a1;
		a1 = a;
		a = a0 + a1;
	}
//	printf("%lld\n", a);
	if(a==n || n==1 || n==0)	printf("YES\n");
	else	printf("NO\n");
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		ktra(n);
	}
    return 0;
}

