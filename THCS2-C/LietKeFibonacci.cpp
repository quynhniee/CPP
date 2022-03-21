
#include<stdio.h>
void fibonacci(int n){
	int a0=0, a1=1, a=0, i=2; // i=2 vi co a= =0 va a1=1
	printf("0 1 ");
	while(n>i){
		a = a1 + a0;
		a0 = a1;
		a1 = a;
		i++;
		printf("%d ", a);
	}
//	if(n==0||n==1||n==2)	return 1;
}
int main () {
	int n;
	scanf("%d", &n);
	fibonacci(n);
    return 0;
}

