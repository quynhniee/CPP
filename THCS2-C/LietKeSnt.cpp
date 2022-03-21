#include<math.h>
#include<stdio.h>
int snt(int n){
	if (n<2)	return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i ==0)	return 0;
	}
	return 1;
}
int main () {
	int n;
	int a[100000];
	scanf("%d", &n);
	int count = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(snt(a[i])==1)	count++;
	}
	printf("%d ", count);
	for(int i=0; i<n; i++){
		if(snt(a[i])==1){
			printf("%d ", a[i]);
		}
	}
    return 0;
}

