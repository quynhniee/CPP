#include<stdio.h>
#include<math.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int a, b, k[10000]={0};
		scanf ("%d%d", &a, &b);
		for (int i=a; i<=b; i++) {
			int kt = i;
			for (int j=2; j<=kt; j++) {
				int count = 0;
				while (kt % j == 0) {
					count++;
					kt /= j;
				}
				if (count > k[j])	k[j] = count;
			}
		}
		long long tich = 1;
		for (int j=2; j<=b; j++) {
			if (k[j] != 0)	tich *= pow (j, k[j]);
		}
		printf ("%lld\n", tich);
	}
	return 0;
}

