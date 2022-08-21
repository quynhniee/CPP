#include<math.h>
#include<stdio.h>

long a[2000005]={0}, b[2000005]={0};

void snt (){
	a[0] = 0;
	a[1] = 0;
	for(int i = 0; i<=2000005; i++){
		a[i] = 1;
	}
	for(int i=2; i<=2000005; i++){
		if(a[i]==1){
			for(int j=i; j<=2000005; j+=i){
				long k = j;
				while(k%i==0){
					k /= i;
					b[j] += i;
					a[j] = 0;
				}
			}
		}
	}
}
int main () {
	snt();
	int t;
	scanf("%d", &t);
	long sum = 0;
	while(t--) {
		long n;
		scanf("%ld", &n);
		sum += b[n];
	}
	printf("%ld", sum);
    return 0;
}

