#include<stdio.h>

int main () {
	int n;
	scanf("%dn", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i>=j){
			    if(j==0||i==j||i==n-1)  printf("*");
			    else    printf(".");
			}
		}
		printf("\n");
	}
}
