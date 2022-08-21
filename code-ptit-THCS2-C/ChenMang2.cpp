
#include<stdio.h>
void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void chen(int a[], int b[], int n, int m, int p){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
		if(i==p-1){
			for(int j=0; j<m; j++){
				printf("%d ", b[j]);
			}
		}
	}
}
int main () {
	int t, n, m, p;
	scanf("%d", &t);
	int a[1000], b[1000];
	for(int i=1; i<=t; ++i){
		scanf("%d%d%d", &n, &m, &p);
		nhap(a, n);
		nhap(b, m);
		printf("Test %d:\n", i);
		chen(a, b, n, m, p);
		printf("\n");
	}
    return 0;
}

