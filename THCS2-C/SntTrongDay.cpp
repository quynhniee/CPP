#include<math.h>
#include<stdio.h>
int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); ++i){
		if(n%i==0)	return 0;
	}
	return 1;
}
int main () {
	int t, n, a[1000];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i=0; i<n; ++i){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; ++i){
			if(snt(a[i])==1)	printf("%d ", a[i]);
		}
		printf("\n");
	}
    return 0;
}

