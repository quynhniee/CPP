#include<string.h>
#include<stdio.h>

int ktra(long long n){
	long long m = n, k = 0, sum = 0, m1 = n, n1 = 0;
	while(m1 != 0){
		n1 = n1*10 + m1%10;
		m1 /= 10;
	}
	while(m != 0){
		if(m%10 == 6)	k++;
		sum += m%10;
		m /= 10;
	}
	if(k != 0 && sum%10 == 8 && n1 == n)	return 1;
	else	return 0;
}

int main () {
	long long a, b;
	int count = 0;
	scanf("%lld%lld", &a, &b);
	if(a<=b)
		for(long long i=a; i<=b; i++){
			if(ktra(i) == 1)	printf("%lld ", i);
		}
	else
		for(long long i=b; i<=a; i++){
			if(ktra(i) == 1)	printf("%lld ", i);
		}
//	printf("%d", count);
    return 0;
}

