#include<math.h>
#include<stdio.h>

int snt(long long n){
	if(n<2)	return 0;
	for(long long i=2; i<=sqrt(n); i++){
		if(n%i==0)	return 0;
	}
	return 1;
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long max = 0;
		for(long long i=1; i<=sqrt(n); i++){
			if(n%i == 0 ){
				if(snt(n/i)==1 && max<n/i){
					max = n/i;
				}
				if(snt(i)==1 && max<i)	{
					max = i;
				}
			}
		}
		printf("%lld\n", max);
	}
    return 0;
}

