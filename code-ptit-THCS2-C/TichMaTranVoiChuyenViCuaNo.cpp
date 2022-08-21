#include<stdio.h>

void nhap (int a[][100], int n, int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			scanf ("%d", &a[i][j]);
		}
	}
}
void tich (int a[][100], int n, int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			int kq = 0;
			for (int k=0; k<m; k++) {
				kq += a[i][k]*a[j][k];
			}
// vi la tich voi MT chuyen vi nen ta doi vi tri a[k][j] --> a[j][k]
			printf ("%d ", kq);
		}
		printf ("\n");
	}
}

int main () {
	int t;
	scanf ("%d", &t);
	for (int i=1; i<=t; i++) {
		int m, n, a[100][100];
		scanf ("%d%d", &n, &m);
		nhap (a, n, m);
		printf("Test %d:\n", i);
		tich (a, n, m);
	}
	return 0;
}

