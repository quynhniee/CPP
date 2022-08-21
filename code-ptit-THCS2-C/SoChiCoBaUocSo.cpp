#include<stdio.h>
#include<math.h>

long long s[1000000]={0};
void snt (long long n) {
	s[0] = 1, s[1] = 1;
	for (long long i=2; i<=n; i++){
		if (s[i] == 0) {
			for (long long j=i*i; j<=n; j=i+j) {
				s[j] = 1;
			}
		}
	}
}

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		long long a, b, count = 0;
		scanf ("%lld%lld", &a, &b);
		snt (sqrt(b));
		for (long long i=sqrt(a); i<=sqrt(b); i++){
			if (s[i]==0 )	count++;
		}
		printf("%lld\n", count);
	}
	return 0;
}

