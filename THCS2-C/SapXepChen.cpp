#include<stdio.h>

int main () {
	int n, a[100000], b[100000], k = 0;
	scanf ("%d", &n);
	for (int i=0; i<n; i++) {
		scanf ("%d", &a[i]);
	}
	for (int i=0; i<n; i++) {
		b[k++] = a[i];
		for (int j1=0; j1<k-1; j1++) {
			for (int j2=j1+1; j2<k; j2++) {
				if (b[j1] > b[j2]) {
					int temp = b[j1];
					b[j1] = b[j2];
					b[j2] = temp;
				}
			}
		}
		printf ("Buoc %d: ", i);
		for (int j=0; j<k; j++) {
			printf ("%d ", b[j]);
		}
		printf ("\n");
	}
	return 0;
}

