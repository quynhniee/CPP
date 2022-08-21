#include<stdio.h>
int snt (int n) {
	if (n<2)	return 0;
	if (n==2)	return 1;
	for (int i=2; i<n; i++){
		if(n%i==0)	return 0;
	}
	return 1;
}
int cs (int n) {
	int m = n;
	while (m != 0) {
		if (snt(m%10) != 1)	return 0;
		m /= 10;
	}
	return 1;
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int a, b, count = 0;
		scanf("%d%d", &a, &b);
		for(int i=a; i<=b; i++){
			if (cs(i) == 1 && snt(i) == 1)	count++;
		}
		printf("%d\n", count);
	}
	return 0;
}

