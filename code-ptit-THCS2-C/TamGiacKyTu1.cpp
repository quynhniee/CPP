
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int k = 0;
	for(int i=1; i<=n; i++){
		k += i;
		for(int j=1; j<=i; j++){
			if(i%2==1)
		 		printf("%c ", 'a'+k-i+j-1);
		 	else
		 		printf("%c ", 'a'+k-j);
		}
		printf("\n");
	}
    return 0;
}

