#include<stdio.h>

int a[100][100], n, d, gt, hang, cot;

int fibo () {
	int i = 3;
	int b0 = 0, b1 = 1, b2 = 1, b=b1+b2;
	while (i < gt) {
		b = b1 + b2;
		b1 = b2;
		b2 = b;
		++i;
	}
// Xet (gt-1) vi ta cho gt++ truoc khi gan gia tri
	if(gt-1==0)	return 0;
	if(gt-1==1 || gt-1==2)	return 1;
	return b;
}
void matran () {
	d = 0, gt = 0, hang = n-1, cot = n-1;
	while (d <= n/2){
		for(int i=d; i<=cot; i++){
			gt++;
			a[d][i] = fibo();
		}
		for(int i=d+1; i<=hang; i++){
			gt++;
			a[i][cot] = fibo();
		}
		for(int i=cot-1; i>=d; i--){
			gt++;
			a[hang][i] = fibo();
		}
		for(int i=hang-1; i>d; i--){
			gt++;
			a[i][d] = fibo();
		}
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
	scanf("%d", &n);
	matran();
	ketqua();
	return 0;
}

