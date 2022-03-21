
#include<stdio.h>
void ucln(int a, int b){
	while(a != b){
		if(a>=b)	a -= b;
		else	b -= a;	
	}
	printf("%d\n", a);
}
int main () {
	int t, a, b;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &a, &b);
		ucln(a, b);
	}
    return 0;
}

