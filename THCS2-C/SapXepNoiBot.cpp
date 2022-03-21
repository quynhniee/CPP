#include<stdio.h>

int main () {
	int n, a[1000], k;
	scanf ("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-1; j++){
			if (a[j]>a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				k++;
			}
		}
		if (k==0)	break;
		k = 0;
		printf("Buoc %d:", i+1);
		for (int j = 0; j<n; j++){
			printf(" %d", a[j]);
		}
		printf("\n");
	}
	return 0;
}

