#include<stdio.h>
#include<string.h>

int ktra(char a[]) {
	for (int i=0; i<=strlen(a)/2; i++){
		if(a[i] != a[strlen(a)-1-i])	return 0;
		if((a[i]-'0')%2 == 0)	return 0;
	}
	return 1;
}
int tong(char a[]) {
	int sum = 0;
	for (int i=0; i<strlen(a); i++){
		sum += a[i]-'0';
	}
	if(sum % 2 == 0)	return 0;
	return 1;
}
int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		char a[1000];
		scanf("%s", &a);
		if(ktra(a) == 1 && tong(a) == 1)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}

