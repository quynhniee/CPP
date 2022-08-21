
#include<stdio.h>

void fibonacci(int n){
	int i=3;
	long long a2 = 1, a1 = 1, a = a2+a1;
	while(i <= n){
		a = a2 + a1;
		a1 = a2;
		a2 = a;
		++i;
	}
	if(n==1 || n==2)	printf("1");
	else	printf("%lld", a);	
}
int main () {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		fibonacci(n);
		printf("\n");
	}
    return 0;
}

