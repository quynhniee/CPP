#include<stdio.h>
int main () {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if(b==0)	printf("0");
    else {
    	printf("%lld %lld %lld ", a+b, a-b, a*b);
	    float c = (float)a/b;
	    printf("%.2f %lld", c, a%b);
	}
}
