
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i+j<n)
			printf("%c", 'A'+2*i+j*2);
		}
		printf("\n");
	}
    return 0;
}

