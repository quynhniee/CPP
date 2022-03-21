
#include<stdio.h>
void sapxep(int n, int a[]){
	int temp = a[0];
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void xuat(int n, int a[]){
	for(int i=0; i<n; i++){
		if(a[i]%2==0)	printf("%d ", a[i]);
	}
	for(int i=0; i<n; i++){
		if(a[i]%2!=0)	printf("%d ", a[i]);
	}
}
int main () {
	int n, a[1000];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sapxep(n, a);
	xuat(n, a);
    return 0;
}

