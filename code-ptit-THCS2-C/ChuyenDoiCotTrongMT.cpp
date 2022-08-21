
#include<stdio.h>

int main () {
	int m, n, a, b, s[100][100];
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &s[i][j]);
		}
	}
	scanf("%d%d", &a, &b);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(j==a-1)	printf("%d ", s[i][b-1]);
			else if (j==b-1)	printf("%d ", s[i][a-1]);
			else	printf("%d ", s[i][j]);
		}
		printf("\n");
	}
    return 0;
}

