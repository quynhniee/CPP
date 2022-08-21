#include<stdio.h>
#include<string.h>

int main () {
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	int k = 0;
	for(int i=0; i<strlen(s1); i++){
		for(int j=0; j<strlen(s2); j++){
			if(s1[i] == s2[0] && s1[i+1] == s2[1] && s1[i+j] == s2[j]){
				if((s1[i+strlen(s2)] == ' ' || i+strlen(s2) == strlen(s1)) 
				&& (s1[i-1] == ' ' || i == 0))	k++;
			}
		}
		if(k == strlen(s2)) {
			i += k;
			printf("%c", s1[i]);
			k = 0;
		}
		else{
			printf("%c", s1[i]);
		}	
	}
	return 0;
}

