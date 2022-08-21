
#include<stdio.h>

void nhap(int n, int a[]){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void tang(int n, int a[]){
	int temp = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void giam(int n, int b[]){
	int temp = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(b[i] < b[j]){
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
}
int main () {
	int t;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		int n, a[100], b[100];
		scanf("%d", &n);
		nhap(n, a);
		nhap(n, b);
		tang(n, a);
		giam(n, b);
		printf("Test %d:\n", k);
		for(int i=0; i<n; i++){
			printf("%d ", a[i]);
			printf("%d ", b[i]);
		}	
		printf("\n");
	}
    return 0;
}

