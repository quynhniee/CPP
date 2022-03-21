#include<string.h>
#include<stdio.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100];
		scanf("%s", &a);
		int count = 0;
		for(int i=0; i<strlen(a)-1; i++){
			if(a[i]-a[i+1] > 0)		count++;
		}
//		printf("%d", count);
		if(count==0)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}

