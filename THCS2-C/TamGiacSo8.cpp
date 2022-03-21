
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int m = 0;
	for(int i=1; i<=n; i++){
		m += i;
		for(int j=1; j<=i; j++){
			if(i%2==1)	printf("%d ", m+j-i);
			else	printf("%d ", m-j+1);
		}
		printf("\n");
	}
    return 0;
}

