#include<stdio.h>

int s[10000]={0};
void snt (int n) {
	s[0] = 1, s[1] = 1;
	for (int i=2; i<=n; i++){
		if (s[i] == 0) {
			for (int j=i*i; j<=n; j=i+j) {
				s[j] = 1;
			}
		}
	}
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf ("%d", &n);
		snt(n);
		for (int i=2; i<=n/2; i++) {
			if (s[i] == 0 && s[n-i] == 0)	printf("%d %d ", i, n-i);
		}
		printf("\n");
	}
	return 0;
}

