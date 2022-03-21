#include<stdio.h>

int main () {
	int n, a[10000];
	scanf ("%d", &n);
	for (int i=0; i<n; i++) {
		scanf ("%d", &a[i]);
	}
	for (int i=0; i<n-1; i++) {
		int amin = 10000, k = 0;
		for (int j=i; j<n; j++) {
			if (amin > a[j]) {
				amin = a[j];
				k = j;
			}	
		}
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
		for (int j=0; j<n; j++) {
			printf ("%d ", a[j]);
		}
		printf ("\n");
	}
	return 0;
}

