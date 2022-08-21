#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct {
	char name[1000];
	int k, m;
	int count;
} list;
int main () {
	int n, sum = 0, max = 0, check;
	scanf ("%d", &n);
	list pokemon[100];
	for (int i=0; i<n; i++) {
		scanf (" ");
		gets (pokemon[i].name);
		scanf ("%d%d", &pokemon[i].k, &pokemon[i].m);
	}
	for (int i=n-1; i>=0; i--) {
		while (pokemon[i].m >= pokemon[i].k) {
			pokemon[i].m -= pokemon[i].k;
			pokemon[i].count++;
			pokemon[i].m += 2;
		}
		sum += pokemon[i].count;
		if (max <= pokemon[i].count) {
			max = pokemon[i].count;
			check = i;
		} 
	}
	printf ("%d\n", sum);
	puts (pokemon[check].name);
	return 0;
}

