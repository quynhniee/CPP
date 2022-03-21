#include<math.h>
#include<stdio.h>

int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	if(a<=b){
		for(int i=0; i<a; i++){
			for(int j=0; j<b-a+i+1; j++){
				printf("%c", 'A'+j+a-i-1);
			}
			for(int j=b-a+i+1; j<b; j++){
				printf("%c", 'A'+b-1);
			}
			printf("\n");	
		}
	}
	else{
		for(int i=0; i<a-b; i++){
			for(int j=0; j<b; j++){
				printf("%c", 'A'+b-1);
			}
			printf("\n");
		}
		for(int i=0; i<b; i++){
			for(int j=0; j<b; j++){
				if(j>=i)	printf("%c", 'A'+b-1);
				else	printf("%c", 'A'+j+b-i-1);
			}
			printf("\n");
		}
	}
    return 0;
}

