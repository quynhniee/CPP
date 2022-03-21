#include<stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		long n, a[100000];
		scanf ("%ld", &n);
		for (int i=0; i<n; i++) {
			scanf ("%ld", &a[i]);
			a[i] = a[i]*a[i];
		}
		for (int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				if (a[i] > a[j]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		long x=0, y=n-2, z=n-1;
		while (y!=0 && a[x]+a[y] != a[z]) {
			if (a[x]+a[y] < a[z])	x++;
			else if (a[x]+a[y] > a[z])	y--;
			if (x == y)	{
				z--;
				y = z-1;
				x = 0;
			}
		}
		if (y == 0)	printf ("NO\n");
		else	printf ("YES\n");
	}
	return 0;
}

