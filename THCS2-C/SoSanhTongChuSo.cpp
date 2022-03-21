
#include<stdio.h>
int tongcs(int n){
	int sum = 0, m = n;
	while(m>0){
		sum += m%10;
		m /= 10;
	}
	return sum;
}
int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d %d", (tongcs(a) <= tongcs(b)) ? a : b, (tongcs(a) <= tongcs(b)) ? b : a);
    return 0;
}

