#include<stdio.h>
#include<math.h>
int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n, count = 0;
		scanf("%lld", &n);
		for (int i=1; i<=sqrt(n); i++){
			if(n%i == 0 ){
				if(i%2 == 0) count++;
				if((n/i)%2 == 0) count++;
			}	
		}
		long long x = sqrt(n);
		if(x*x == n && x%2 == 0)	count--;
		printf("%lld\n", count);
	}
	return 0;
}

