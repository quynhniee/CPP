
#include<stdio.h>

int main () {
	int t, n, a[100];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int count = 0;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=1; i<n; i++){
			int k = 0;
			for(int j=0; j<i; j++){
				if(a[i] < a[j]) {
					k++;
				}
			}
			if(k == 0){
				count++;
			}	
		}
		printf("%d\n", count+1);
	}
    return 0;
}

