
#include<stdio.h>

void phantich(long n){
	long count = 0;
	for(long i=2; i<=n; i++){
		while(n%i == 0){
			count++;
			n /= i;
		}
	if(count != 0)	printf(" %ld(%ld)", i, count);
	count = 0;
	}
}
int main () {
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; ++i){
		long n;
		scanf("%ld", &n);
		printf("Test %d:", i);
		phantich(n);
		printf("\n");
	}
    return 0;
}

