
#include<stdio.h>

int main () {
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; ++i){
		int k = i+1;
		for(int j=1; j<=m; j++){
			if(i>=j){
				k--;
				printf("%d", k);
			}
			else if(i+j<=m+n){
				k++;
				printf("%d", k);
			}
		}
		printf("\n");
	}
    return 0;
}

