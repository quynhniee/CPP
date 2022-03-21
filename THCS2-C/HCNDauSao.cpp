
#include<stdio.h>

int main () {
	int rong, cao;
	scanf("%d%d", &rong, &cao);
	for(int i=0; i<rong; i++){
		printf("*");
	}
	printf("\n");
	for(int i=1; i<cao-1; i++){
		for(int j=0; j<rong; j++){
			if(j==0 )	printf("*");
			else if(j==rong-1)	printf("*");
			else printf(" ");
		}
			printf("\n");
	}
	for(int i=0; i<rong; i++){
		printf("*");
	}
    return 0;
}

