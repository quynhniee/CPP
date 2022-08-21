#include<string.h>
#include<stdio.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[1000];
		scanf("%s", &s);
		int count = 0, sum = 0;
		for(int i=0; i<strlen(s); i++){
			if(s[i] != s[strlen(s)-1-i])	count++;
			sum += s[i]-'0';
		}
		if(count == 0 && s[0] == '8' && s[strlen(s)-1] == '8' && sum%10 == 0)
			printf("YES\n");
		else	printf("NO\n");
	}

    return 0;
}

