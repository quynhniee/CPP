
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int k = '@';
		for(int j=0; j<=i; j++){
			printf("%c", k+2*j);
		}
		for(int j=i-1; j>=0; j--){
			printf("%c", k+2*j);
		}
		printf("\n");
	}
    return 0;
}

