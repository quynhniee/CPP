#include<stdio.h>

int a[100][100], n, d, gt, hang, cot;

void matran () {
	d = 0, gt = n*n, hang = n-1, cot = n-1;
	while(d <= n/2){
		for(int i=d; i<=cot; i++)	a[d][i] = gt--;
		for(int i=d+1; i<=hang; i++)	a[i][cot] = gt--;
		for(int i=cot-1; i>=d; i--)	a[hang][i] = gt--;
		for(int i=hang-1; i>d; i--)	a[i][d] = gt--;
		d++; hang--; cot--;
	}
}

void ketqua () {
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main () {
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		printf("Test %d:\n", i);
		matran();
		ketqua();
	}
	return 0;
}

