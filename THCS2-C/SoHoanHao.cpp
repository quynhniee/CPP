#include<stdio.h>
#include<math.h>
int tonguoc(int n){
	int sum = 0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i ==0)		sum += i + n/i;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d", &n);
	if(n == tonguoc(n)-n)	printf("1");
	else printf("0");
}
