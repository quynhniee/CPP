#include<string.h>
#include<stdio.h>

int main () {
	char s[1000], max = 0, k;
	gets(s);
	for(int i=0; i<strlen(s); i++){
		if(s[i]>='A' && s[i]<='Z')	s[i] += 32;
	}
	if(s[0]!=' ')
		printf("%c", s[0]);
	else{
		for(int i=0; i<strlen(s); i++){
			if(s[i] != ' '){
				printf("%c", s[i]);
				k = i;
				break;
			}
		}
	}
	for(int i=0; i<strlen(s); i++){
		if(s[i-1]==' ' && s[i] != ' ' && i != k){
			printf("%c", s[i]);
			max = i;
		}	
	}
	for(int i=max+1; i<strlen(s); i++){
		printf("%c", s[i]);
	}
	printf("@ptit.edu.vn");
    return 0;
}

