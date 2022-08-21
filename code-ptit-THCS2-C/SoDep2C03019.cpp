
#include<stdio.h>
#include<math.h>

int ktra(long long n){
	long long m = n, n1=0, sum = 0;
	while(m != 0){
		n1 = n1*10 + m%10;
		sum += m%10;
		m /= 10;
	}
	if(n1 == n && sum%10 == 0)	return 1;
	else	return 0;
}
long long mu(int n){
	long long fac = 1;
	for(int i=0; i<n; i++){
		fac *= 10;
	}
	return fac;
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, dem=0;
		scanf("%d", &n);
		for(long long i=mu(n-1); i<mu(n); i++){
			if(ktra(i)==1)	dem++;
		}
		printf("%d\n", dem);
	}
    return 0;
}

