#include<stdio.h>
int kt (int n) {
	int m = 0, sum = 0, n0 = n;
	while (n != 0) {
		if ((n%10) == 4)	return 0;
		sum += n%10;
		m = m*10 + n%10;
		n /= 10;
	}
	if (sum % 10 == 0 && m == n0)	return 1;
	return 0;
}

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int min = 1;
		for (int i=0; i<n-1; i++){
			min *= 10;
		}
		for (int i=min; i<min*10; i++){
			if(kt(i))	printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}

