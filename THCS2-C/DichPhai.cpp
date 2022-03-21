
#include<stdio.h>

int main () {
	int n, a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int t;
	scanf("%d", &t);
	for(int i=n-t; i<n; i++){
		printf("%d ", a[i]);
	}
	for(int i=0; i<n-t; i++){
		printf("%d ", a[i]);
	}
    return 0;
}

