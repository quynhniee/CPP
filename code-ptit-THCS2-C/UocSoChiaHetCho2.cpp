#include<math.h>
#include<stdio.h>

void kt(long long n){
	int count = 0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			if(i%2==0)	count++;
			if((n/i)%2 == 0)	count++;
			if(i%2 == 0 && i*i==n)	count--;
		}
	}
	printf("%d\n", count);
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		kt(n);
	}
    return 0;
}

