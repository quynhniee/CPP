#include<stdio.h>
long long tongcs(long long n){
	long long m = n, sum = 0;
	while (m != 0) {
		sum += m%10;
		m /= 10;
	}
	return sum;
}
long long pt (long long n) {
	long long sum = 0;
	for(int i=2; i<=n; i++){
		while (n%i == 0) {
			sum += tongcs(i);
			n /= i;
		}
	}
	return sum;
}
int main () {
	long long n;
	scanf ("%lld", &n);
	if (tongcs(n) == pt(n))	printf("YES\n");
	else	printf("NO\n");
	return 0;
}

