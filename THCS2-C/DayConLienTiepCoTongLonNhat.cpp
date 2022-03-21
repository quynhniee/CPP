#include<stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n, m;
		scanf ("%d", &n);
		long long a[100000];
		long long sum = 0, max = -10000;
		for (int i=0; i<n; i++){
			scanf ("%lld", &a[i]);
			if (max < a[i])	max = a[i];
			if (a[i] > 0) {
				m = i;
			}	
		}
		for (int i=0; i<=m; i++) {
			sum += a[i];
			if (sum < a[i])	sum = a[i];
			if (max < sum)	max = sum;
		}
		printf("%lld\n", max);
	}
	return 0;
}

