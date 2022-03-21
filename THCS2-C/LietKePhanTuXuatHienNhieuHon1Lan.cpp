#include<stdio.h>

int main () {
	int n, a[100000], b[100000]={0}, count = 0, c[100000]={0};
	scanf ("%d", &n);
	for (int i=0; i<n; i++) {
		scanf ("%d", &a[i]);
		b[a[i]]++;
		c[a[i]]++;
	}
	for (int i=0; i<n; i++)	if (c[a[i]] > 1) {
		count++;
		c[a[i]] = 0;
	}	
	printf ("%d\n", count);
	for (int i=0; i<n; i++) {
		if (b[a[i]] > 1) {
			printf ("%d ", a[i]);
			b[a[i]] = 0;
		}	
	}
	return 0;
}

