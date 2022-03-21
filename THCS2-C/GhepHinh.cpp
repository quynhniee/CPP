#include<math.h>
#include<stdio.h>

int main () {
	int a[100], max = 0, x=0, y=0, b[100]={0};
	for(int i=0; i<6; i++){
		scanf("%d", &a[i]);
		if(max<a[i])	max = a[i];
		b[a[i]]++;
		if(b[a[i]]>=3)	y=1;
		if(a[i]!=max && b[a[i]]>=2)	x=1;
	}
	int s = a[0]*a[1] + a[2]*a[3] + a[4]*a[5];
	if(max*max == s && y!=0)	printf("YES");
	else if(max*max == s && x!=0)	printf("YES");
	else	printf("NO");
    return 0;
}


