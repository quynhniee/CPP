#include<stdio.h>
#include<math.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		float a[10];
		for (int i=0; i<6; i++) {
			scanf ("%f", &a[i]);
		}
		float ab = sqrt ((a[0]-a[2])*(a[0]-a[2]) + (a[1]-a[3])*(a[1]-a[3]));
		float bc = sqrt ((a[2]-a[4])*(a[2]-a[4]) + (a[3]-a[5])*(a[3]-a[5]));
		float ca = sqrt ((a[4]-a[0])*(a[4]-a[0]) + (a[5]-a[1])*(a[5]-a[1]));
		if (ab == 0 || bc == 0 || ca == 0)	printf("INVALID\n");
		else if (ab >= bc+ca || bc >= ab+ca || ca >= ab+bc)	printf("INVALID\n");
		else 	printf ("%.3f\n", ab+bc+ca);
	}
	return 0;
}

