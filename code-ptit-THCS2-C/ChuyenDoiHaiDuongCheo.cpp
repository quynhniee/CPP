
#include<stdio.h>

int main () {
	int n, s[100][100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &s[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j)	printf("%d ", s[i][n-j-1]);
			else if(i==n-j-1)	printf("%d ", s[i][i]);
			else	printf("%d ", s[i][j]);
		}
		printf("\n");
	}
    return 0;
}

