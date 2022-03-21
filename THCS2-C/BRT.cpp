#include<stdio.h>
#include<math.h>
void swap (int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
void quicksort (int a[], int left, int right) {
	if (left <= right) {
		int k = a[(left+right)/2];
		int i=left;
		int j=right;
		while (i <= j) {
			while (a[i] < k)	i++;
			while (a[i] > k)	j--;
			if (i <= j) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
				i++;
				j--;
			}
		}
		if (left < right)	quicksort (a, left, j);
		if (right > left)	quicksort (a, i, right);
	}
}
void in (int a[], int n) {
	for (int i=0; i<n; i++) {
		printf ("%d ", a[i]);
	}
	printf ("\n");
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n, a[100000]={};
		scanf ("%d", &n);
		for (int i=0; i<n; i++) {
			scanf ("%d", &a[i]);
		}
		quicksort (a, 0, n-1);
		in (a, n);
//		printf ("%lld %lld\n", min, count);
	}
	return 0;
}

