
#include<stdio.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100000], b[100000]={0}, max = 0;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
			if(max<b[a[i]])	max = b[a[i]];
		}
		for(int i=0; i<n; i++){
			if(max==b[a[i]]){
				printf("%d ", a[i]);
				b[a[i]] = 0;
			}	
		}
		printf("\n");
	}
    return 0;
}

