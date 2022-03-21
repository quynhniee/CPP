#include<stdio.h>
int main () {
    int t;
    scanf("%d", &t);

    while(t--){
	    char x, a;
		scanf("%c%c", &x, &a);
        if(a>='A' && a<='Z')    printf("%c\n", a+32);
        else if (a>='a' && a<='z')  printf("%c\n", a-32);
    }
}
