
#include<stdio.h>

int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=0; i<a; i++){
		for(char j=0; j<b; j++){
			if(a<=b){
				if(i>j)	printf("%c", 'a'-1+b-j);
				else	printf("%c", 'a'-1+b-i);
			}
			else{
				if(i>j)	printf("%c", 'a'-1+a-j);
				else	printf("%c", 'a'-1+a-i);
			}
		}
		printf("\n");
	}
    return 0;
}

