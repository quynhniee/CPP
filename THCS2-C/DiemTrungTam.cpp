#include<stdio.h>

int main () {
	int n, a[100000], b[100000]={0};
	scanf ("%d", &n);
	int k = 0;
	for (int i=1; i<= 2*n-2; i++) {
		scanf ("%d", &a[i]);
		b[a[i]]++;
		if (b[a[i]] == n-1)	k = 1;
	}
	if (k==1)	printf ("Yes\n");
	else	printf ("No\n");
	return 0;
}

