
#include<stdio.h>

int giaithua(int n){
	if(n==0)	return 1;
	return n * giaithua(n-1);
}
int giatri(int i, int j){
	return giaithua(i) / (giaithua(j) * giaithua(i-j));
}
void tamgiac(int n){
	for(int i=0; i<n; i++){
//		for(int j=0; j<=n-i; j++)	printf(" ");
		for(int j=0; j<=i; j++){
			printf("%d ", giatri(i, j));
		}
		printf("\n");
	}
}
int main () {
	int n;
	scanf("%d", &n);
	tamgiac(n);
    return 0;
}

