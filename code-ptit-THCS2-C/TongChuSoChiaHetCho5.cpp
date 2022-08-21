#include<math.h>
#include<stdio.h>

int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); ++i){
		if(n%i==0)	return 0;
	}
	return 1;
}
int tongcs(int n){
	int m = n, sum = 0;
	while(m != 0){
		sum += m%10;
		m /= 10;
	}
	if(sum%5==0)	return 1;
	else return 0;
}
int main () {
	int n;
	scanf("%d", &n);
	int count = 0;
	for(int i=2; i<=n; i++){
		if(snt(i)==1 && tongcs(i)==1){
			count++;
			printf("%d ", i);
		}
	}
  		printf("\n%d", count);
  return 0;
}

