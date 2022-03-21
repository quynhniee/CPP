
#include<stdio.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long n;
		scanf("%ld", &n);
		int chan = 0, le = 0;
		while (n!=0){
			if( (n%2) == 0)	chan++;
			else le++;
			n /= 10;
		}	
		printf("%d %d\n", le, chan);
	}
	
	
    return 0;
}

