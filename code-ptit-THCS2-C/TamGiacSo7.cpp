
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	// cach 1:
//	for(int i=1; i<=n; i++){
//		int m = n;
//		for(int j=i; j<=i+n*(i-1)-(i-1)*i/2; j+=m){
//			printf("%d ", j);
//			m--;
//			if(m==0)	break;
//		}
//		printf("\n");
//	}

	// cach 2:
	for(int i=1; i<=n; i++){
		int m = n, k=i;
		for(int j=1; j<=i; j++){
			printf("%d ", k);
			k += m-1;
			m--;
		}
		printf("\n");
	}
    return 0;
}

