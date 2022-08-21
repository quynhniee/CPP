#include<stdio.h>
void nhap (int a[][100], int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
		if (i>=j)	a[i][j] = j+1;
		else 	a[i][j] = 0;
		}
	}
}
void tich (int a[][100], int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			int kq = 0;
			for (int k=0; k<n; k++) {
				kq += a[i][k]*a[j][k];
			}
			printf ("%d ", kq);
		}
		printf ("\n");
	}
}
int main () {
	int t;
	scanf ("%d", &t);
	for (int q=1; q<=t; q++) {
		int n, a[100][100];
		scanf ("%d", &n);
		nhap (a, n);
		printf ("Test %d:\n", q);
		tich (a, n);
	}
	return 0;
}

