#include<math.h>
#include<stdio.h>
int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)	return 0;
	}
	return 1;
}
int tongcs(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int fibonacci(int n){
	int a0=0, a1=1, a=0;
	while(n>=a1+a0){
		a = a1 + a0;
		a0 = a1;
		a1 = a;
	}
	if(n==a)	return 1;
	else	return 0;
}
int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>=b){
		for(int i=b; i<=a; i++){
			if(snt(i)==1 && fibonacci(tongcs(i))==1)	printf("%d ", i);
		}
	}
	else{
		for(int i=a; i<=b; i++){
			if(snt(i)==1 && fibonacci(tongcs(i))==1)	printf("%d ", i);
		}
	}
    return 0;
}

