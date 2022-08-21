#include<stdio.h>

void nhap (int m, int n, int a[][100]) {
	for (int i=0; i<m; i++) {
		for (int j = 0; j<n; j++) {
			scanf ("%d", &a[i][j]);
		}
	}
}
void tich (int m, int n, int p, int a[][100], int b[][100], int ab[][100]) {
	for (int i=0; i<m; i++) {
		for (int j=0; j<p; j++) {
			for (int k=0; k<n; k++) {
				ab[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
void in (int m, int n, int a[][100]) {
	for (int i=0; i<m; i++) {
		for (int j = 0; j<n; j++) {
			printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}
}
int main () {
	int m, n, p, q;
	scanf ("%d%d%d%d", &m, &n, &p, &q);
	int a[100][100], b[100][100], c[100][100], ab[100][100], abc[100][100];
	nhap (m, n, a);
	nhap (n, p, b);
	nhap (p, q, c);
	tich (m, n, p, a, b, ab);
	tich (m, p, q, ab, c, abc);
	in (m, q, abc);
	return 0;
}

