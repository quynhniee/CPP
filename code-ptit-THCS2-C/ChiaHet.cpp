#include<stdio.h>

long long kiemtra (long long n) {
	long long k = 0;
	long long tich = 1;
	for (int i=2; i<=n; i+=2) {
		int j = i;
		while (j%2 == 0) {
			j /= 2;
			k++;
		}
	}
	return k;
}

int main () {
	long long n, k;
	scanf ("%lld%lld", &n, &k);
	if (kiemtra(n) >= k)	printf("Yes");
	else	printf("No");
	return 0;
}

