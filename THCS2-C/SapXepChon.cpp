#include<stdio.h>

void kq (int a[], int n) {
	for (int i=0; i<n; i++){
		printf(" %d", a[i]);
	}
}
int main () {
	int n, a[10000];
	scanf ("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int m = 1;
	for (int i=0; i<n-1; i++){
		int amin = 10000, min = 0;
		for (int j=i; j<n; j++){
			if(amin > a[j]) {
				amin = a[j];
				min = j;
			}
		}
//		if (i != min)	{
			int k = a[i];
			a[i] = a[min];
			a[min] = k;
			printf("Buoc %d:", m++);
			kq (a, n);
			printf("\n");
//		}
	}
	return 0;
}

