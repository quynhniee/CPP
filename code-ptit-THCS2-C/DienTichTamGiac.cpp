#include<stdio.h>
#include<math.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		double a[10];
		for (int i=0; i<6; i++) {
			scanf ("%lf", &a[i]);
		}
		double ab = sqrt ((a[0]-a[2])*(a[0]-a[2]) + (a[1]-a[3])*(a[1]-a[3]));
		double bc = sqrt ((a[2]-a[4])*(a[2]-a[4]) + (a[3]-a[5])*(a[3]-a[5]));
		double ca = sqrt ((a[4]-a[0])*(a[4]-a[0]) + (a[5]-a[1])*(a[5]-a[1]));
		if (ab < bc+ca && bc < ab+ca && ca < ab+bc) {
			double p = (ab+bc+ca)/2;
			double s = sqrt(p * (p-ab) * (p-bc) * (p-ca));
			printf ("%.2lf\n", s);
		}	
		else	printf("INVALID\n");
	}
	return 0;
}

