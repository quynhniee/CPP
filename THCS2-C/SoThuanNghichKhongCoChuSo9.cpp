
#include<stdio.h>
int stn(int n){
	int m = n;
	int stn = 0;
	while(m!=0){
		stn = stn*10 + m%10;
		m /= 10;
	}
	if(stn==n)	return 1;
	return 0;
}
int ktra(int n){
	int dem = 0, m=n;
	while(m!=0){
		if(m%10 == 9)	dem++;
		m /= 10;
	}
	if(dem==0)	return 1;
	return 0;
}
int main () {
	int n;
	scanf("%d", &n);
	int count = 0;
	for(int i=2; i<=n; i++){
		if(stn(i)==1 && ktra(i)==1)	{
			printf("%d ", i);
			count++;
		}
	}
  	printf("\n%d", count);
  return 0;
}

