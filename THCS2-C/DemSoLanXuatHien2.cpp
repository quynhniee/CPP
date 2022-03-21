
#include<stdio.h>

void nhap(int n, int a[]){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int main () {
	int t, n;
	scanf("%d", &t);
	for(int i=1; i<=t; ++i){
		scanf("%d", &n);
		int a[100000], b[100000]={0};
		nhap(n, a);
		for(int j=0; j<n; j++){
			b[a[j]]++;
		}
		printf("Test %d:\n", i);
		for(int j=0; j<n; ++j){
			if(b[a[j]] > 0){
				printf("%d xuat hien %d lan\n", a[j], b[a[j]]);
				b[a[j]] = 0;
			}
		}
		printf("\n");
	}
    return 0;
}

