#include <stdio.h>


int calc_median(int lower, int upper) {
	return (lower + upper) / 2;
}


int main () {
	printf("Gondolj egy szamra 1 es 1000 kozott!\n");

	int lower = 1, upper = 1001;

	char answer = '\0';

	while (answer != 'e') {
		int value = calc_median(lower, upper);

		printf("%d-hoz kepest kisebb(k), nagyobb(n) vagy egyenlo(e)? ", value);
		scanf("%c", &answer);
		if (answer == 'k') {
			upper = value;
		} else if (answer == 'n') {
			lower = value;
		} else if (answer == 'e') {
			printf("haha, kitalaltam!\n");
		} else {
			printf("Ervenytelen valasz!\n");
		}
	}
}

