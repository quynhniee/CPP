#include<stdio.h>
#include<math.h>

int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		float a, b, c, d;
		scanf("%f%f%f%f", &a, &b, &c, &d);
		printf("%.4f\n", sqrt((a-c)*(a-c) + (b-d)*(b-d)));
	}
	return 0;
}

