#include<stdio.h>
#include<string.h>

int main () {
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    int k = 0;
    for(int i=0; i<strlen(s1); i++){
        if(s1[i] == s2[0]){
            for(int j=0; j<strlen(s2); j++){
                if(s1[i+j] == s2[j])    k++;
            }
        }
    }
    if(k == strlen(s2)) {
        for(int i=0; i<strlen(s1); i++){
            if(s1[i] == s2[0])  i += k;
            printf("%c", s1[i]);
        }
    }
}