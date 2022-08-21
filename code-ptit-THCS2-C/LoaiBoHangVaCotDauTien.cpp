
#include<stdio.h>

int main () {
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int n, m, a[100][100];
		scanf("%d%d", &n, &m);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", i);
		for(int i=1; i<n; i++){
			for(int j=1; j<m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}

