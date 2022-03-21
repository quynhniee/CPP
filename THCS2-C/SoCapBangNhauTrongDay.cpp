
#include<stdio.h>
void nhap(int n, int a[]){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
int main () {
	int t, n, a[100];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		nhap(n, a);
		int count = 0;
		for(int i=0; i<n; i++){
			if(a[i] == a[i+1])	count++;
		}
		printf("%d\n", count);
	}
    return 0;
}

