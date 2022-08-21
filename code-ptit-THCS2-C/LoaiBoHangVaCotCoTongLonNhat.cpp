#include<stdio.h>

void nhap (int a[][100], int m,int n) {
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			scanf ("%d", &a[i][j]);
		}
	}
}

int main () {
	int t;
	scanf ("%d", &t);
	for (int k=1; k<=t; k++) {
		int m, n, a[100][100], row, col, b[100][100];
		scanf ("%d%d", &m, &n);
		nhap (a, m, n);
	// tim hang co tong max:
		int max = 0;
		for (int i=0; i<m; i++) {
			int tong = 0;
			for (int j=0; j<n; j++) {
				tong += a[i][j];
			}
			if (max < tong) {
				max = tong;
				row = i;
			}
		}
	// xoa hoang:
		for (int i=row; i<m; i++) {
			for (int j=0; j<n; j++)	a[i][j] = a[i+1][j];
		}
		m--;
	// tim cot co tong max:
		max = 0;
		for (int i=0; i<n; i++) {
			int tong = 0;
			for (int j=0; j<m; j++) {
				tong += a[j][i];
			}
			if (max < tong) {
				max = tong;
				col = i;
			}
		}
	// in ra ket qua:
		printf("Test %d:\n", k);
		for (int i=0; i<m; i++) {
			for (int j=0; j<n; j++) {
			if(j != col)	printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

