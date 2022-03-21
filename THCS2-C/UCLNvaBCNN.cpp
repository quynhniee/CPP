
#include<stdio.h>

int main () {
	long a, b;
	scanf("%ld%ld", &a, &b);
	long ucln, bcnn;
	long a1=a, b1=b;
	while(a != b){
		if(a>b)	a -= b;
		else	b -= a;
	}
	ucln = a;			
	printf("%ld\n", ucln);
	bcnn = a1*b1/ucln;
	printf("%ld", bcnn);

    return 0;
}

