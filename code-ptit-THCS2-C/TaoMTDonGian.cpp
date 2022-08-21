#include<stdio.h>

void matran (int n, int a[][100]) {
	for (int i=0; i<n; i++) {
		int k=1;
		for (int j=0; j<n; j++) {
			if (i>=j) a[i][j] = 0;
			else {
				a[i][j] = k++;
			}
		}
	}
}
void in (int n, int a[][100]) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}
}
int main () {
	int n, a[100][100]={};
	scanf ("%d", &n);
	matran (n, a);
	in (n, a);
	return 0;
}

