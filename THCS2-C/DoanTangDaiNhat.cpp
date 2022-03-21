#include<stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	for (int j=1; j<=t; j++) {
		int n, a[10000], b[10000]={0}, k=1, max = 1;
		scanf ("%d", &n);
		for (int i=0; i<n; i++) {
			scanf ("%d", &a[i]);
		}
		for (int i=0; i<n-1; i++) {
			if (a[i+1]-a[i] > 0 )	k++;
			else	k = 1;
			if (max < k) {
				max = k;
			}	
		}
		printf ("Test %d:\n", j);
		k = 1;
		printf("%d\n", max);
		for (int i=0; i<n-1; i++) {
			if (a[i+1]-a[i] > 0)	k++;
			else	k = 1;
			if (k ==  max) {
				for (int j=i+1-max+1; j<=i+1; j++){
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}

