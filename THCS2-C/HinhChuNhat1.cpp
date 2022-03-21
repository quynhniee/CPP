
#include<stdio.h>

int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=1; i<=a; i++){
		printf("%d", i);
		for(int j=1; j<=b; j++){
			if(j>i)	printf("%d", j);
		}
		for(int j=b; j>=1; j--){
			if(j<i && j<b)	printf("%d", j);
		}
		printf("\n");
	}
    return 0;
}

