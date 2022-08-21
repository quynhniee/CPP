
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int m = n, k = i;
		for(int j=0; j<=i; j++){
			printf("%c ", 'A'+k);
			k += m-1;
			m--;
		}
		printf("\n");
	}
    return 0;
}

