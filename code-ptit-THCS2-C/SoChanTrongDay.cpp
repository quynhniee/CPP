
#include<stdio.h>

int main () {
	int t, n, a[1000];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i=0; i<n; ++i){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			if(a[i]%2 == 0)	printf("%d ", a[i]);
		}
		printf("\n");
	}
    return 0;
}

