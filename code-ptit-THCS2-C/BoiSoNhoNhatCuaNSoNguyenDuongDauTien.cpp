#include<stdio.h>
#include<math.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n, k[1000]={0};
		long long tich = 1;
		scanf ("%d", &n);
		for (int i=2; i<=n; i++) {
			int kt = i;
			for (int j=2; j<=kt; j++) {
				int dem = 0;
				while (kt % j == 0) {
					dem++;
					kt /= j;
				}
				if (dem > k[j])	k[j] = dem;
			}
		}
		for (int i=2; i<=n; i++) {
			tich *= pow (i, k[i]);
		}
		printf ("%lld\n", tich);
	}
	return 0;
}

