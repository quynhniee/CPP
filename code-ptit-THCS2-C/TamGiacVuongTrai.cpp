#include<stdio.h>

int main () {
	int n;
	scanf("%dn", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i>=j)	printf("*");
		}
		printf("\n");
	}
}
