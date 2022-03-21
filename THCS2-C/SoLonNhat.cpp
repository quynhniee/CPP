
#include<stdio.h>

void max(int n, int a[], int b[]){
	int temp = a[0];
	for(int i=0; i<n; ++i){
		for(int j=i+1; j<n; ++j){
			if(a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	int max = a[0];
	printf("%d\n", max);
	for(int i=0; i<n; ++i){
		if(b[i] == max)	printf("%d ", i);
	}
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[1000], b[1000];
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		max(n, a, b);
		printf("\n");
	}
    return 0;
}

