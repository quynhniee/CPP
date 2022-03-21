
#include<stdio.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long a[100000];
		for(int i=0; i<n; i++){
			scanf("%ld", &a[i]);
		}
		int dem = 0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[i]==a[j]){
					dem++;
					printf("%ld\n", a[i]);
				}
			}
			if(dem!=0)	break;
		}
		if(dem==0){
			printf("NO\n");	
		}
	}
    return 0;
}

