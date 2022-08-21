#include<stdio.h>
int tonggiaithua(int n){
	int tich , tong = 0;
	while (n!=0){
		tich = 1;
		int a = n%10;
		for(int i=1; i<=a; i++){
			tich *= i;
		}
		tong += tich;
		n /=10;
	}
	return tong;
}
int main () {
	int n;
	scanf("%d", &n);
	int m = n;
//	printf("%d", tonggiaithua(n));
	if(m == tonggiaithua(n))	printf("1");
	else	printf("0");
}
