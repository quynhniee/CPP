#include<stdio.h>

int kt (int m) {
	int chan = 0, le = 0, n = m;
	while (n != 0) {
		int a = n%10;
		if (a%2 == 0)	chan++;
		else	le++;
		n /= 10;
	}
	if (chan == le)	return 1;
	else	return 0;
}

int main () {
	int n, min=1, k = 0;
	scanf("%d", &n);
	for (int i=0; i<n-1; i++){
		min *= 10;
	}
	for (int i=min; i<min*10; i++){
		if(kt(i)){
			printf("%d ", i);
			k++;
		}	
		if (k%10 == 0)	printf("\n");
	}
	return 0;
}

