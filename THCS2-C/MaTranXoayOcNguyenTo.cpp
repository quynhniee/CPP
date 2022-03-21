#include<stdio.h>
#include<math.h>

int a[100][100], n, d, gt, hang, cot, b[100]={0};

int snt(int n){
	if(n<2)	return 0;
	if(n==2 || n==3)	return 1;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)	return 0;
	}
	return 1;
}
int kq () {
	int count = 0, i = 2;
	while (count < gt){
		if(snt(i)==1) {
			count++;
		}
		i++;
	}
	return i-1;
}

void matran () {
	d = 0, gt = 0, hang = n-1, cot = n-1;
	while(d <= n/2){
		for(int i=d; i<=cot; i++){
			gt++;
			a[d][i] = kq();
		}
		for(int i=d+1; i<=hang; i++){
			gt++;
			a[i][cot] = kq();
		}	
		for(int i=cot-1; i>=d; i--){
			gt++;
			a[hang][i] = kq();
		}	
		for(int i=hang-1; i>d; i--){
			gt++;
			a[i][d] = kq();
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

