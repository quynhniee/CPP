
#include<stdio.h>
int ucln(int a1, int b1){
	int a=a1, b=b1;
	while(a != b){
		if(a>b)	a -= b;
		else b -= a;
	}
	return a;
}
int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=a; i<b; i++){
		for(int j = i+1; j<=b; j++){
			if(ucln(i,j) == 1)	printf("(%d,%d)\n", i, j);
		}
	}
    return 0;
}

