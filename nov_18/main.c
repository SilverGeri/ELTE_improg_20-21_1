#include <stdio.h>
#include "functions.h"
#include "functions.h"

extern int n;
int error = 0;

int main() {
	printf("%d\n", square(5));

	n = 6;
	printf("%d\n", square_global());

	int left[] = {1, 2, 3};
	int right[] = {3, 4, 5};

	int result = scalar_product(left, right, sizeof(left) / sizeof(int), sizeof(right) / sizeof(int));
	if (error != 0) {
		printf("There was an error during scalar product calculation\n");
	} else {
		printf("Scalar product of left and right is %d\n", result);
	}

	return 0;
}
