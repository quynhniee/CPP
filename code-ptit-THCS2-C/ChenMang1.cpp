
#include<stdio.h>

void nhap(int n, int a[]){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
int main () {
	int a, b, k;
	scanf("%d%d", &a, &b);
	int A[100000], B[100000];
	nhap(a, A);
	nhap(b, B);
	scanf("%d", &k);
	for(int i=0; i<a; i++){
		if(k==0 && i==0){
			for(int j=0; j<b; j++){
				printf("%d ", B[j]);
			}
		}
		printf("%d ", A[i]);
		if( i == k-1){
			for(int j=0; j<b; j++){
				printf("%d ", B[j]);
			}
		}
	}
    return 0;
}



//	for(int i=0; i<a; i++){
//		scanf("%d", &A[i]);
//	}
//	for(int i=0; i<b; i++){
//		scanf("%d", &B[i]);
//	}
