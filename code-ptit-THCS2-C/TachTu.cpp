#include<string.h>
#include<stdio.h>

int main () {
	char s[1000];
	gets(s);
	for(int i=0; i<strlen(s); i++){
		if(s[i] == ' '){
			s[i] = '\n';
		}
	}
	puts(s);	
    return 0;
}

