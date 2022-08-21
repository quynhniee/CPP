
#include<stdio.h>
void kq(long a, long b){
	long ucln, bcnn;
	long a1=a, b1=b;
	while(a != b){
		if(a>b)	a -= b;
		else	b -= a;
	}
	ucln = a;			
	bcnn = a1*b1/ucln;
	printf("%ld %ld\n", bcnn, ucln);
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long a, b;
		scanf("%ld%ld", &a, &b);
		kq(a, b);
	}
    return 0;
}

