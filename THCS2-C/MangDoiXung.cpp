#include<string.h>
#include<stdio.h>

int main () {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		long a[100000];
		for(int i=0; i<n; ++i){
			scanf("%ld", &a[i]);
		}
		int temp=0;
		for(int i=0; i<n/2; ++i){
			if(a[i] != a[n-1-i])	temp++;
		}
		if(temp==0)	printf("YES\n");
		else	printf("NO\n");
	}
    return 0;
}

