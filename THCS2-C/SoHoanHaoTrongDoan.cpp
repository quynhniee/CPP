
#include<stdio.h>
#include<math.h>
void tonguoc(int n){
	int sum = 0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i ==0)		sum += i + n/i;
	}
	if((float)sqrt(n)==(long)sqrt(n)){
		if(sum-sqrt(n)-n==n)	printf("%d ", n);
	}
	else 	
		if(sum-n==n)	printf("%d ", n);
}
int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	if(a<=b){
		for(int i=a; i<=b; i++){
			tonguoc(i);
		}
	}
	else{
		for(int i=b; i<=a; i++){
			tonguoc(i);
		}
	}
    return 0;
}

