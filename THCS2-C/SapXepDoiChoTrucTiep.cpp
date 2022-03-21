#include<stdio.h>

int main () {
		int n, a[1000];
		scanf("%d", &n);
		for (int i=0; i<n; i++){
			scanf ("%d", &a[i]);
		}
		for (int i=0; i<n-1; i++) {
			printf("Buoc %d: ", i+1);
			for (int j = i+1; j<n; j++){
				if (a[i] > a[j]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			for( int j = 0; j<n; j++){
				printf("%d ", a[j]);
			}
			printf("\n");
		}

	return 0;
}

