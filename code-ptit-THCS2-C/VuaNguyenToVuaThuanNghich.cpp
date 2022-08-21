#include<math.h>
#include<stdio.h>
int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); ++i){
		if(n%i == 0)	return 0;
	}
	return 1;
}
int stn(int n){
	int m = n, sum = 0;
	while(m != 0){
		sum = sum*10 + m%10;
		m /= 10;
	}
	if(sum==n)	return 1;
	else return 0;
}
int main () {
	int t, a, b;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &a, &b);
		int temp=0;
		for(int i=a; i<=b; ++i){
			if(snt(i)==1 && stn(i)==1){
				printf("%d ", i);
				temp++;
				if(temp%10 == 0)	printf("\n");
			}	
		}
		printf("\n");
	}
    return 0;
}

