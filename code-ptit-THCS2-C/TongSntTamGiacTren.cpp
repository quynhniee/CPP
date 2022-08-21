#include<math.h>
#include<stdio.h>
int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)	return 0;
	}
	return 1;
}
void ktra(int n, int a[]){
	int sum = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i]);
			if(i<=j && snt(a[i])==1)	sum += a[i];
		}
	}
	printf("%d", sum);
}
int main () {
	int n, a[1000];
	scanf("%d", &n);
	ktra(n, a);
    return 0;
}

