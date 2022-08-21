#include<stdio.h>
void pt (long long n) {
	printf("%lld = ", n);
	for (int i=2; i<=n; i++) {
		int count = 0;
		while (n%i == 0) {
			count++;
			n /= i;
		}
		if(count != 0){
			printf("%d^%d", i, count);
			if(n>i)	printf(" * ");
		}	
	}
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		long long n;
		scanf ("%lld", &n);
		pt(n);
		printf("\n");
	}
	return 0;
}

