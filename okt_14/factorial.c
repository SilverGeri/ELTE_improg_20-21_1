#include <stdio.h>

// factorial(n) = n * factorial(n-1)

int factorial(int n) {
	if (n == 1) {
		return 1;
	}

	return n * factorial(n-1);
}


int main() {
	printf("5: %d\n", factorial(5));

	return 0;
}
