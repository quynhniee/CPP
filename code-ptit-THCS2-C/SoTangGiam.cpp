#include<stdio.h>
#include<math.h>

int snt (long n) {
	if (n<2)	return 0;
	if (n%2 == 0 && n > 2)	return 0;
	for (int i=3; i<=sqrt(n); i+=2) {
		if (n%i == 0)	return 0;
	}
	return 1;
}
int giam (long n) {
	while (n >= 10 ) {
		int m = n%10;
		n /= 10;
		if (n%10 <= m)	return 0;
	}
	return 1;
}
int tang (long n) {
	while (n >= 10 ) {
		int m = n%10;
		n /= 10;
		if (n%10 >= m)	return 0;
	}
	return 1;
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf ("%d", &n);
		int min = 1;
		for (int i=0; i<n-1; i++) {
			min *= 10;
		}
		long k = 0;
		for (long i=min; i<min*10; i++) {
			if ((tang(i) || giam(i)) && snt(i))	k++;
		}
		printf("%ld\n", k);
	}
	return 0;
}

