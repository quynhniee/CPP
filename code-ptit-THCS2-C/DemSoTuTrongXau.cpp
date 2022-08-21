#include<string.h>
#include<stdio.h>

int main () {
	int t;
	char x;
	scanf("%d%c", &t, &x);
	while(t--){
//		fflush(stdin);
		char s[1000];
		fgets(s, sizeof(s), stdin);
		int count = 0, dem = 0;
		if(s[0] != ' ')	count = 1;
		for(int i=0; i<strlen(s)-2; i++){
			if(s[i] == ' ' && s[i+1] != ' ')	count++;
			
		}
		printf("%d\n", count);
	}
    return 0;
}

