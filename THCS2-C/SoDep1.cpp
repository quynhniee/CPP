#include<string.h>
#include<stdio.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[1000];
		scanf("%s", &s);
		int count1 = 0, count2 = 0;
		for(int i=0; i<strlen(s); i++){
			if((s[i]-'0') % 2 != 0)	count1++;
			if(s[i] != s[strlen(s)-1-i])	count2++;
		}
		if(count1 == 0 && count2 == 0)	printf("YES\n");
		else	printf("NO\n");
	}
    return 0;
}

