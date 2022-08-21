#include<stdio.h>

int kt (long n) {
	while (n >= 10 ) {
		int m = n%10;
		n /= 10;
		if (n%10 <= m)	return 0;
	}
	return 1;
}

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		long a, b, k = 0;
		scanf("%ld%ld", &a, &b);
		for (long i=a; i<=b; i++){
			if(kt(i))	k++;
		}
		printf("%d\n", k);
	}
	return 0;
}

