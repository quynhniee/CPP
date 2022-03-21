
#include<stdio.h>
int fibonacci(long n){
	long a0=0, a1=1, a=0;
	while(n>=a1+a0){
		a = a1 + a0;
		a0 = a1;
		a1 = a;
	}
//	if(n==0||n==1||n==2)	return 1;
	if(a==n)	return 1;
	else return 0;
}
int main () {
	long n;
	scanf("%ld", &n);
	printf("%d", fibonacci(n));
    return 0;
}

