
#include<stdio.h>
void nhap(int n, int a[]){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void xuat(int n, int a[]){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
int main () {
	int n, k, a[100000];
	scanf("%d", &n);
	nhap(n, a);
	scanf("%d", &k);
	if(k==0 || k==n)	xuat(n, a);
	else {
		for(int i=k; i<n; i++){
			printf("%d ", a[i]);
		}
		for(int i=0; i<k; i++){
			printf("%d ", a[i]);
		}
	}
    return 0;
}

