
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
			if(i==a-1)	printf("%d ", s[b-1][j]);
			else if (i==b-1)	printf("%d ", s[a-1][j]);
			else	printf("%d ", s[i][j]);
		}
		printf("\n");
	}
    return 0;
}

