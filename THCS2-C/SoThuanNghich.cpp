#include<stdio.h>
long long stn(long long n){
	long long m = 0;
	while(n != 0){
		m = m*10 + n%10;
		n /= 10;
	}
	return m;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long m = n;
//		printf("%lld", stn(n));
		if( m == stn(n))	printf("YES\n");
		else 	printf("NO\n");
	}
	return 0;
}
