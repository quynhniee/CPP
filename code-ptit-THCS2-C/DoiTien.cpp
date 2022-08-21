
#include<stdio.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, dem = 0;
		scanf("%d", &n);
		while(n>=1000){
			dem++;
			n -= 1000;
		}
		while(n<1000 && n>=500){
			dem++;
			n -= 500;
		}
		while(n<500 && n>=200){
			dem++;
			n -= 200;
		}
		while(n<200 && n>=100){
			dem++;
			n -= 100;
		}
		while(n<100 && n>=50){
			dem++;
			n -= 50;
		}
		while(n<500 && n>=20){
			dem++;
			n -= 20;
		}
		while(n<20 && n>=10){
			dem++;
			n -= 10;
		}
		while(n<10 && n>=5){
			dem++;
			n -= 5;
		}
		while(n<5 && n>=2){
			dem++;
			n -= 2;
		}
		while(n<2 && n>=1){
			dem++;
			n -= 1;
		}
		printf("%d\n", dem);
	}
    return 0;
}

