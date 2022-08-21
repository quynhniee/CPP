
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int min = (i<j) ? i : j;
			printf("%d", n-min); 		
		}
		for(int j=n-2; j>=0; j--){
			int min = (i<j) ? i : j;
			printf("%d", n-min);
		}
		printf("\n");
	}
	for(int i=n-2; i>=0; i--){
		for(int j=0; j<n; j++){
			int min = (i<j) ? i : j;
			printf("%d", n-min); 		
		}
		for(int j=n-2; j>=0; j--){
			int min = (i<j) ? i : j;
			printf("%d", n-min);
		}
		printf("\n");
	}
    return 0;
}

