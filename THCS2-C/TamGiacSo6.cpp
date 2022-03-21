
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=n-1; j>i; j--){
			printf("~");
		}
		for(int j=2; j<= 2*i+2; j+=2){
			printf("%d", j);
		}
		for(int j=2*i; j>=2; j-=2){
			printf("%d", j);
		}
		printf("\n");
	}
    return 0;
}

