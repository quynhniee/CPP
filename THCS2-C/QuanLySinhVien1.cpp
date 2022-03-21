#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct {
	int maSV;
	char name[100];
	double sj1, sj2, sj3;
	double sum;
} list;

int main () {
	list student[1000];
	int selection;
	int count = 0;
	while (1) {
		scanf ("%d", &selection);
		if (selection == 1) {
			int amount;
			scanf ("%d", &amount);
			for (int i=0; i<amount; i++) {
				count++;
				student[count].maSV = count;
				scanf (" ");
				gets (student[count].name);
				scanf ("%lf%lf%lf", &student[count].sj1, &student[count].sj2, &student[count].sj3);
				student[count].sum = student[count].sj1 + student[count].sj2 + student[count].sj3;
			}
			printf ("%d\n", amount);
		}
		if (selection == 2) {
			int macansua;
			scanf ("%d", &macansua);
			scanf (" ");
			gets (student[macansua].name);
			scanf ("%lf%lf%lf", &student[macansua].sj1, &student[macansua].sj2, &student[macansua].sj3);
			student[macansua].sum = student[macansua].sj1 + student[macansua].sj2 + student[macansua].sj3;
			printf ("%d\n", macansua);
		}
		if (selection == 3) {
			for (int i=1; i<=count; i++) {
				for (int j=i+1; j<=count; j++) {
					if (student[i].sum > student[j].sum) {
						list k = student[i];
						student[i] = student[j];
						student[j] = k;
					}
				}
			}
			for (int i=1; i<=count; i++) {
				printf ("%d ", student[i].maSV);
				for (int j=0; j<strlen(student[i].name); j++) 	printf ("%c", student[i].name[j]);
				printf (" %.1lf %.1lf %.1lf\n", student[i].sj1, student[i].sj2, student[i].sj3);
			}
			break;
		}
	}
	return 0;
}

